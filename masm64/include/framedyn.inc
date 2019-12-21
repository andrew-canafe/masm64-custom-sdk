IFNDEF FRAMEDYN_INC
FRAMEDYN_INC equ <1>

PROTO64 external,DoCmd, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file framedyn.inc
echo -----------------------------------------
ENDIF

