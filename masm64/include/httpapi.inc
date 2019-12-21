IFNDEF HTTPAPI_INC
HTTPAPI_INC equ <1>

PROTO64 external,HttpAddFragmentToCache, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpAddUrl, :QWORD,:QWORD,:QWORD
PROTO64 external,HttpAddUrlToUrlGroup, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpCancelHttpRequest, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpCloseRequestQueue, :QWORD
PROTO64 external,HttpCloseServerSession, :QWORD,:QWORD
PROTO64 external,HttpCloseUrlGroup, :QWORD,:QWORD
PROTO64 external,HttpControlService, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpCreateHttpHandle, :QWORD,:QWORD
PROTO64 external,HttpCreateRequestQueue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpCreateServerSession, :QWORD,:QWORD,:QWORD
PROTO64 external,HttpCreateUrlGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpDeclarePush, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpDeleteServiceConfiguration, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpEvaluateRequest, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpFlushResponseCache, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpGetCounters, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,HttpPrepareUrl, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpQueryRequestQueueProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpQueryServerSessionProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpQueryServiceConfiguration, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpQueryUrlGroupProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpReadFragmentFromCache, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpReceiveClientCertificate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpReceiveHttpRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpReceiveRequestEntityBody, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpRemoveUrl, :QWORD,:QWORD
PROTO64 external,HttpRemoveUrlFromUrlGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpSendHttpResponse, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpSendResponseEntityBody, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpSetRequestQueueProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpSetServerSessionProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpSetServiceConfiguration, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpSetUrlGroupProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpShutdownRequestQueue, :QWORD
PROTO64 external,HttpTerminate, :QWORD,:QWORD
PROTO64 external,HttpWaitForDemandStart, :QWORD,:QWORD
PROTO64 external,HttpWaitForDisconnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HttpWaitForDisconnectEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file httpapi.inc
echo -----------------------------------------
ENDIF

