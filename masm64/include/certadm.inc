IFNDEF CERTADM_INC
CERTADM_INC equ <1>

PROTO64 external,CertSrvBackupClose, :QWORD
PROTO64 external,CertSrvBackupEnd, :QWORD
PROTO64 external,CertSrvBackupFree, :QWORD
PROTO64 external,CertSrvBackupGetBackupLogsW, :QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvBackupGetDatabaseNamesW, :QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvBackupGetDynamicFileListW, :QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvBackupOpenFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvBackupPrepareW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvBackupRead, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvBackupTruncateLogs, :QWORD
PROTO64 external,CertSrvIsServerOnlineW, :QWORD,:QWORD
PROTO64 external,CertSrvRestoreEnd, :QWORD
PROTO64 external,CertSrvRestoreGetDatabaseLocationsW, :QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvRestorePrepareW, :QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvRestoreRegisterComplete, :QWORD,:QWORD
PROTO64 external,CertSrvRestoreRegisterThroughFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvRestoreRegisterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CertSrvServerControlW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClosePerfMon, 
PROTO64 external,CollectPerfMon, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreatePerfObject, :QWORD
PROTO64 external,CreatePerfObjectWithAlias, :QWORD,:QWORD
PROTO64 external,DecrementPerfCounter, :QWORD,:QWORD
PROTO64 external,DeletePerfObject, :QWORD
PROTO64 external,IncrementPerfCounter, :QWORD,:QWORD
PROTO64 external,InitPerfMon, :QWORD
PROTO64 external,OpenPerfMon, :QWORD
PROTO64 external,ResetPerfObjectList, 
PROTO64 external,UninitPerfMon, 
PROTO64 external,UpdatePerfCounter, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file certadm.inc
echo -----------------------------------------
ENDIF

