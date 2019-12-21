IFNDEF HTMLHELP_INC
HTMLHELP_INC equ <1>

PROTO64 external,HtmlHelpA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HtmlHelpW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file htmlhelp.inc
echo -----------------------------------------
ENDIF

