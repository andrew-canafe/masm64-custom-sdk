IFNDEF MFPLAT_INC
MFPLAT_INC equ <1>

PROTO64 external,CreatePropertyStore, :QWORD
PROTO64 external,MFAddPeriodicCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,MFAllocateSerialWorkQueue, :QWORD,:QWORD
PROTO64 external,MFAllocateWorkQueue, :QWORD
PROTO64 external,MFAllocateWorkQueueEx, :QWORD,:QWORD
PROTO64 external,MFAverageTimePerFrameToFrameRate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFBeginCreateFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFBeginRegisterWorkQueueWithMMCSS, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFBeginRegisterWorkQueueWithMMCSSEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFBeginUnregisterWorkQueueWithMMCSS, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCalculateBitmapImageSize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCalculateImageSize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCancelCreateFile, :QWORD
PROTO64 external,MFCancelWorkItem, :QWORD,:QWORD
PROTO64 external,MFCompareFullToPartialMediaType, :QWORD,:QWORD
PROTO64 external,MFConvertColorInfoFromDXVA, :QWORD,:QWORD
PROTO64 external,MFConvertColorInfoToDXVA, :QWORD,:QWORD
PROTO64 external,MFConvertFromFP16Array, :QWORD,:QWORD,:QWORD
PROTO64 external,MFConvertToFP16Array, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCopyImage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreate2DMediaBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAMMediaTypeFromMFMediaType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAlignedMemoryBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAlignedSharedMemoryBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAsyncResult, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAttributes, :QWORD,:QWORD
PROTO64 external,MFCreateAudioMediaType, :QWORD,:QWORD
PROTO64 external,MFCreateCollection, :QWORD
PROTO64 external,MFCreateContentDecryptorContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateContentProtectionDevice, :QWORD,:QWORD
PROTO64 external,MFCreateDXGIDeviceManager, :QWORD,:QWORD
PROTO64 external,MFCreateDXGISurfaceBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateDXSurfaceBuffer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateEventQueue, :QWORD
PROTO64 external,MFCreateFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateLegacyMediaBufferOnMFMediaBuffer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateMFByteStreamOnStream, :QWORD,:QWORD
PROTO64 external,MFCreateMFByteStreamOnStreamEx, :QWORD,:QWORD
PROTO64 external,MFCreateMFByteStreamWrapper, :QWORD,:QWORD
PROTO64 external,MFCreateMFVideoFormatFromMFMediaType, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateMediaBufferFromMediaType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateMediaBufferWrapper, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateMediaEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateMediaExtensionActivate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateMediaType, :QWORD
PROTO64 external,MFCreateMediaTypeFromProperties, :QWORD,:QWORD
PROTO64 external,MFCreateMediaTypeFromRepresentation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateMemoryBuffer, :QWORD,:QWORD
PROTO64 external,MFCreatePresentationDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreatePropertiesFromMediaType, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSample, :QWORD
PROTO64 external,MFCreateSharedMemoryMediaBufferFromMediaType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSourceResolver, :QWORD
PROTO64 external,MFCreateStreamDescriptor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateStreamOnMFByteStream, :QWORD,:QWORD
PROTO64 external,MFCreateStreamOnMFByteStreamEx, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSystemTimeSource, :QWORD
PROTO64 external,MFCreateTempFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateTrackedSample, :QWORD
PROTO64 external,MFCreateTransformActivate, :QWORD
PROTO64 external,MFCreateVideoDecryptorContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaType, :QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromBitMapInfoHeader, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromBitMapInfoHeaderEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromSubtype, :QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromVideoInfoHeader2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoMediaTypeFromVideoInfoHeader, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateVideoSampleAllocatorEx, :QWORD,:QWORD
PROTO64 external,MFCreateWICBitmapBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateWaveFormatExFromMFMediaType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFDeserializeAttributesFromStream, :QWORD,:QWORD,:QWORD
PROTO64 external,MFDeserializePresentationDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,MFEndCreateFile, :QWORD,:QWORD
PROTO64 external,MFEndRegisterWorkQueueWithMMCSS, :QWORD,:QWORD
PROTO64 external,MFEndUnregisterWorkQueueWithMMCSS, :QWORD
PROTO64 external,MFFrameRateToAverageTimePerFrame, :QWORD,:QWORD,:QWORD
PROTO64 external,MFGetAttributesAsBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,MFGetAttributesAsBlobSize, :QWORD,:QWORD
PROTO64 external,MFGetContentProtectionSystemCLSID, :QWORD,:QWORD
PROTO64 external,MFGetMFTMerit, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFGetPlaneSize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFGetPluginControl, :QWORD
PROTO64 external,MFGetStrideForBitmapInfoHeader, :QWORD,:QWORD,:QWORD
PROTO64 external,MFGetSupportedMimeTypes, :QWORD
PROTO64 external,MFGetSupportedSchemes, :QWORD
PROTO64 external,MFGetSystemTime, 
PROTO64 external,MFGetTimerPeriodicity, :QWORD
PROTO64 external,MFGetUncompressedVideoFormat, :QWORD
PROTO64 external,MFGetWorkQueueMMCSSClass, :QWORD,:QWORD,:QWORD
PROTO64 external,MFGetWorkQueueMMCSSPriority, :QWORD,:QWORD
PROTO64 external,MFGetWorkQueueMMCSSTaskId, :QWORD,:QWORD
PROTO64 external,MFHeapAlloc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFHeapFree, :QWORD
PROTO64 external,MFInitAMMediaTypeFromMFMediaType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFInitAttributesFromBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,MFInitMediaTypeFromAMMediaType, :QWORD,:QWORD
PROTO64 external,MFInitMediaTypeFromMFVideoFormat, :QWORD,:QWORD,:QWORD
PROTO64 external,MFInitMediaTypeFromMPEG1VideoInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFInitMediaTypeFromMPEG2VideoInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFInitMediaTypeFromVideoInfoHeader2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFInitMediaTypeFromVideoInfoHeader, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFInitMediaTypeFromWaveFormatEx, :QWORD,:QWORD,:QWORD
PROTO64 external,MFInitVideoFormat, :QWORD,:QWORD
PROTO64 external,MFInitVideoFormat_RGB, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFInvokeCallback, :QWORD
PROTO64 external,MFIsContentProtectionDeviceSupported, :QWORD,:QWORD
PROTO64 external,MFLockDXGIDeviceManager, :QWORD,:QWORD
PROTO64 external,MFLockPlatform, 
PROTO64 external,MFLockSharedWorkQueue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFLockWorkQueue, :QWORD
PROTO64 external,MFMapDX9FormatToDXGIFormat, :QWORD
PROTO64 external,MFMapDXGIFormatToDX9Format, :QWORD
PROTO64 external,MFPutWaitingWorkItem, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFPutWorkItem2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFPutWorkItem, :QWORD,:QWORD,:QWORD
PROTO64 external,MFPutWorkItemEx2, :QWORD,:QWORD,:QWORD
PROTO64 external,MFPutWorkItemEx, :QWORD,:QWORD
PROTO64 external,MFRegisterLocalByteStreamHandler, :QWORD,:QWORD,:QWORD
PROTO64 external,MFRegisterLocalSchemeHandler, :QWORD,:QWORD
PROTO64 external,MFRegisterPlatformWithMMCSS, :QWORD,:QWORD,:QWORD
PROTO64 external,MFRemovePeriodicCallback, :QWORD
PROTO64 external,MFScheduleWorkItem, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFScheduleWorkItemEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFSerializeAttributesToStream, :QWORD,:QWORD,:QWORD
PROTO64 external,MFSerializePresentationDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,MFShutdown, 
PROTO64 external,MFStartup, :QWORD,:QWORD
PROTO64 external,MFStreamDescriptorProtectMediaType, :QWORD,:QWORD
PROTO64 external,MFTEnum, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTEnumEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTGetInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTRegister, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTRegisterLocal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTRegisterLocalByCLSID, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTUnregister, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTUnregisterLocal, :QWORD
PROTO64 external,MFTUnregisterLocalByCLSID, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTraceError, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFTraceFuncEnter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFUnlockDXGIDeviceManager, 
PROTO64 external,MFUnlockPlatform, 
PROTO64 external,MFUnlockWorkQueue, :QWORD
PROTO64 external,MFUnregisterPlatformFromMMCSS, 
PROTO64 external,MFUnwrapMediaType, :QWORD,:QWORD
PROTO64 external,MFValidateMediaTypeSize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFWrapMediaType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFllMulDiv, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mfplat.inc
echo -----------------------------------------
ENDIF

