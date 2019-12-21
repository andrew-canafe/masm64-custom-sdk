IFNDEF WDSMC_INC
WDSMC_INC equ <1>

PROTO64 external,WdsTransportServerAllocateBuffer, :QWORD,:QWORD
PROTO64 external,WdsTransportServerCompleteRead, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsTransportServerFreeBuffer, :QWORD,:QWORD
PROTO64 external,WdsTransportServerRegisterCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsTransportServerTraceV, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wdsmc.inc
echo -----------------------------------------
ENDIF

