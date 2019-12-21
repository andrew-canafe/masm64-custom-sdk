IFNDEF DBGENG_INC
DBGENG_INC equ <1>

PROTO64 external,DebugConnect, :QWORD,:QWORD,:QWORD
PROTO64 external,DebugConnectWide, :QWORD,:QWORD,:QWORD
PROTO64 external,DebugCreate, :QWORD,:QWORD
PROTO64 external,DebugCreateEx, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dbgeng.inc
echo -----------------------------------------
ENDIF

