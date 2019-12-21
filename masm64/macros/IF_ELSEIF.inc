;-------------------------------------------------------------------------------------------------
;	      Gimmickry MACRO for alternative high level syntax in MASM 32
;		BETTA version. The notice request to send to mur@forpost.ru   
;				© Yuriy V. Myraviev  ©
;	  MACRO is support additional flags of the processor (list see below).
;     @IF, @ELSEIF, ... allows to use the additional commands for calculation of the conditions.
;  Hope that in following version MASM 32 supports of these possibilities will be built-in .IF, .UNTIL, ...
; Limitation along of predefined symbols !, <, >, &:
;	not support of compare operators: ==, !=, <, >, <=, >=
;	ATTENTION: in negation of flags symbol ! replaced to NO (for example: !CARRY? -> NOCARRY?)
;		  FLAG BEGINNING OF SYMBOL ! WILL IS PROCESSED INCORRECT
;-------------------------------------------------------------------------------------------------
; Formats of alternative high level syntax [unessential parameters]:
;  @IF [<<command>>, ...], flags
;    ...
;  [@ELSEIF [<<command>>, ...], flags]	; (see example below)
;    ...
;  [@ELSE]
;    ...
;  @ENDIF
; Note: in << >> essential introduced only command, included comma (for example: <<mov EAX, 5>>)
;  - - - - - - - - - - - - - - - - 
;  @REPEAT
;    ...
;    [@BREAK]
;    [@BREAK [@IF] [<<command>>, ...], flags]
;    [@BREAK [.IF] [<<command>>, ...], flags]
;    ...
;  @UNTIL [<<command>>, ...], [flags]
;  - - - - - - - - - - - - - - - - 
;  @WHILE [<<command>>, ...], [flags]
;    ...
;    [@BREAK]
;    [@BREAK [@IF] [<<command>>, ...], flags]
;    [@BREAK [.IF] [<<command>>, ...], flags]
;    ...
;  @ENDW
;-------------------------------------------------------------------------------------------------
; List supported flag and their combination:
;  CARRY?		; carry				; CF=1
;  OVERFLOW?		; overflow			; OF=1
;  PARITY?		; parity			; PF=1
;  SIGN?		; sign (number < 0)		; SF=1
;  ZERO?		; zero (number = 0)		; ZF=1
;  EQUAL?		; equal (equivalent ZERO?)	; ZF=1
;  ABOVE?		; above (unsigned greater)	; CF=0 and ZF=0
;  ABOVE?||EQUAL?	; above or equal (unsigned)	; CF=0
;  BELOW?		; below (unsighed less)		; CF=1
;  BELOW?||EQUAL?	; below or equal (unsighed)	; CF=1 or ZF=1
;  GREATER?		; greater (sighed)		; ZF=0 and SF=OF
;  GREATER?||EQUAL?	; greater or equal (sighed)	; SF=OF
;  LESS?		; less (sighed)			; SF != OF
;  LESS?||EQUAL?	; less or equal (sighed)	; ZF=1 or SF != OF
;  NOCARRY?		; not carry			; CF=0
;  NOOVERFLOW?		; not overflow			; OF=0
;  NOPARITY?		; not parity			; PF=0
;  NOSIGN?		; not sign (number >= 0)	; SF=0
;  NOZERO?		; not zero (число != 0)		; ZF=0
;  NOEQUAL?		; not equal			; ZF=0
;  NOABOVE?		; not above			; CF=1 or ZF=1
;  NOBELOW?		; not below			; CF=0
;  NOGREATER?		; not greater 			; ZF=1 or SF != OF
;  NOLESS?		; not less			; SF=OF
;  other combinations flag until they are supported
; --------------------------------------------------------------------------------------------------
;		MACRO for defined and undefined local labels:
; call  jmp @LABEL(имя_метки) possible use both before, and after DEFLABEL label_name[:]
;    DEFLABEL label_name[:]	; Define local label
;    @LABEL(label_name)		; Reference to local label
;    UNDEFLABEL label_name	; Close area define local label
; after UNDEFLABEL possible define new label with same name!!!
; --------------------------------------------------------------------------------------------------
;			FOR EXAMPLES:
; include Alt_IF_en.mac
;.data?
; iVAR_1   dd ?
; iVAR_2   dd ?
; qVAR_3   dq ?
;.code
; - - - - - - - - - - 
;  ...
;  @IF <<or EDX, EDX>>, SIGN?	; register EDX < 0
;    ...
;  @ELSEIF <<mov EAX, [iVAR_1]>>, <<cmp EAX, [iVAR_2]>>, GREATER?||EQUAL?  ; iVAR_1 >= iVAR_2 (signed)
;    ...
;  @ELSEIF FLD [qVAR_3], FICOMP [iVAR_2], FSTSW AX, SAHF, ABOVE?||EQUAL?    ; qVAR_3 >= iVAR_2 (signed!)
;    ...       ; ATTENTION: at FPU compare use only UNSIGHED flags (ABOVE?, BELOW?)
;    ...       ;            although FPU compare ALWAYS signed !!!
;  @ENDIF
; Note: in << >> essential introduced only command, included comma (for example: <<mov EAX, 5>>)
; - - - - - - - - - - 
;  mov ECX, 15
;  @REPEAT
;    ...
;    @BREAK @IF <<cmp EAX, -5>>, LESS? || EQUAL?   ; early exit if EAX <= -5
;    ...
;    cmp [iVAR_1], 10
;  @UNTILCXZ ABOVE?||EQUAL?   ; exit from loop if [iVAR_1] >= 10 (unsigned) or ECX == 0
; --------------------------------------------------------------------------------------------------
TRUE = 1
FALSE = 0
; --------------------------------------------------------------------------------------------------
IF_Level = 0    ; counters level of nesting
REPEAT_Level = 0
; --------------------------------------------------------------------------------------------------

