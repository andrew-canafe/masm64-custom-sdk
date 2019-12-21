IFNDEF P2PGRAPH_INC
P2PGRAPH_INC equ <1>

PROTO64 external,PeerGraphAddRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphClose, :QWORD
PROTO64 external,PeerGraphCloseDirectConnection, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphCreate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphDelete, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphDeleteRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphEndEnumeration, :QWORD
PROTO64 external,PeerGraphEnumConnections, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphEnumNodes, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphEnumRecords, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphExportDatabase, :QWORD,:QWORD
PROTO64 external,PeerGraphFreeData, :QWORD
PROTO64 external,PeerGraphGetEventData, :QWORD,:QWORD
PROTO64 external,PeerGraphGetItemCount, :QWORD,:QWORD
PROTO64 external,PeerGraphGetNextItem, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphGetNodeInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphGetProperties, :QWORD,:QWORD
PROTO64 external,PeerGraphGetRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphGetStatus, :QWORD,:QWORD
PROTO64 external,PeerGraphImportDatabase, :QWORD,:QWORD
PROTO64 external,PeerGraphListen, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphOpen, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphOpenDirectConnection, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphPeerTimeToUniversalTime, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphRegisterEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphSearchRecords, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphSendData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphSetNodeAttributes, :QWORD,:QWORD
PROTO64 external,PeerGraphSetPresence, :QWORD,:QWORD
PROTO64 external,PeerGraphSetProperties, :QWORD,:QWORD
PROTO64 external,PeerGraphShutdown, 
PROTO64 external,PeerGraphStartup, :QWORD,:QWORD
PROTO64 external,PeerGraphSuspendTimers, :QWORD,:QWORD
PROTO64 external,PeerGraphUniversalTimeToPeerTime, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGraphUnregisterEvent, :QWORD
PROTO64 external,PeerGraphUpdateRecord, :QWORD,:QWORD
PROTO64 external,PeerGraphValidateDeferredRecords, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file p2pgraph.inc
echo -----------------------------------------
ENDIF

