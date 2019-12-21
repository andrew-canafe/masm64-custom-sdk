IFNDEF WINHTTP_INC
WINHTTP_INC equ <1>

PROTO64 external,SvchostPushServiceGlobals, :QWORD
PROTO64 external,WinHttpAddRequestHeaders, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpAutoProxySvcMain, :QWORD,:QWORD
PROTO64 external,WinHttpCheckPlatform, 
PROTO64 external,WinHttpCloseHandle, :QWORD
PROTO64 external,WinHttpConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpConnectionDeleteProxyInfo, :QWORD,:QWORD
PROTO64 external,WinHttpConnectionFreeNameList, :QWORD
PROTO64 external,WinHttpConnectionFreeProxyInfo, :QWORD
PROTO64 external,WinHttpConnectionFreeProxyList, :QWORD
PROTO64 external,WinHttpConnectionGetNameList, :QWORD
PROTO64 external,WinHttpConnectionGetProxyInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpConnectionGetProxyList, :QWORD,:QWORD
PROTO64 external,WinHttpConnectionSetProxyInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpCrackUrl, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpCreateProxyResolver, :QWORD,:QWORD
PROTO64 external,WinHttpCreateUrl, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpDetectAutoProxyConfigUrl, :QWORD,:QWORD
PROTO64 external,WinHttpFreeProxyResult, :QWORD
PROTO64 external,WinHttpGetDefaultProxyConfiguration, :QWORD
PROTO64 external,WinHttpGetIEProxyConfigForCurrentUser, :QWORD
PROTO64 external,WinHttpGetProxyForUrl, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpGetProxyForUrlEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpGetProxyResult, :QWORD,:QWORD
PROTO64 external,WinHttpGetTunnelSocket, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpOpen, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpOpenRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpProbeConnectivity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpQueryAuthSchemes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpQueryDataAvailable, :QWORD,:QWORD
PROTO64 external,WinHttpQueryHeaders, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpQueryOption, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpReadData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpReceiveResponse, :QWORD,:QWORD
PROTO64 external,WinHttpResetAutoProxy, :QWORD,:QWORD
PROTO64 external,WinHttpSaveProxyCredentials, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpSendRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpSetCredentials, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpSetDefaultProxyConfiguration, :QWORD
PROTO64 external,WinHttpSetOption, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpSetStatusCallback, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpSetTimeouts, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpTimeFromSystemTime, :QWORD,:QWORD
PROTO64 external,WinHttpTimeToSystemTime, :QWORD,:QWORD
PROTO64 external,WinHttpWebSocketClose, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpWebSocketCompleteUpgrade, :QWORD,:QWORD
PROTO64 external,WinHttpWebSocketQueryCloseStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpWebSocketReceive, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpWebSocketSend, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpWebSocketShutdown, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHttpWriteData, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file winhttp.inc
echo -----------------------------------------
ENDIF

