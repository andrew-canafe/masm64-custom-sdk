IFNDEF API-MS-WIN-NET-ISOLATION-L1-1-0_INC
API-MS-WIN-NET-ISOLATION-L1-1-0_INC equ <1>

PROTO64 external,NetworkIsolationDiagnoseConnectFailureAndGetInfo, :QWORD,:QWORD
PROTO64 external,NetworkIsolationEnumAppContainers, :QWORD,:QWORD,:QWORD
PROTO64 external,NetworkIsolationFreeAppContainers, :QWORD
PROTO64 external,NetworkIsolationGetAppContainerConfig, :QWORD,:QWORD
PROTO64 external,NetworkIsolationRegisterForAppContainerChanges, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetworkIsolationSetAppContainerConfig, :QWORD,:QWORD
PROTO64 external,NetworkIsolationSetupAppContainerBinaries, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetworkIsolationUnregisterForAppContainerChanges, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file api-ms-win-net-isolation-l1-1-0.inc
echo -----------------------------------------
ENDIF

