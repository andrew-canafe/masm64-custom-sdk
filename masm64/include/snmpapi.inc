IFNDEF SNMPAPI_INC
SNMPAPI_INC equ <1>

PROTO64 external,SnmpSvcAddrIsIpx, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpSvcAddrToSocket, :QWORD,:QWORD
PROTO64 external,SnmpSvcGetEnterpriseOID, 
PROTO64 external,SnmpSvcGetUptime, 
PROTO64 external,SnmpSvcGetUptimeFromTime, :QWORD
PROTO64 external,SnmpSvcInitUptime, 
PROTO64 external,SnmpSvcSetLogLevel, :QWORD
PROTO64 external,SnmpSvcSetLogType, :QWORD
PROTO64 external,SnmpTfxClose, :QWORD
PROTO64 external,SnmpTfxOpen, :QWORD,:QWORD
PROTO64 external,SnmpTfxQuery, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpUtilAnsiToUnicode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpUtilAsnAnyCpy, :QWORD,:QWORD
PROTO64 external,SnmpUtilAsnAnyFree, :QWORD
PROTO64 external,SnmpUtilIdsToA, :QWORD,:QWORD
PROTO64 external,SnmpUtilMemAlloc, :QWORD
PROTO64 external,SnmpUtilMemFree, :QWORD
PROTO64 external,SnmpUtilMemReAlloc, :QWORD,:QWORD
PROTO64 external,SnmpUtilOctetsCmp, :QWORD,:QWORD
PROTO64 external,SnmpUtilOctetsCpy, :QWORD,:QWORD
PROTO64 external,SnmpUtilOctetsFree, :QWORD
PROTO64 external,SnmpUtilOctetsNCmp, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpUtilOidAppend, :QWORD,:QWORD
PROTO64 external,SnmpUtilOidCmp, :QWORD,:QWORD
PROTO64 external,SnmpUtilOidCpy, :QWORD,:QWORD
PROTO64 external,SnmpUtilOidFree, :QWORD
PROTO64 external,SnmpUtilOidNCmp, :QWORD,:QWORD,:QWORD
PROTO64 external,SnmpUtilOidToA, :QWORD
PROTO64 external,SnmpUtilPrintAsnAny, :QWORD
PROTO64 external,SnmpUtilPrintOid, :QWORD
PROTO64 external,SnmpUtilUTF8ToUnicode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpUtilUnicodeToAnsi, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpUtilUnicodeToUTF8, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpUtilVarBindCpy, :QWORD,:QWORD
PROTO64 external,SnmpUtilVarBindFree, :QWORD
PROTO64 external,SnmpUtilVarBindListCpy, :QWORD,:QWORD
PROTO64 external,SnmpUtilVarBindListFree, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file snmpapi.inc
echo -----------------------------------------
ENDIF

