IFNDEF TSEC_INC
TSEC_INC equ <1>

PROTO64 external,TAPICLIENT_ClientInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_ClientShutdown, :QWORD
PROTO64 external,TAPICLIENT_Free, 
PROTO64 external,TAPICLIENT_GetDeviceAccess, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineAddToConference, :QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineBlindTransfer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineConfigDialog, :QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineDial, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineForward, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineGenerateDigits, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineMakeCall, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineOpen, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineRedirect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetCallData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetCallParams, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetCallPrivilege, :QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetCallTreatment, :QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetCurrentLocation, :QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetDevConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetLineDevStatus, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetMediaControl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetMediaMode, :QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetTerminal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_LineSetTollList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_Load, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_PhoneConfigDialog, :QWORD,:QWORD,:QWORD
PROTO64 external,TAPICLIENT_PhoneOpen, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tsec.inc
echo -----------------------------------------
ENDIF

