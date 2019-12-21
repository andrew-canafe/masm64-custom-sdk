IFNDEF WSNMP32_INC
WSNMP32_INC equ <1>

PROTO64 external,SnmpCancelMsg, :QWORD,:QWORD
PROTO64 external,SnmpCleanup, 
PROTO64 external,SnmpCleanupEx, 
PROTO64 external,SnmpClose, :QWORD
PROTO64 external,SnmpContextToStr, :QWORD,:QWORD
PROTO64 external,SnmpConveyAgentAddress, :QWORD
PROTO64 external,SnmpCountVbl, :QWORD
PROTO64 external,SnmpCreatePdu, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpCreateSession, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpCreateVbl, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpDecodeMsg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpDeleteVb, :QWORD,:QWORD
PROTO64 external,SnmpDuplicatePdu, :QWORD,:QWORD
PROTO64 external,SnmpDuplicateVbl, :QWORD,:QWORD
PROTO64 external,SnmpEncodeMsg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpEntityToStr, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpFreeContext, :QWORD
PROTO64 external,SnmpFreeDescriptor, :QWORD,:QWORD
PROTO64 external,SnmpFreeEntity, :QWORD
PROTO64 external,SnmpFreePdu, :QWORD
PROTO64 external,SnmpFreeVbl, :QWORD
PROTO64 external,SnmpGetLastError, :QWORD
PROTO64 external,SnmpGetPduData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpGetRetransmitMode, :QWORD
PROTO64 external,SnmpGetRetry, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpGetTimeout, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpGetTranslateMode, :QWORD
PROTO64 external,SnmpGetVb, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpGetVendorInfo, :QWORD
PROTO64 external,SnmpListen, :QWORD,:QWORD
PROTO64 external,SnmpListenEx, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpOidCompare, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpOidCopy, :QWORD,:QWORD
PROTO64 external,SnmpOidToStr, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpOpen, :QWORD,:QWORD
PROTO64 external,SnmpRecvMsg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpRegister, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpSendMsg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpSetAgentAddress, :QWORD
PROTO64 external,SnmpSetPduData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpSetPort, :QWORD,:QWORD
PROTO64 external,SnmpSetRetransmitMode, :QWORD
PROTO64 external,SnmpSetRetry, :QWORD,:QWORD
PROTO64 external,SnmpSetTimeout, :QWORD,:QWORD
PROTO64 external,SnmpSetTranslateMode, :QWORD
PROTO64 external,SnmpSetVb, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpStartup, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpStartupEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpStrToContext, :QWORD,:QWORD
PROTO64 external,SnmpStrToEntity, :QWORD,:QWORD
PROTO64 external,SnmpStrToOid, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wsnmp32.inc
echo -----------------------------------------
ENDIF

