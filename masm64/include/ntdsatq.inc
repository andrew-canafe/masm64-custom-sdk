IFNDEF NTDSATQ_INC
NTDSATQ_INC equ <1>

PROTO64 external,ATQReleaseTCPPortReservation, :QWORD
PROTO64 external,ATQReserveTCPPorts, :QWORD,:QWORD,:QWORD
PROTO64 external,AllocCacheDumpStatsToHtml, :QWORD,:QWORD
PROTO64 external,AtqCloseEndpoint, :QWORD
PROTO64 external,AtqCloseQosClass, :QWORD
PROTO64 external,AtqCloseSession, :QWORD
PROTO64 external,AtqCloseSocket, :QWORD,:QWORD
PROTO64 external,AtqContextGetInfo, :QWORD,:QWORD
PROTO64 external,AtqContextSetInfo2, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqContextSetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqCreateEndpoint, :QWORD,:QWORD
PROTO64 external,AtqCreateEndpointEx, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqCreateQosClass, :QWORD,:QWORD
PROTO64 external,AtqEndpointGetInfo, :QWORD,:QWORD
PROTO64 external,AtqEndpointSetInfo2, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqEndpointSetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,AtqFreeContext, :QWORD,:QWORD
PROTO64 external,AtqGetAcceptExAddrs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqGetAcceptExAddrsEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqGetAddressFamilies, :QWORD,:QWORD
PROTO64 external,AtqGetDatagramAddrs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqGetInfo, :QWORD
PROTO64 external,AtqGetMaxDatagramSendSize, :QWORD
PROTO64 external,AtqInitialize, :QWORD
PROTO64 external,AtqOpenSession, 
PROTO64 external,AtqQosClassGetId, :QWORD
PROTO64 external,AtqQosClassGetInfo, :QWORD,:QWORD
PROTO64 external,AtqQosClassGetInstance, :QWORD
PROTO64 external,AtqQosContextEnd, :QWORD
PROTO64 external,AtqQosContextExtendTime, :QWORD,:QWORD
PROTO64 external,AtqQosContextStart, :QWORD,:QWORD
PROTO64 external,AtqReadFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqReadSocket, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqRegisterAddressChangeCallback, :QWORD,:QWORD
PROTO64 external,AtqSetInfo2, :QWORD,:QWORD
PROTO64 external,AtqSetInfo, :QWORD,:QWORD
PROTO64 external,AtqSetSockOpt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqStartEndpoint, :QWORD
PROTO64 external,AtqStopEndpoint, :QWORD
PROTO64 external,AtqSyncWsaSend, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqTerminate, 
PROTO64 external,AtqUpdateQosClass, :QWORD,:QWORD
PROTO64 external,AtqWriteDatagramSocket, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqWriteFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AtqWriteSocket, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntdsatq.inc
echo -----------------------------------------
ENDIF