; --------------------------------------------------------------------------------------------------
;  accessorial MACRO for DEFLABEL
DEFLABEL_2 MACRO Label
  .ERRNZ Label&_DEF, <again definied label not UNDEFLABEL>
  IFNDEF Label&_count
    Label&_count = 0
  ENDIF
  Label&_DEF = TRUE
  @CatStr(Label, <_>, %Label&_count, <:>)
;  % ECHO @CatStr(Label, <_>, %Label&_count, <:>)
ENDM

; --------------------------------------------------------------------------------------------------
DEFLABEL MACRO Label
   IFIDNI @SubStr(Label, @SizeStr(Label)), <:>
      DEFLABEL_2 @SubStr(Label, 1, @SizeStr(Label) - 1)
   ELSE
      DEFLABEL_2 Label
   ENDIF
ENDM

; --------------------------------------------------------------------------------------------------
@LABEL MACRO Label
  IFNDEF Label&_count
    Label&_count = 0
  ENDIF
;  % ECHO j.. @CatStr(Label, <_>, %Label&_count)
  EXITM <@CatStr(Label, <_>, %Label&_count)>
ENDM

; --------------------------------------------------------------------------------------------------
UNDEFLABEL MACRO Label
  .ERRE Label&_DEF, <label not DEFLABEL>
  Label&_DEF = FALSE
  Label&_count = Label&_count + 1
ENDM

; -------- Macrofunction for clear of string from spases and tabs ------------
@DEL_SP MACRO string
LOCAL str_nsp
  str_nsp TEXTEQU <>
  FORC char, <string>
    IFDIFI <char>, < >
      IFDIFI <char>, <	>
        str_nsp TEXTEQU @CatStr(%str_nsp, char)
      ENDIF 
    ENDIF 
  ENDM
  EXITM <str_nsp>
ENDM

; --------------------------------------------------------------------------------------------------
;	Auxiliary macro for generation of the inverse conditional jmp
;			used in @IF, @ELSEIF and @WHILE
_IF_JMP_ MACRO condition, label
LOCAL cond
  cond TEXTEQU @DEL_SP(condition)	; clear condition from spases
  IFIDNI cond,     <CARRY?>
     jnc label
  ELSEIFIDNI cond, <OVERFLOW?>
     jno label
  ELSEIFIDNI cond, <PARITY?>
     jnp label
  ELSEIFIDNI cond, <SIGN?>
     jns label
  ELSEIFIDNI cond, <ZERO?>
     jnz label
  ELSEIFIDNI cond, <EQUAL?>
     jne label
  ELSEIFIDNI cond, <ABOVE?>
     jna label
  ELSEIFIDNI cond, <ABOVE?||EQUAL?>
     jnae label
  ELSEIFIDNI cond, <BELOW?>
     jnb label
  ELSEIFIDNI cond, <BELOW?||EQUAL?>
     jnbe label
  ELSEIFIDNI cond, <GREATER?>
     jng label
  ELSEIFIDNI cond, <GREATER?||EQUAL?>
     jnge label
  ELSEIFIDNI cond, <LESS?>
     jnl  label
  ELSEIFIDNI cond, <LESS?||EQUAL?>
     jnle label
  ELSEIFIDNI cond, <NOCARRY?>
     jc label
  ELSEIFIDNI cond, <NOOVERFLOW?>
     jo label
  ELSEIFIDNI cond, <NOPARITY?>
     jp label
  ELSEIFIDNI cond, <NOSIGN?>
     js label
  ELSEIFIDNI cond, <NOZERO?>
     jz label
  ELSEIFIDNI cond, <NOEQUAL?>
     je label
  ELSEIFIDNI cond, <NOABOVE?>
     ja label
  ELSEIFIDNI cond, <NOBELOW?>
     jb label
  ELSEIFIDNI cond, <NOGREATER?>
     jg label
  ELSEIFIDNI cond, <NOLESS?>
     jl label
  ELSE
     .ERR <Not supported condition>
  ENDIF
