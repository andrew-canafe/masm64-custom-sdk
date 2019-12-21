IFNDEF ELFAPI_INC
ELFAPI_INC equ <1>

PROTO64 external,EVENTLOG_HANDLE_A_bind, :QWORD
PROTO64 external,EVENTLOG_HANDLE_A_unbind, :QWORD,:QWORD
PROTO64 external,EVENTLOG_HANDLE_W_bind, :QWORD
PROTO64 external,EVENTLOG_HANDLE_W_unbind, :QWORD,:QWORD
PROTO64 external,ElfAssertThreadPrivilege, :QWORD,:QWORD
PROTO64 external,ElfBackupEventLogFileA, :QWORD,:QWORD
PROTO64 external,ElfBackupEventLogFileW, :QWORD,:QWORD
PROTO64 external,ElfChangeNotify, :QWORD,:QWORD
PROTO64 external,ElfClearEventLogFileA, :QWORD,:QWORD
PROTO64 external,ElfClearEventLogFileW, :QWORD,:QWORD
PROTO64 external,ElfCloseEventLog, :QWORD
PROTO64 external,ElfCreateReconnInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfDeregisterClusterSvc, :QWORD
PROTO64 external,ElfDeregisterEventSource, :QWORD
PROTO64 external,ElfDestroyReconnectionInfo, :QWORD
PROTO64 external,ElfFlushEventLog, :QWORD
PROTO64 external,ElfGetLogInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfGetTheRpcHandle, :QWORD
PROTO64 external,ElfNumberOfRecords, :QWORD,:QWORD
PROTO64 external,ElfOldestRecord, :QWORD,:QWORD
PROTO64 external,ElfOpenBackupEventLogA, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfOpenBackupEventLogW, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfOpenEventLogA, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfOpenEventLogW, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfReadEventLogA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfReadEventLogW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfReconnect, :QWORD
PROTO64 external,ElfRegisterClusterSvc, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfRegisterEventSourceA, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfRegisterEventSourceW, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfReportEventA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfReportEventAndSourceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfReportEventW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfRevertThreadPrivilege, :QWORD
PROTO64 external,ElfWriteClusterEvents, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfrBackupELFA, :QWORD,:QWORD
PROTO64 external,ElfrBackupELFW, :QWORD,:QWORD
PROTO64 external,ElfrChangeNotify, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrClearELFA, :QWORD,:QWORD
PROTO64 external,ElfrClearELFW, :QWORD,:QWORD
PROTO64 external,ElfrCloseEL, :QWORD
PROTO64 external,ElfrDeregisterClusterSvc, :QWORD
PROTO64 external,ElfrDeregisterEventSource, :QWORD
PROTO64 external,ElfrFlushEL, :QWORD
PROTO64 external,ElfrGetLogInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrNumberOfRecords, :QWORD,:QWORD
PROTO64 external,ElfrOldestRecord, :QWORD,:QWORD
PROTO64 external,ElfrOpenBELA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrOpenBELW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrOpenELA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrOpenELW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrReadELA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrReadELW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrRegisterClusterSvc, :QWORD,:QWORD,:QWORD
PROTO64 external,ElfrRegisterEventSourceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrRegisterEventSourceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrReportEventA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrReportEventAndSourceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrReportEventW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ElfrWriteClusterEvents, :QWORD,:QWORD,:QWORD
PROTO64 external,NtCurrentTeb, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file elfapi.inc
echo -----------------------------------------
ENDIF

