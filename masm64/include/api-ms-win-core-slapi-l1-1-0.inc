IFNDEF API-MS-WIN-CORE-SLAPI-L1-1-0_INC
API-MS-WIN-CORE-SLAPI-L1-1-0_INC equ <1>

PROTO64 external,SLQueryLicenseValueFromApp2, :QWORD
PROTO64 external,SLQueryLicenseValueFromApp, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file api-ms-win-core-slapi-l1-1-0.inc
echo -----------------------------------------
ENDIF

