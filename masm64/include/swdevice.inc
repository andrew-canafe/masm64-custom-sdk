IFNDEF SWDEVICE_INC
SWDEVICE_INC equ <1>

PROTO64 external,SwDeviceClose, :QWORD
PROTO64 external,SwDeviceCreate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SwDeviceGetLifetime, :QWORD,:QWORD
PROTO64 external,SwDeviceInterfacePropertySet, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SwDeviceInterfaceRegister, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SwDeviceInterfaceSetState, :QWORD,:QWORD,:QWORD
PROTO64 external,SwDevicePropertySet, :QWORD,:QWORD,:QWORD
PROTO64 external,SwDeviceSetLifetime, :QWORD,:QWORD
PROTO64 external,SwMemFree, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file swdevice.inc
echo -----------------------------------------
ENDIF

