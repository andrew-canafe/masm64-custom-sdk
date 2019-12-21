IFNDEF DEVICEACCESS_INC
DEVICEACCESS_INC equ <1>

PROTO64 external,CreateDeviceAccessInstance, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file deviceaccess.inc
echo -----------------------------------------
ENDIF

