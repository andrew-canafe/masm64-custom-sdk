IFNDEF MQRT_INC
MQRT_INC equ <1>

PROTO64 external,MQADsPathToFormatName, :QWORD,:QWORD,:QWORD
PROTO64 external,MQAllocateMemory, :QWORD
PROTO64 external,MQBeginTransaction, :QWORD
PROTO64 external,MQCloseCursor, :QWORD
PROTO64 external,MQCloseQueue, :QWORD
PROTO64 external,MQCreateCursor, :QWORD,:QWORD
PROTO64 external,MQCreateQueue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MQDeleteQueue, :QWORD
PROTO64 external,MQFreeMemory, :QWORD
PROTO64 external,MQFreeSecurityContext, :QWORD
PROTO64 external,MQGetMachineProperties, :QWORD,:QWORD,:QWORD
PROTO64 external,MQGetOverlappedResult, :QWORD
PROTO64 external,MQGetPrivateComputerInformation, :QWORD,:QWORD
PROTO64 external,MQGetQueueProperties, :QWORD,:QWORD
PROTO64 external,MQGetQueueSecurity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MQGetSecurityContext, :QWORD,:QWORD,:QWORD
PROTO64 external,MQGetSecurityContextEx, :QWORD,:QWORD,:QWORD
PROTO64 external,MQHandleToFormatName, :QWORD,:QWORD,:QWORD
PROTO64 external,MQInstanceToFormatName, :QWORD,:QWORD,:QWORD
PROTO64 external,MQLocateBegin, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MQLocateEnd, :QWORD
PROTO64 external,MQLocateNext, :QWORD,:QWORD,:QWORD
PROTO64 external,MQMarkMessageRejected, :QWORD,:QWORD,:QWORD
PROTO64 external,MQMgmtAction, :QWORD,:QWORD,:QWORD
PROTO64 external,MQMgmtGetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,MQMoveMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MQOpenQueue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MQPathNameToFormatName, :QWORD,:QWORD,:QWORD
PROTO64 external,MQPurgeQueue, :QWORD
PROTO64 external,MQReceiveMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MQReceiveMessageByLookupId, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MQRegisterCertificate, :QWORD,:QWORD,:QWORD
PROTO64 external,MQSendMessage, :QWORD,:QWORD,:QWORD
PROTO64 external,MQSetQueueProperties, :QWORD,:QWORD
PROTO64 external,MQSetQueueSecurity, :QWORD,:QWORD,:QWORD
PROTO64 external,RTCreateInternalCertificate, :QWORD
PROTO64 external,RTDeleteInternalCert, :QWORD
PROTO64 external,RTGetInternalCert, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RTGetUserCerts, :QWORD,:QWORD,:QWORD
PROTO64 external,RTIsDependentClient, 
PROTO64 external,RTLogOnRegisterCert, :QWORD
PROTO64 external,RTOpenInternalCertStore, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RTRegisterUserCert, :QWORD,:QWORD
PROTO64 external,RTRemoveUserCert, :QWORD
PROTO64 external,RTRemoveUserCertSid, :QWORD,:QWORD
PROTO64 external,RTXactGetDTC, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mqrt.inc
echo -----------------------------------------
ENDIF

