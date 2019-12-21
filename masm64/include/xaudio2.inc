IFNDEF XAUDIO2_INC
XAUDIO2_INC equ <1>

PROTO64 external,CreateAudioReverb, :QWORD
PROTO64 external,CreateAudioReverbV2_8, :QWORD
PROTO64 external,CreateAudioVolumeMeter, :QWORD
PROTO64 external,XAudio2Create, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file xaudio2.inc
echo -----------------------------------------
ENDIF

