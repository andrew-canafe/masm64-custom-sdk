IFNDEF CSCDLL_INC
CSCDLL_INC equ <1>

PROTO64 external,CSCDeleteW, :QWORD
PROTO64 external,CSCDisconnectPath, :QWORD
PROTO64 external,CSCDoEnableDisable, :QWORD
PROTO64 external,CSCEnumForStatsExW, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCEnumForStatsW, :QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindClose, :QWORD
PROTO64 external,CSCFindFirstFileForSidW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindFirstFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCFindNextFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCIsCSCEnabled, 
PROTO64 external,CSCIsPathOffline, :QWORD,:QWORD
PROTO64 external,CSCIsServerOfflineW, :QWORD,:QWORD
PROTO64 external,CSCPinFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCQueryFileStatusW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CSCSetMaxSpace, :QWORD,:QWORD
PROTO64 external,CSCTransitionPathOnline, :QWORD
PROTO64 external,CSCTransitionServerOnlineW, :QWORD
PROTO64 external,CSCUnpinFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cscdll.inc
echo -----------------------------------------
ENDIF