ENDM
; --------------------------------------------------------------------------------------------------
@IF MACRO ParmList:VARARG
LOCAL cond, First_param
  IF_Level = IF_Level + 1
  ; --- additional commands of the comparison ---
  First_param = TRUE
  FOR par, <ParmList>
    IFE First_param
       cond
    ENDIF
    cond TEXTEQU <par>
    First_param = FALSE
  ENDM
  _IF_JMP_ cond, @LABEL(@CatStr(_ELSE_, %IF_Level))	; condition jmp to label ELSE
ENDM
;-------------------------------------------------------------------------------------------------
@ELSE MACRO
  .ERRE IF_Level, <@ELSE without @IF>
  jmp @LABEL(@CatStr(_ENDIF_, %IF_Level))	; jmp to label ENDIF 
  DEFLABEL @CatStr(_ELSE_, %IF_Level)		; define current label ELSE
  UNDEFLABEL @CatStr(_ELSE_, %IF_Level)		; Close area define ELSE
ENDM
;-------------------------------------------------------------------------------------------------
@ELSEIF MACRO ParmList:VARARG
LOCAL cond, First_param
  .ERRE IF_Level, <@ELSEIF without @IF>
  jmp @LABEL(@CatStr(_ENDIF_, %IF_Level))	; jmp to label ENDIF 
  DEFLABEL @CatStr(_ELSE_, %IF_Level)		; define current label ELSE
  UNDEFLABEL @CatStr(_ELSE_, %IF_Level)		; Close area define ELSE
  ; --- additional commands of the comparison ---
  First_param = TRUE
  FOR par, <ParmList>
    IFE First_param
       cond
    ENDIF
    cond TEXTEQU <par>
    First_param = FALSE
  ENDM
  ; --- Processing flag and conditional transition ---
  _IF_JMP_ cond, @LABEL(@CatStr(_ELSE_, %IF_Level))	; condition jmp to label ELSE
ENDM
;-------------------------------------------------------------------------------------------------
@ENDIF MACRO
  .ERRE IF_Level, <@ENDIF without @IF>
  DEFLABEL @CatStr(_ELSE_, %IF_Level)		; define current label ELSE
  UNDEFLABEL @CatStr(_ELSE_, %IF_Level)		; Close area define ELSE
  DEFLABEL @CatStr(_ENDIF_, %IF_Level)		; define current label ENDIF
  UNDEFLABEL @CatStr(_ENDIF_, %IF_Level)	; Close area define ENDIF
  IF_Level = IF_Level - 1
ENDM

;-------------------------------------------------------------------------------------------------
@REPEAT MACRO
  REPEAT_Level = REPEAT_Level + 1
  DEFLABEL @CatStr(_REPEAT_, %REPEAT_Level)	; define current label REPEAT
  @CatStr(_REPEAT_, %REPEAT_Level, _DEF) = TRUE ; flag of open @REPEAT
ENDM

