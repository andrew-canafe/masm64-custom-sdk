;; returns the number of arguments in arglist
@countargs macro arglist:vararg
	local count
	
	count=0
	% for arg,<arglist>
		count=count+1
	endm
	
	exitm <count>
endm

;; returns the nth argument in args
@argn macro n:req,args:vararg
	local count,retstr
	
	retstr textequ <>
	count=0
	% for arg,<args>
		count=count+1
		if count eq n
			retstr textequ <arg>
			exitm
		endif
	endm
	exitm <retstr>
endm

;; returns the index's register with the right size
@getindexreg macro index:req,regtype:req
	local reg,regsize
	
	reg textequ <>
	
	regsize=type(regtype)
	if index le 4
		if index eq 1
			ifdifi regtype,<real4>
				ifdifi regtype,<real8>
					if regsize eq 1
						reg textequ <cl>
					elseif regsize eq 2
						reg textequ <cx>
					elseif regsize eq 4
						reg textequ <ecx>
					elseif regsize eq 8
						reg textequ <rcx>
					endif
					exitm <reg>
				endif
			endif
			exitm <xmm0>
		elseif index eq 2
			ifdifi regtype,<real4>
				ifdifi regtype,<real8>
					if regsize eq 1
						reg textequ <dl>
					elseif regsize eq 2
						reg textequ <dx>
					elseif regsize eq 4
						reg textequ <edx>
					elseif regsize eq 8
						reg textequ <rdx>
					endif
					exitm <reg>
				endif
			endif
			exitm <xmm1>
		elseif index eq 3
			ifdifi regtype,<real4>
				ifdifi regtype,<real8>
					if regsize eq 1
						reg textequ <r8b>
					elseif regsize eq 2
						reg textequ <r8w>
					elseif regsize eq 4
						reg textequ <r8d>
					elseif regsize eq 8
						reg textequ <r8>
					endif
					exitm <reg>
				endif
			endif
			exitm <xmm2>
		elseif index eq 4
			ifdifi regtype,<real4>
				ifdifi regtype,<real8>
					if regsize eq 1
						reg textequ <r9b>
					elseif regsize eq 2
						reg textequ <r9w>
					elseif regsize eq 4
						reg textequ <r9d>
					elseif regsize eq 8
						reg textequ <r9>
					endif
					exitm <reg>
				endif
			endif
			exitm <xmm3>
		endif
	else
		if regsize eq 1
			reg textequ <al>
		elseif regsize eq 2
			reg textequ <ax>
		elseif regsize eq 4
			reg textequ <eax>
		elseif regsize eq 8
			reg textequ <rax>
		endif
	endif
	
	exitm <reg>
endm

;; defines the prototype of the function as the list of the types of its parameters
proto64 macro functype:req,function:req,paramstype:vararg
	ifidn <functype>,<external>
		extrn function : proc
	endif

	@CatStr(<_proto_>,function) textequ <paramstype>
endm

;; passes the argument in the corresponding position according to the index
pushparam macro index:req,argtype:req,isaddr:req,arg:req
	local reg
	
	reg textequ @getindexreg(index,argtype)
	if index le 4
		ifdifi argtype,<real4>
			ifdifi argtype,<real8>
				if isaddr									;; is an address
					lea reg,arg					
				else										;; is memory, register, or constant
					mov reg,arg
				endif
			else											;; is double presition
				if (opattr(arg)) and 0000000000010000b		;; is a register
					movsd reg,arg
				else										;; is memory
					movsd reg,mmword ptr arg
				endif
			endif
		else												;; is single presition
			if (opattr(arg)) and 0000000000010000b			;; is a register
				movss reg,arg
			else											;; is memory
				movss reg,dword ptr arg
			endif
		endif
	else
		if isaddr											;; is an address
			lea reg,arg
			mov [rsp+((index-1)*8)],reg		
		elseif (opattr(arg)) and 0000000000010000b			;; is a register
			ifdifi argtype,<real4>
				ifdifi argtype,<real8>
					mov argtype ptr [rsp+((index-1)*8)],arg
				else										;; is double presition
					movsd mmword ptr [rsp+((index-1)*8)],arg
				endif
			else											;; is single presition
				movss dword ptr [rsp+((index-1)*8)],arg
			endif
		elseif (opattr(arg)) and 0000000000000100b			;; is a constant
			mov argtype ptr [rsp+((index-1)*8)],arg
		else												;; is a memory operand
			mov reg,arg
			mov [rsp+((index-1)*8)],reg
		endif
	endif
endm

;; passes the parameters and calls the function
invoke macro function:req,paramslist:vararg
	local typeslist,index,invokedparams,paramvalue,paramtype
	
	typeslist textequ @CatStr(<_proto_>,function)
	
	invokedparams=0
	index=@countargs(paramslist)
	if index eq @countargs(typeslist)
		if index ge invokedparams
			invokedparams=index
		endif
		repeat index
			paramvalue textequ @argn(index,paramslist)
			paramtype textequ @argn(index,typeslist)
			
			pos=@InStr(1,%paramvalue,<addr >)
			if pos											;; is an address
				pushparam index,paramtype,-1,@SubStr(%paramvalue,pos+5)
			else
				pushparam index,paramtype,0,paramvalue
			endif		
			
			index=index-1
		endm
		call function
	else
		.err <&function doesn't take this number of parameters>
	endif
