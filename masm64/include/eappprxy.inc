IFNDEF EAPPPRXY_INC
EAPPPRXY_INC equ <1>

PROTO64 external,EapHostPeerBeginSession, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerClearConnection, :QWORD,:QWORD
PROTO64 external,EapHostPeerEndSession, :QWORD,:QWORD
PROTO64 external,EapHostPeerFreeEapError, :QWORD
PROTO64 external,EapHostPeerFreeRuntimeMemory, :QWORD
PROTO64 external,EapHostPeerGetAuthStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerGetDataToUnplumbCredentials, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerGetIdentity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerGetResponseAttributes, :QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerGetResult, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerGetSendPacket, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerGetUIContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerInitialize, 
PROTO64 external,EapHostPeerProcessReceivedPacket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerSetResponseAttributes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerSetUIContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerUninitialize, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file eappprxy.inc
echo -----------------------------------------
ENDIF

