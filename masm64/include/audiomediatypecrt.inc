IFNDEF AUDIOMEDIATYPECRT_INC
AUDIOMEDIATYPECRT_INC equ <1>

PROTO64 external,CreateAudioMediaType, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateAudioMediaTypeFromUncompressedAudioFormat, :QWORD,:QWORD
PROTO64 external,IsEqualGUID, :QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file audiomediatypecrt.inc
echo -----------------------------------------
ENDIF

