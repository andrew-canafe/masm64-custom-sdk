IFNDEF WDSTPTC_INC
WDSTPTC_INC equ <1>

PROTO64 external,WdsTransportClientAddRefBuffer, :QWORD
PROTO64 external,WdsTransportClientCancelSession, :QWORD
PROTO64 external,WdsTransportClientCancelSessionEx, :QWORD,:QWORD
PROTO64 external,WdsTransportClientCloseSession, :QWORD
PROTO64 external,WdsTransportClientCompleteReceive, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsTransportClientInitialize, 
PROTO64 external,WdsTransportClientInitializeSession, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsTransportClientQueryStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsTransportClientRegisterCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsTransportClientReleaseBuffer, :QWORD
PROTO64 external,WdsTransportClientShutdown, 
PROTO64 external,WdsTransportClientStartSession, :QWORD
PROTO64 external,WdsTransportClientWaitForCompletion, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wdstptc.inc
echo -----------------------------------------
ENDIF

