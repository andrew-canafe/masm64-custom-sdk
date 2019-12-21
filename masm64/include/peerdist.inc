IFNDEF PEERDIST_INC
PEERDIST_INC equ <1>

PROTO64 external,PeerDistClientAddContentInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistClientAddData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistClientBlockRead, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistClientCancelAsyncOperation, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistClientCloseContent, :QWORD,:QWORD
PROTO64 external,PeerDistClientCompleteContentInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistClientFlushContent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistClientGetInformationByHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistClientOpenContent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistClientStreamRead, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistGetOverlappedResult, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistGetStatus, :QWORD,:QWORD
PROTO64 external,PeerDistGetStatusEx, :QWORD,:QWORD
PROTO64 external,PeerDistRegisterForStatusChangeNotification, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistRegisterForStatusChangeNotificationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistServerCancelAsyncOperation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistServerCloseContentInformation, :QWORD,:QWORD
PROTO64 external,PeerDistServerCloseStreamHandle, :QWORD,:QWORD
PROTO64 external,PeerDistServerOpenContentInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistServerOpenContentInformationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistServerPublishAddToStream, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistServerPublishCompleteStream, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistServerPublishStream, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistServerRetrieveContentInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistServerUnpublish, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistShutdown, :QWORD
PROTO64 external,PeerDistStartup, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerDistUnregisterForStatusChangeNotification, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file peerdist.inc
echo -----------------------------------------
ENDIF

