IFNDEF FHSVCCTL_INC
FHSVCCTL_INC equ <1>

PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,FhQueryConfiguredUsersCount, :QWORD
PROTO64 external,FhServiceBlockBackup, :QWORD
PROTO64 external,FhServiceClearProtectionState, :QWORD,:QWORD,:QWORD
PROTO64 external,FhServiceClosePipe, :QWORD
PROTO64 external,FhServiceEnterMaintenanceMode, :QWORD,:QWORD
PROTO64 external,FhServiceExitMaintenanceMode, :QWORD
PROTO64 external,FhServiceMigrationFinished, :QWORD
PROTO64 external,FhServiceMigrationStarting, :QWORD
PROTO64 external,FhServiceOpenPipe, :QWORD,:QWORD
PROTO64 external,FhServiceReloadConfiguration, :QWORD
PROTO64 external,FhServiceStartBackup, :QWORD,:QWORD
PROTO64 external,FhServiceStopBackup, :QWORD,:QWORD
PROTO64 external,FhServiceUnblockBackup, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file fhsvcctl.inc
echo -----------------------------------------
ENDIF