endm

;; returns the name, type, and if it's an array the count of the variable
getvarinfo macro varname:req,vartype:req,varcount:req,var:req
	local pos
	
	pos=@InStr(1,var,<:>)
	varname textequ <_>,@SubStr(var,1,pos-1)
	vartype textequ @SubStr(var,pos+1)
	
	pos=@InStr(1,%varname,<{>)
	if pos
		varcount=@SubStr(%varname,pos+1,@InStr(1,%varname,<}>)-pos-1)
		varname textequ @SubStr(%varname,1,pos-1)
	else
		varcount=1
	endif
endm

;; declares the label of the function
;; copies the first four parameters, if exist, in the memory
;; creates a stack frame if needed
;; defines the names of the parameters as pointers of the right size to the adecuate memory
;; the stack pointer enters unaligned to dqword because of the return addres
function macro label:req,params:vararg
	local paramindex

	public label
	label:
	
	paramindex=1
	for param,<params>
		local index,varname,vartype,varcount
		
		index=paramindex
		
		getvarinfo varname,vartype,varcount,param
		@SubStr(%varname,2) equ [rbp+(index*8)]
		
		if paramindex le 4
			ifdifi vartype,<real4>
				ifdifi vartype,<real8>
					mov vartype ptr [rsp+(paramindex*8)],@getindexreg(paramindex,vartype)
				else
					movsd mmword ptr [rsp+(paramindex*8)],@getindexreg(paramindex,vartype)
				endif
			else
				movss dword ptr [rsp+(paramindex*8)],@getindexreg(paramindex,vartype)
			endif
		endif
		
		paramindex=paramindex+1
	endm
	
	rbppushed=0
	if paramindex gt 1
		rbppushed=1
		push rbp				;; alings rsp to dqword and saves rbp
		lea rbp,[rsp+8]
	endif

	;; initializes variables for global use of the function	
	stacksize=0
	paramssize=0
	alignsize=0
	savedregs textequ <>
	calledparams=-1
	invokedparams=-1
endm

;; defines the maximun number of parameters pased to a function called by the actual function
begin_alloc macro maxparams
	ifnb <maxparams>
		if maxparams le 4
			paramssize=4*8
		else
			paramssize=maxparams*8
		endif
		calledparams=maxparams
	endif
	
	;; initializes variables for global use of the allocation of memory
	varssize=0
endm	

;; define the name of a variable as the pointer of the right size to the adecuate memory
alloc_var macro var:req
	local index,varname,vartype,varcount
	
	getvarinfo varname,vartype,varcount,var
	
	;; increments the number of total allocated bytes
	varssize=varssize+(type(vartype)*varcount)
	
	index=varssize+8			;; for having saved rbp
	@SubStr(%varname,2) equ [rbp-index]
endm

;; creates a memory frame if we have locals and we haven't created one
;; calculates, alings and allocate the size of the local memory (parametes passed, allocated bytes, registers used)
;; saves the registers in the memory
end_alloc macro reglist:vararg
	local regcount,regindex
	
	savedregs textequ <reglist>
	regcount=@countargs(%savedregs)
	
	stacksize=paramssize+(regcount*8)+varssize
	
	if (varssize gt 0) and (rbppushed eq 0)
		rbppushed=1
		push rbp							;; alings the stack pointer to dqword and saves rbp
		lea rbp,[rsp+8]
	endif
	
	if rbppushed eq 1						;; the stack pointer is aligned to dqword
		while (stacksize mod 16) ne 0		;; aligns rsp to dqword counting the return address and the push rbp
			stacksize=stacksize+1
			alignsize=alignsize+1
		endm
	else									;; the stack pointer isn't aligned to dqword
		while ((stacksize+8) mod 16) ne 0	;; aligns rsp to dqword counting the return address
			stacksize=stacksize+1
			alignsize=alignsize+1
		endm
	endif
	if stacksize gt 0
		sub rsp,stacksize
		
		regindex=0
		%for reg,<savedregs>				;; saves each register
			mov [rsp+(paramssize+alignsize)+(regindex*8)],reg
					
			regindex=regindex+1
		endm
	endif
endm

;; restores each register saved
;; frees the allocated space in memory
;; if a stack frame was created, destroys it
endf macro
	local regindex
	
	if calledparams ne invokedparams
		.err <Incorrect number of maximun allocated parameters in function declaration>
	else
		if stacksize gt 0
			regindex=0
			%for reg,<savedregs>				;; restores each register
				mov reg,[rsp+(paramssize+alignsize)+(regindex*8)]
				
				regindex=regindex+1
			endm
			
			add rsp,stacksize
		endif
		if rbppushed eq 1
			pop rbp
		endif
	endif
endm
