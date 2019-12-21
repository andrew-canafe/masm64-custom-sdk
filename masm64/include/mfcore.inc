IFNDEF MFCORE_INC
MFCORE_INC equ <1>

PROTO64 external,AppendPropVariant, :QWORD,:QWORD
PROTO64 external,ConvertPropVariant, :QWORD,:QWORD
PROTO64 external,CopyPropertyStore, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateNamedPropertyStore, :QWORD
PROTO64 external,ExtractPropVariant, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAggregateSource, :QWORD,:QWORD
PROTO64 external,MFCreateAppSourceProxy, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAudioRenderer, :QWORD,:QWORD
PROTO64 external,MFCreateAudioRendererActivate, :QWORD
PROTO64 external,MFCreateDeviceSource, :QWORD,:QWORD
PROTO64 external,MFCreateDeviceSourceActivate, :QWORD,:QWORD
PROTO64 external,MFCreateMediaProcessor, :QWORD
PROTO64 external,MFCreateMediaSession, :QWORD,:QWORD
PROTO64 external,MFCreatePMPHost, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreatePMPMediaSession, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreatePMPServer, :QWORD,:QWORD
PROTO64 external,MFCreatePresentationClock, :QWORD
PROTO64 external,MFCreateSampleCopierMFT, :QWORD
PROTO64 external,MFCreateSampleGrabberSinkActivate, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSequencerSegmentOffset, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSequencerSource, :QWORD,:QWORD
PROTO64 external,MFCreateSequencerSourceRemoteStream, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSimpleTypeHandler, :QWORD
PROTO64 external,MFCreateStandardQualityManager, :QWORD
PROTO64 external,MFCreateTopoLoader, :QWORD
PROTO64 external,MFCreateTopology, :QWORD
PROTO64 external,MFCreateTopologyNode, :QWORD,:QWORD
PROTO64 external,MFCreateWMAEncoderActivate, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateWMVEncoderActivate, :QWORD,:QWORD,:QWORD
PROTO64 external,MFEnumDeviceSources, :QWORD,:QWORD,:QWORD
PROTO64 external,MFGetMultipleServiceProviders, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFGetService, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFGetTopoNodeCurrentType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFRequireProtectedEnvironment, :QWORD
PROTO64 external,MFShutdownObject, :QWORD
PROTO64 external,MergePropertyStore, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mfcore.inc
echo -----------------------------------------
ENDIF

