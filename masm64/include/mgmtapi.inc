IFNDEF MGMTAPI_INC
MGMTAPI_INC equ <1>

PROTO64 external,SnmpMgrClose, :QWORD
PROTO64 external,SnmpMgrCtl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpMgrGetTrap, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpMgrGetTrapEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpMgrOidToStr, :QWORD,:QWORD
PROTO64 external,SnmpMgrOpen, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpMgrRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SnmpMgrStrToOid, :QWORD,:QWORD
PROTO64 external,SnmpMgrTrapListen, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mgmtapi.inc
echo -----------------------------------------
ENDIF

