IFNDEF MF_INC
MF_INC equ <1>

PROTO64 external,AppendPropVariant, :QWORD,:QWORD
PROTO64 external,ConvertPropVariant, :QWORD,:QWORD
PROTO64 external,CopyPropertyStore, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateNamedPropertyStore, :QWORD
PROTO64 external,ExtractPropVariant, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreate3GPMediaSink, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAC3MediaSink, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateADTSMediaSink, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateASFContentInfo, :QWORD
PROTO64 external,MFCreateASFIndexer, :QWORD
PROTO64 external,MFCreateASFIndexerByteStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateASFMediaSink, :QWORD,:QWORD
PROTO64 external,MFCreateASFMediaSinkActivate, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateASFMultiplexer, :QWORD
PROTO64 external,MFCreateASFProfile, :QWORD
PROTO64 external,MFCreateASFProfileFromPresentationDescriptor, :QWORD,:QWORD
PROTO64 external,MFCreateASFSplitter, :QWORD
PROTO64 external,MFCreateASFStreamSelector, :QWORD,:QWORD
PROTO64 external,MFCreateASFStreamingMediaSink, :QWORD,:QWORD
PROTO64 external,MFCreateASFStreamingMediaSinkActivate, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAggregateSource, :QWORD,:QWORD
PROTO64 external,MFCreateAppSourceProxy, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateAudioRenderer, :QWORD,:QWORD
PROTO64 external,MFCreateAudioRendererActivate, :QWORD
PROTO64 external,MFCreateCredentialCache, :QWORD
PROTO64 external,MFCreateDeviceSource, :QWORD,:QWORD
PROTO64 external,MFCreateDeviceSourceActivate, :QWORD,:QWORD
PROTO64 external,MFCreateDrmNetNDSchemePlugin, :QWORD,:QWORD
PROTO64 external,MFCreateFMPEG4MediaSink, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateHttpSchemePlugin, :QWORD,:QWORD
PROTO64 external,MFCreateMP3MediaSink, :QWORD,:QWORD
PROTO64 external,MFCreateMPEG4MediaSink, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateMediaProcessor, :QWORD
PROTO64 external,MFCreateMediaSession, :QWORD,:QWORD
PROTO64 external,MFCreateMuxSink, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateNetSchemePlugin, :QWORD,:QWORD
PROTO64 external,MFCreatePMPHost, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreatePMPMediaSession, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreatePMPServer, :QWORD,:QWORD
PROTO64 external,MFCreatePresentationClock, :QWORD
PROTO64 external,MFCreatePresentationDescriptorFromASFProfile, :QWORD,:QWORD
PROTO64 external,MFCreateProtectedEnvironmentAccess, :QWORD
PROTO64 external,MFCreateProxyLocator, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateRemoteDesktopPlugin, :QWORD
PROTO64 external,MFCreateSampleCopierMFT, :QWORD
PROTO64 external,MFCreateSampleGrabberSinkActivate, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSecureHttpSchemePlugin, :QWORD,:QWORD
PROTO64 external,MFCreateSequencerSegmentOffset, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSequencerSource, :QWORD,:QWORD
PROTO64 external,MFCreateSequencerSourceRemoteStream, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateSimpleTypeHandler, :QWORD
PROTO64 external,MFCreateStandardQualityManager, :QWORD
PROTO64 external,MFCreateTopoLoader, :QWORD
PROTO64 external,MFCreateTopology, :QWORD
PROTO64 external,MFCreateTopologyNode, :QWORD,:QWORD
PROTO64 external,MFCreateTranscodeProfile, :QWORD
PROTO64 external,MFCreateTranscodeSinkActivate, :QWORD
PROTO64 external,MFCreateTranscodeTopology, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateTranscodeTopologyFromByteStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateUrlmonSchemePlugin, :QWORD,:QWORD
PROTO64 external,MFCreateVideoRenderer, :QWORD,:QWORD
PROTO64 external,MFCreateVideoRendererActivate, :QWORD,:QWORD
PROTO64 external,MFCreateWMAEncoderActivate, :QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateWMVEncoderActivate, :QWORD,:QWORD,:QWORD
PROTO64 external,MFEnumDeviceSources, :QWORD,:QWORD,:QWORD
PROTO64 external,MFGetLocalId, :QWORD,:QWORD,:QWORD
PROTO64 external,MFGetMultipleServiceProviders, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFGetService, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFGetSystemId, :QWORD
PROTO64 external,MFGetTopoNodeCurrentType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFLoadSignedLibrary, :QWORD,:QWORD
PROTO64 external,MFRequireProtectedEnvironment, :QWORD
PROTO64 external,MFShutdownObject, :QWORD
PROTO64 external,MFTranscodeGetAudioOutputAvailableTypes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MergePropertyStore, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mf.inc
echo -----------------------------------------
ENDIF

