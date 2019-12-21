IFNDEF NEWDEV_INC
NEWDEV_INC equ <1>

PROTO64 external,DeviceInternetSettingUiW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DiInstallDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DiInstallDriverA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DiInstallDriverW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DiRollbackDriver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DiShowUpdateDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DiUninstallDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetInternetPolicies, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallNewDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,InstallSelectedDriver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallWindowsUpdateDriver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallWindowsUpdateDriverEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallWindowsUpdateDrivers, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryWindowsUpdateDriverStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetInternetPolicies, :QWORD,:QWORD
PROTO64 external,UpdateDriverForPlugAndPlayDevicesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UpdateDriverForPlugAndPlayDevicesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,pDiDoDeviceInstallAsAdmin, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,pDiDoNullDriverInstall, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file newdev.inc
echo -----------------------------------------
ENDIF

