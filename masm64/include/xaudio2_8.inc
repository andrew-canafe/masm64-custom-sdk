IFNDEF XAUDIO2_8_INC
XAUDIO2_8_INC equ <1>

PROTO64 external,CreateAudioReverb, :QWORD
PROTO64 external,CreateAudioVolumeMeter, :QWORD
PROTO64 external,XAudio2Create, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file xaudio2_8.inc
echo -----------------------------------------
ENDIF

