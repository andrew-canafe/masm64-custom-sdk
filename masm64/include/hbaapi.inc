IFNDEF HBAAPI_INC
HBAAPI_INC equ <1>

PROTO64 external,HbaGetAdapterNameByDeviceInstanceId, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file hbaapi.inc
echo -----------------------------------------
ENDIF

