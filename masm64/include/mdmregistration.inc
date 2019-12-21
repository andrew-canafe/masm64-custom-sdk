IFNDEF MDMREGISTRATION_INC
MDMREGISTRATION_INC equ <1>

PROTO64 external,DiscoverManagementService, :QWORD,:QWORD
PROTO64 external,DiscoverManagementServiceEx, :QWORD,:QWORD,:QWORD
PROTO64 external,GetManagementAppHyperlink, :QWORD,:QWORD
PROTO64 external,IsDeviceRegisteredWithManagement, :QWORD,:QWORD,:QWORD
PROTO64 external,IsManagementRegistrationAllowed, :QWORD
PROTO64 external,RegisterDeviceWithManagement, :QWORD,:QWORD,:QWORD
PROTO64 external,SetManagedExternally, :QWORD
PROTO64 external,UnregisterDeviceWithManagement, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mdmregistration.inc
echo -----------------------------------------
ENDIF

