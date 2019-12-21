IFNDEF XINPUTUAP_INC
XINPUTUAP_INC equ <1>

PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,XInputEnable, :QWORD
PROTO64 external,XInputGetAudioDeviceIds, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,XInputGetBatteryInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,XInputGetCapabilities, :QWORD,:QWORD,:QWORD
PROTO64 external,XInputGetKeystroke, :QWORD,:QWORD,:QWORD
PROTO64 external,XInputGetState, :QWORD,:QWORD
PROTO64 external,XInputSetState, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file xinputuap.inc
echo -----------------------------------------
ENDIF

