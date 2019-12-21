IFNDEF DINPUT8_INC
DINPUT8_INC equ <1>

PROTO64 external,DirectInput8Create, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dinput8.inc
echo -----------------------------------------
ENDIF

