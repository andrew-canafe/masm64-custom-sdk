IFNDEF WINFAX_INC
WINFAX_INC equ <1>

PROTO64 external,FaxAbort, :QWORD,:QWORD
PROTO64 external,FaxAccessCheck, :QWORD,:QWORD
PROTO64 external,FaxClose, :QWORD
PROTO64 external,FaxCompleteJobParamsA, :QWORD,:QWORD
PROTO64 external,FaxCompleteJobParamsW, :QWORD,:QWORD
PROTO64 external,FaxConnectFaxServerA, :QWORD,:QWORD
PROTO64 external,FaxConnectFaxServerW, :QWORD,:QWORD
PROTO64 external,FaxEnableRoutingMethodA, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnableRoutingMethodW, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnumGlobalRoutingInfoA, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnumGlobalRoutingInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnumJobsA, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnumJobsW, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnumPortsA, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnumPortsW, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnumRoutingMethodsA, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxEnumRoutingMethodsW, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxFreeBuffer, :QWORD
PROTO64 external,FaxGetConfigurationA, :QWORD,:QWORD
PROTO64 external,FaxGetConfigurationW, :QWORD,:QWORD
PROTO64 external,FaxGetDeviceStatusA, :QWORD,:QWORD
PROTO64 external,FaxGetDeviceStatusW, :QWORD,:QWORD
PROTO64 external,FaxGetJobA, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxGetJobW, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxGetLoggingCategoriesA, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxGetLoggingCategoriesW, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxGetPageData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxGetPortA, :QWORD,:QWORD
PROTO64 external,FaxGetPortW, :QWORD,:QWORD
PROTO64 external,FaxGetRoutingInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxGetRoutingInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxInitializeEventQueue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxOpenPort, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxPrintCoverPageA, :QWORD,:QWORD
PROTO64 external,FaxPrintCoverPageW, :QWORD,:QWORD
PROTO64 external,FaxRegisterRoutingExtensionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxRegisterServiceProviderW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxSendDocumentA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxSendDocumentForBroadcastA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxSendDocumentForBroadcastW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxSendDocumentW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxSetConfigurationA, :QWORD,:QWORD
PROTO64 external,FaxSetConfigurationW, :QWORD,:QWORD
PROTO64 external,FaxSetGlobalRoutingInfoA, :QWORD,:QWORD
PROTO64 external,FaxSetGlobalRoutingInfoW, :QWORD,:QWORD
PROTO64 external,FaxSetJobA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxSetJobW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxSetLoggingCategoriesA, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxSetLoggingCategoriesW, :QWORD,:QWORD,:QWORD
PROTO64 external,FaxSetPortA, :QWORD,:QWORD
PROTO64 external,FaxSetPortW, :QWORD,:QWORD
PROTO64 external,FaxSetRoutingInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxSetRoutingInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxStartPrintJobA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxStartPrintJobW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FaxUnregisterServiceProviderW, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file winfax.inc
echo -----------------------------------------
ENDIF

