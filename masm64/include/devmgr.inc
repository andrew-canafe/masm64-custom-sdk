IFNDEF DEVMGR_INC
DEVMGR_INC equ <1>

PROTO64 external,DeviceAdvancedPropertiesA, :QWORD,:QWORD,:QWORD
PROTO64 external,DeviceAdvancedPropertiesW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeviceCreateHardwarePage, :QWORD,:QWORD
PROTO64 external,DeviceCreateHardwarePageCustom, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceCreateHardwarePageEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceManager_ExecuteA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceManager_ExecuteW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceProblemTextA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceProblemTextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceProblemWizardA, :QWORD,:QWORD,:QWORD
PROTO64 external,DeviceProblemWizardW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeviceProblenWizard_RunDLLA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceProblenWizard_RunDLLW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DevicePropertiesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DevicePropertiesExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DevicePropertiesExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DevicePropertiesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceProperties_RunDLLA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeviceProperties_RunDLLW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file devmgr.inc
echo -----------------------------------------
ENDIF

