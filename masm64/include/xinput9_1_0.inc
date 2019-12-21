IFNDEF XINPUT9_1_0_INC
XINPUT9_1_0_INC equ <1>

PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,XInputGetCapabilities, :QWORD,:QWORD,:QWORD
PROTO64 external,XInputGetDSoundAudioDeviceGuids, :QWORD,:QWORD,:QWORD
PROTO64 external,XInputGetState, :QWORD,:QWORD
PROTO64 external,XInputSetState, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file xinput9_1_0.inc
echo -----------------------------------------
ENDIF