;-------------------------------------------------------------------------------------------------
@UNTILCXZ MACRO ParmList:VARARG
LOCAL Exit, cond
 IFE @CatStr(_REPEAT_, %REPEAT_Level, _DEF)
   .ERR <@UNTIL without @REPEAT>
 ELSE
  IFNB <ParmList>
  ; --- additional commands of the comparison ---
     First_param = TRUE
     FOR par, <ParmList>
       IFE First_param
          cond
       ENDIF
       cond TEXTEQU <par>
       First_param = FALSE
     ENDM
     cond TEXTEQU @DEL_SP(%cond)	; clear condition from spases
  ENDIF
  IFB <ParmList>
      jmp @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <CARRY?>
     jc Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <OVERFLOW?>
     jo Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <PARITY?>
     jp Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <SIGN?>
     js Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <ZERO?>
     loopnz @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <EQUAL?>
     loopne @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <ABOVE?>
     ja Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <ABOVE?||EQUAL?>
     jae Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <BELOW?>
     jb Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <BELOW?||EQUAL?>
     jbe Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <GREATER?>
     jg Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <GREATER?||EQUAL?>
     jge Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <LESS?>
     jl Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <LESS?||EQUAL?>
     jle Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOCARRY?>
     jnc Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOOVERFLOW?>
     jno Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOPARITY?>
     jnp Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOSIGN?>
     jns Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOZERO?>
     loopz @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOEQUAL?>
     loope @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOABOVE?>
     jna Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOBELOW?>
     jnb Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOGREATER?>
     jng Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSEIFIDNI cond, <NOLESS?>
     jnl Exit
     loop @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
  ELSE
     .ERR <Not supported condition>
  ENDIF
  DEFLABEL @CatStr(_ENDUNTIL_, %REPEAT_Level)	; define current label ENDUNTIL for @BREAK
  UNDEFLABEL @CatStr(_ENDUNTIL_, %REPEAT_Level)	; close area define of label ENDUNTIL
  UNDEFLABEL @CatStr(_REPEAT_, %REPEAT_Level)	; close area define of label REPEAT
  @CatStr(<_REPEAT_>, %REPEAT_Level, <_DEF>) = FALSE ; flag close @REPEAT
  REPEAT_Level = REPEAT_Level - 1
 Exit:
 ENDIF
ENDM

;-------------------------------------------------------------------------------------------------
@UNTIL MACRO ParmList:VARARG
LOCAL cond
 IFE @CatStr(_REPEAT_, %REPEAT_Level, _DEF)
   .ERR <@UNTIL without @REPEAT>
 ELSE
   IFNB <ParmList>
      ; --- дополнительные команды сравнения ---
      First_param = TRUE
      FOR par, <ParmList>
        IFE First_param
           cond
        ENDIF
        cond TEXTEQU <par>
        First_param = FALSE
      ENDM
      cond TEXTEQU @DEL_SP(%cond)	; очистить условие от пробелов
   ENDIF
   IFB <ParmList>
      jmp @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <TRUE>
      jmp @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <CARRY?>
      jnc @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <OVERFLOW?>
      jno @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <PARITY?>
      jnp @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <SIGN?>
      jns @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <ZERO?>
      jnz @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <EQUAL?>
      jne @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <ABOVE?>
      jna @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <ABOVE?||EQUAL?>
      jnae @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <BELOW?>
      jnb @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <BELOW?||EQUAL?>
      jnbe @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <GREATER?>
      jng @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <GREATER?||EQUAL?>
      jnge @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <LESS?>
      jnl  @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <LESS?||EQUAL?>
      jnle @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOCARRY?>
      jc @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOOVERFLOW?>
      jo @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOPARITY?>
      jp @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOSIGN?>
      js @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOZERO?>
      jz @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOEQUAL?>
      je @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOABOVE?>
      ja @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOBELOW?>
      jb @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOGREATER?>
      jg @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSEIFIDNI cond, <NOLESS?>
      jl @LABEL(@CatStr(_REPEAT_, %REPEAT_Level))
   ELSE
      .ERR <Not supported condition>
   ENDIF
  DEFLABEL @CatStr(_ENDUNTIL_, %REPEAT_Level)	; define current label ENDUNTIL for @BREAK
  UNDEFLABEL @CatStr(_ENDUNTIL_, %REPEAT_Level)	; close area define of label ENDUNTIL
  UNDEFLABEL @CatStr(_REPEAT_, %REPEAT_Level)	; close area define of label REPEAT
  @CatStr(_REPEAT_, %REPEAT_Level, _DEF) = FALSE ; flag close @REPEAT
  REPEAT_Level = REPEAT_Level - 1
 ENDIF
ENDM

