include x64calling.inc
include IF_ELSEIF.inc


;this macro makes rsp aligned after "proc" line 
;you must have some locals/arguments or it won't work with default epilogue
;example use
;OPTION PROLOGUE:NewPrologue64
;written by drizz
NewPrologue64 MACRO procname, flags, parambytes, localbytes, reglist, userparms
LOCAL regadjust
regadjust = 0
FOR reg,reglist
regadjust = regadjust XOR 1; odd,even,odd
ENDM
push rbp
; aligned @16 after push
mov rbp,rsp
; has locals?
IF (localbytes GT 0)
IF ((localbytes SHR 3) AND 1) EQ regadjust
;; if both are odd or both are even
sub rsp,localbytes
ELSE
sub rsp,localbytes+8
ENDIF
ELSEIF (regadjust EQ 0); is number of regs to push EVEN?
sub rsp,8
ENDIF
FOR reg,reglist
push reg
ENDM
EXITM %localbytes
ENDM




