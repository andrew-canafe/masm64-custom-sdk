IFNDEF QUARTZ_INC
QUARTZ_INC equ <1>

PROTO64 external,AMGetErrorTextA, :QWORD,:QWORD,:QWORD
PROTO64 external,AMGetErrorTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,AmpFactorToDB, :QWORD
PROTO64 external,DBToAmpFactor, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file quartz.inc
echo -----------------------------------------
ENDIF

