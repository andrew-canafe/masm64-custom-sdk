IFNDEF FRAMEDYD_INC
FRAMEDYD_INC equ <1>

PROTO64 external,DoCmd, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file framedyd.inc
echo -----------------------------------------
ENDIF