;-------------------------------------------------------------------------------------------------
;  Auxiliary macro for jmp of aboveboard condition
;	use in @BREAK
_direct_IF_JMP_ MACRO condition, label
LOCAL cond
  cond TEXTEQU @DEL_SP(condition)	; clear condition from spases
     IFIDNI cond,     <CARRY?>
        jc label
     ELSEIFIDNI cond, <OVERFLOW?>
        jo label
     ELSEIFIDNI cond, <PARITY?>
        jp label
     ELSEIFIDNI cond, <SIGN?>
        js label
     ELSEIFIDNI cond, <ZERO?>
        jz label
     ELSEIFIDNI cond, <EQUAL?>
        je label
     ELSEIFIDNI cond, <ABOVE?>
        ja label
     ELSEIFIDNI cond, <ABOVE?||EQUAL?>
        jae label
     ELSEIFIDNI cond, <BELOW?>
        jb label
     ELSEIFIDNI cond, <BELOW?||EQUAL?>
        jbe label
     ELSEIFIDNI cond, <GREATER?>
        jg label
     ELSEIFIDNI cond, <GREATER?||EQUAL?>
        jge label
     ELSEIFIDNI cond, <LESS?>
        jl  label
     ELSEIFIDNI cond, <LESS?||EQUAL?>
        jle label
     ELSEIFIDNI cond, <NOCARRY?>
        jnc label
     ELSEIFIDNI cond, <NOOVERFLOW?>
        jno label
     ELSEIFIDNI cond, <NOPARITY?>
        jnp label
     ELSEIFIDNI cond, <NOSIGN?>
        jns label
     ELSEIFIDNI cond, <NOZERO?>
        jnz label
     ELSEIFIDNI cond, <NOEQUAL?>
        jne label
     ELSEIFIDNI cond, <NOABOVE?>
        jna label
     ELSEIFIDNI cond, <NOBELOW?>
        jnb label
     ELSEIFIDNI cond, <NOGREATER?>
        jng label
     ELSEIFIDNI cond, <NOLESS?>
        jnl label
     ELSE
        .ERR <Not supported condition>
     ENDIF
ENDM

;-------------------------------------------------------------------------------------------------
@BREAK MACRO ParmList:VARARG
LOCAL cond
 IFE REPEAT_Level
   .ERR <@BREAK without @REPEAT or @WHILE>
 ELSE
   IFB <ParmList>
     jmp @LABEL(@CatStr(_ENDUNTIL_, %REPEAT_Level))
   ELSE
  ; --- additional commands of the comparison ---
      First_param = TRUE
      FOR par, <ParmList>
        IFE First_param
           cond
        ENDIF
        IFIDNI @SubStr(<par>, 2, 2), <IF>
          cond TEXTEQU @SubStr(<par>, 4)
        ELSE
          cond TEXTEQU <par>
        ENDIF
        First_param = FALSE
      ENDM
      cond TEXTEQU @DEL_SP(%cond)	; clear condition from spases
      % ECHO cond
     _direct_IF_JMP_ cond, @LABEL(@CatStr(_ENDUNTIL_, %REPEAT_Level))
   ENDIF
 ENDIF
ENDM

;-------------------------------------------------------------------------------------------------
@WHILE MACRO ParmList:VARARG
LOCAL cond
  REPEAT_Level = REPEAT_Level + 1
  DEFLABEL @CatStr(_WHILE_, %REPEAT_Level)	; define current label WHILE
  @CatStr(_WHILE_, %REPEAT_Level, _DEF) = TRUE	; flag open @WHILE
  IFNB <ParmList>
  ; --- additional commands of the comparison ---
      First_param = TRUE
      FOR par, <ParmList>
        IFE First_param
           cond
        ENDIF
        cond TEXTEQU <par>
        First_param = FALSE
      ENDM
     _IF_JMP_ cond, @LABEL(@CatStr(_ENDUNTIL_, %REPEAT_Level))
  ENDIF
ENDM

;-------------------------------------------------------------------------------------------------
@ENDW MACRO condition
LOCAL Cur_Count
   IFE @CatStr(_WHILE_, %REPEAT_Level, _DEF)
      .ERR <@ENDW without @WHILE>
   ELSE
      jmp @LABEL(@CatStr(_WHILE_, %REPEAT_Level))
      DEFLABEL @CatStr(_ENDUNTIL_, %REPEAT_Level)	; define current label ENDUNTIL for @BREAK
      UNDEFLABEL @CatStr(_ENDUNTIL_, %REPEAT_Level)	; close area define of label ENDUNTIL
      UNDEFLABEL @CatStr(_WHILE_, %REPEAT_Level)	; close area define of label  WHILE
      @CatStr(_WHILE_, %REPEAT_Level, _DEF) = FALSE	; flag close @WHILE
      REPEAT_Level = REPEAT_Level - 1
   ENDIF
ENDM
