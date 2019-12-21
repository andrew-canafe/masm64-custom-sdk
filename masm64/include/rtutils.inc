IFNDEF RTUTILS_INC
RTUTILS_INC equ <1>

PROTO64 external,LogErrorA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LogErrorW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LogEventA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LogEventW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MprSetupProtocolEnum, :QWORD,:QWORD,:QWORD
PROTO64 external,MprSetupProtocolFree, :QWORD
PROTO64 external,RouterAssert, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterGetErrorStringA, :QWORD,:QWORD
PROTO64 external,RouterGetErrorStringW, :QWORD,:QWORD
PROTO64 external,RouterLogDeregisterA, :QWORD
PROTO64 external,RouterLogDeregisterW, :QWORD
PROTO64 external,RouterLogEventA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterLogEventDataA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterLogEventDataW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterLogEventStringA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterLogEventStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterLogEventValistExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterLogEventValistExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterLogEventW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterLogRegisterA, :QWORD
PROTO64 external,RouterLogRegisterW, :QWORD
PROTO64 external,TraceDeregisterA, :QWORD
PROTO64 external,TraceDeregisterExA, :QWORD,:QWORD
PROTO64 external,TraceDeregisterExW, :QWORD,:QWORD
PROTO64 external,TraceDeregisterW, :QWORD
PROTO64 external,TraceDumpExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TraceDumpExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TraceGetConsoleA, :QWORD,:QWORD
PROTO64 external,TraceGetConsoleW, :QWORD,:QWORD
PROTO64 external,TracePutsExA, :QWORD,:QWORD,:QWORD
PROTO64 external,TracePutsExW, :QWORD,:QWORD,:QWORD
PROTO64 external,TraceRegisterExA, :QWORD,:QWORD
PROTO64 external,TraceRegisterExW, :QWORD,:QWORD
PROTO64 external,TraceVprintfExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TraceVprintfExW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rtutils.inc
echo -----------------------------------------
ENDIF

