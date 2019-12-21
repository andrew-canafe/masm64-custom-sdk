IFNDEF WCMAPI_INC
WCMAPI_INC equ <1>

PROTO64 external,WcmBeginIgnoreProfileList, :QWORD,:QWORD,:QWORD
PROTO64 external,WcmCancelOnDemandRequest, :QWORD
PROTO64 external,WcmCloseHandle, :QWORD,:QWORD
PROTO64 external,WcmCloseOnDemandRequestHandle, :QWORD
PROTO64 external,WcmEndIgnoreProfileList, :QWORD
PROTO64 external,WcmEnterConnectedStandby, 
PROTO64 external,WcmEnterNetQuiet, 
PROTO64 external,WcmEnumInterfaces, :QWORD,:QWORD,:QWORD
PROTO64 external,WcmExitConnectedStandby, 
PROTO64 external,WcmExitNetQuiet, 
PROTO64 external,WcmFreeMemory, :QWORD
PROTO64 external,WcmGetInterfaceToken, :QWORD,:QWORD,:QWORD
PROTO64 external,WcmGetProfileList, :QWORD,:QWORD
PROTO64 external,WcmOpenHandle, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcmOpenOnDemandRequestHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcmOpenOnDemandRequestHandleByWwanProfileName, :QWORD,:QWORD,:QWORD
PROTO64 external,WcmOrderConnection, :QWORD,:QWORD,:QWORD
PROTO64 external,WcmQueryOnDemandRequestStateInfo, :QWORD,:QWORD
PROTO64 external,WcmQueryParameter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcmQueryProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcmResetIgnoreProfileList, :QWORD,:QWORD
PROTO64 external,WcmSetParameter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcmSetProfileList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcmSetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcmStartOnDemandRequest, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wcmapi.inc
echo -----------------------------------------
ENDIF

