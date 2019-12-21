IFNDEF EVR_INC
EVR_INC equ <1>

PROTO64 external,MFCreateVideoMixer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMixerAndPresenter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoOTA, :QWORD,:QWORD
PROTO64 external,MFCreateVideoPresenter2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoPresenter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoSampleAllocator, :QWORD,:QWORD
PROTO64 external,MFCreateVideoSampleFromSurface, :QWORD,:QWORD
PROTO64 external,MFGetPlaneSize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFIsFormatYUV, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file evr.inc
echo -----------------------------------------
ENDIF

