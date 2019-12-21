IFNDEF CLFSW32_INC
CLFSW32_INC equ <1>

PROTO64 external,AddLogContainer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddLogContainerSet, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AdvanceLogBase, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AlignReservedLog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AllocReservedLog, :QWORD,:QWORD,:QWORD
PROTO64 external,CloseAndResetLogFile, :QWORD
PROTO64 external,CreateLogContainerScanContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateLogFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateLogMarshallingArea, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteLogByHandle, :QWORD
PROTO64 external,DeleteLogFile, :QWORD,:QWORD
PROTO64 external,DeleteLogMarshallingArea, :QWORD
PROTO64 external,DeregisterManageableLogClient, :QWORD
PROTO64 external,DumpLogRecords, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FlushLogBuffers, :QWORD,:QWORD
PROTO64 external,FlushLogToLsn, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeReservedLog, :QWORD,:QWORD,:QWORD
PROTO64 external,GetLogContainerName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetLogFileInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,GetLogIoStatistics, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetLogReservationInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNextLogArchiveExtent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HandleLogFull, :QWORD
PROTO64 external,InstallLogPolicy, :QWORD,:QWORD
PROTO64 external,LogTailAdvanceFailure, :QWORD,:QWORD
PROTO64 external,LsnBlockOffset, :QWORD
PROTO64 external,LsnContainer, :QWORD
PROTO64 external,LsnCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,LsnEqual, :QWORD,:QWORD
PROTO64 external,LsnGreater, :QWORD,:QWORD
PROTO64 external,LsnIncrement, :QWORD
PROTO64 external,LsnInvalid, :QWORD
PROTO64 external,LsnLess, :QWORD,:QWORD
PROTO64 external,LsnNull, :QWORD
PROTO64 external,LsnRecordSequence, :QWORD
PROTO64 external,PrepareLogArchive, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryLogPolicy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadLogArchiveMetadata, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadLogNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,ReadLogRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadLogRestartArea, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadNextLogRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadPreviousLogRestartArea, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterForLogWriteNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterManageableLogClient, :QWORD,:QWORD
PROTO64 external,RemoveLogContainer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RemoveLogContainerSet, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RemoveLogPolicy, :QWORD,:QWORD
PROTO64 external,ReserveAndAppendLog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReserveAndAppendLogAligned, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScanLogContainers, :QWORD,:QWORD,:QWORD
PROTO64 external,SetEndOfLog, :QWORD,:QWORD,:QWORD
PROTO64 external,SetLogArchiveMode, :QWORD,:QWORD
PROTO64 external,SetLogArchiveTail, :QWORD,:QWORD,:QWORD
PROTO64 external,SetLogFileSizeWithPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,TerminateLogArchive, :QWORD
PROTO64 external,TerminateReadLog, :QWORD
PROTO64 external,TruncateLog, :QWORD,:QWORD,:QWORD
PROTO64 external,ValidateLog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteLogRestartArea, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file clfsw32.inc
echo -----------------------------------------
ENDIF

