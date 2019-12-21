IFNDEF ICMUI_INC
ICMUI_INC equ <1>

PROTO64 external,SetupColorMatchingA, :QWORD
PROTO64 external,SetupColorMatchingW, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file icmui.inc
echo -----------------------------------------
ENDIF

