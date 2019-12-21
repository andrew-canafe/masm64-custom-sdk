IFNDEF DIFXAPI_INC
DIFXAPI_INC equ <1>

PROTO64 external,DIFXAPISetLogCallbackA, :QWORD,:QWORD
PROTO64 external,DIFXAPISetLogCallbackW, :QWORD,:QWORD
PROTO64 external,DriverPackageGetPathA, :QWORD,:QWORD,:QWORD
PROTO64 external,DriverPackageGetPathW, :QWORD,:QWORD,:QWORD
PROTO64 external,DriverPackageInstallA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DriverPackageInstallW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DriverPackagePreinstallA, :QWORD,:QWORD
PROTO64 external,DriverPackagePreinstallW, :QWORD,:QWORD
PROTO64 external,DriverPackageUninstallA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DriverPackageUninstallW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetDifxLogCallbackA, :QWORD,:QWORD
PROTO64 external,SetDifxLogCallbackW, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file difxapi.inc
echo -----------------------------------------
ENDIF

