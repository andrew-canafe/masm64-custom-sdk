IFNDEF WER_INC
WER_INC equ <1>

PROTO64 external,CloseThreadWaitChainSession, :QWORD
PROTO64 external,GetThreadWaitChain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenThreadWaitChainSession, :QWORD,:QWORD
PROTO64 external,RegisterWaitChainCOMCallback, :QWORD,:QWORD
PROTO64 external,WerAddExcludedApplication, :QWORD,:QWORD
PROTO64 external,WerRemoveExcludedApplication, :QWORD,:QWORD
PROTO64 external,WerReportAddDump, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerReportAddFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerReportCloseHandle, :QWORD
PROTO64 external,WerReportCreate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerReportSetParameter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerReportSetUIOption, :QWORD,:QWORD,:QWORD
PROTO64 external,WerReportSubmit, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerpAddFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerpAddFileBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerpAddFileCallback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerpAuxmdDumpProcessImages, :QWORD,:QWORD
PROTO64 external,WerpAuxmdDumpRegisteredBlocks, :QWORD
PROTO64 external,WerpAuxmdFree, :QWORD
PROTO64 external,WerpAuxmdFreeCopyBuffer, :QWORD
PROTO64 external,WerpAuxmdHashVaRanges, :QWORD,:QWORD
PROTO64 external,WerpAuxmdInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerpAuxmdMapFile, :QWORD
PROTO64 external,WerpCreateIntegratorReportId, :QWORD
PROTO64 external,WerpDownloadResponseOnly, :QWORD,:QWORD
PROTO64 external,WerpFreeString, :QWORD
PROTO64 external,WerpGetIntegratorReportId, :QWORD,:QWORD
PROTO64 external,WerpGetReportConsent, :QWORD,:QWORD,:QWORD
PROTO64 external,WerpGetStoreLocation, :QWORD,:QWORD,:QWORD
PROTO64 external,WerpIsDisabled, :QWORD,:QWORD
PROTO64 external,WerpLaunchResponse, :QWORD,:QWORD
PROTO64 external,WerpOpenUserQueue, :QWORD
PROTO64 external,WerpSetAuxiliaryArchivePath, :QWORD,:QWORD
PROTO64 external,WerpSetCallBack, :QWORD,:QWORD,:QWORD
PROTO64 external,WerpSetDefaultUserConsent, :QWORD,:QWORD
PROTO64 external,WerpSetIntegratorReportId, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wer.inc
echo -----------------------------------------
ENDIF

