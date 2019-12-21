IFNDEF NTFRSAPI_INC
NTFRSAPI_INC equ <1>

PROTO64 external,NtFrsApiDestroyBackupRestore, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiEnumBackupRestoreSets, :QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiFinishedRestoringDirectory, :QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiGetBackupRestoreSetDirectory, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiGetBackupRestoreSetGuid, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiGetBackupRestoreSetPaths, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiGetBackupRestoreSetType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiGetBackupRestoreSets, :QWORD
PROTO64 external,NtFrsApiInitializeBackupRestore, :QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiIsBackupRestoreSetASysvol, :QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApiRestoringDirectory, :QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_AbortDemotionW, 
PROTO64 external,NtFrsApi_AbortPromotionW, 
PROTO64 external,NtFrsApi_CommitDemotionW, :QWORD,:QWORD
PROTO64 external,NtFrsApi_CommitPromotionW, :QWORD,:QWORD
PROTO64 external,NtFrsApi_DeleteSysvolMember, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_ForceReplication, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_Get_DsPollingIntervalW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_InfoFreeW, :QWORD
PROTO64 external,NtFrsApi_InfoLineW, :QWORD,:QWORD
PROTO64 external,NtFrsApi_InfoMoreW, :QWORD
PROTO64 external,NtFrsApi_InfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_IsPathReplicated, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_PrepareForDemotionUsingCredW, :QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_PrepareForDemotionW, :QWORD
PROTO64 external,NtFrsApi_PrepareForPromotionW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_PrepareForUnload, 
PROTO64 external,NtFrsApi_Set_DsPollingIntervalW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_StartDemotionW, :QWORD,:QWORD
PROTO64 external,NtFrsApi_StartPromotionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtFrsApi_WaitForDemotionW, :QWORD,:QWORD
PROTO64 external,NtFrsApi_WaitForPromotionW, :QWORD,:QWORD
PROTO64 external,NtFrsApi_WriterCommand, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntfrsapi.inc
echo -----------------------------------------
ENDIF

