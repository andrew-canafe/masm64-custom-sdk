IFNDEF AUDIOENG_INC
AUDIOENG_INC equ <1>

PROTO64 external,AERT_Allocate, :QWORD,:QWORD
PROTO64 external,AERT_Free, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file audioeng.inc
echo -----------------------------------------
ENDIF

