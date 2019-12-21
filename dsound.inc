IFNDEF DSOUND_INC
DSOUND_INC equ <1>

PROTO64 external,DirectSoundCaptureCreate8, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectSoundCaptureCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectSoundCaptureEnumerateA, :QWORD,:QWORD
PROTO64 external,DirectSoundCaptureEnumerateW, :QWORD,:QWORD
PROTO64 external,DirectSoundCreate8, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectSoundCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectSoundEnumerateA, :QWORD,:QWORD
PROTO64 external,DirectSoundEnumerateW, :QWORD,:QWORD
PROTO64 external,DirectSoundFullDuplexCreate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceID, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dsound.inc
echo -----------------------------------------
ENDIF

