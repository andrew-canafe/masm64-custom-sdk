IFNDEF EVR_VISTA_INC
EVR_VISTA_INC equ <1>

PROTO64 external,MFConvertColorInfoFromDXVA, :QWORD,:QWORD
PROTO64 external,MFConvertColorInfoToDXVA, :QWORD,:QWORD
PROTO64 external,MFConvertFromFP16Array, :QWORD,:QWORD,:QWORD
PROTO64 external,MFConvertToFP16Array, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCopyImage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateDXSurfaceBuffer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaType, :QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromBitMapInfoHeader, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromSubtype, :QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromVideoInfoHeader2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromVideoInfoHeader, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMixer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMixerAndPresenter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoOTA, :QWORD,:QWORD
PROTO64 external,MFCreateVideoPresenter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoSampleAllocator, :QWORD,:QWORD
PROTO64 external,MFCreateVideoSampleFromSurface, :QWORD,:QWORD
PROTO64 external,MFGetPlaneSize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFGetStrideForBitmapInfoHeader, :QWORD,:QWORD,:QWORD
PROTO64 external,MFInitVideoFormat, :QWORD,:QWORD
PROTO64 external,MFInitVideoFormat_RGB, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFIsFormatYUV, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file evr_vista.inc
echo -----------------------------------------
ENDIF

