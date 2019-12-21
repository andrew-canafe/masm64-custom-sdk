IFNDEF STI_INC
STI_INC equ <1>

PROTO64 external,MigrateRegisteredSTIAppsForWIAEvents, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SelectDeviceDialog2, :QWORD
PROTO64 external,StiCreateInstance, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StiCreateInstanceW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sti.inc
echo -----------------------------------------
ENDIF

