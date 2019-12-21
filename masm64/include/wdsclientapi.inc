IFNDEF WDSCLIENTAPI_INC
WDSCLIENTAPI_INC equ <1>

PROTO64 external,WdsCliAuthorizeSession, :QWORD,:QWORD
PROTO64 external,WdsCliCancelTransfer, :QWORD
PROTO64 external,WdsCliClose, :QWORD
PROTO64 external,WdsCliConnectToImageStore, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliCreateSession, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliCreateSessionEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliFilterImageArchitecture, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliFilterImageFirmwareType, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliFilterImageVersion, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliFilterImageVersionMatchingBootImage, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliFindFirstImage, :QWORD,:QWORD
PROTO64 external,WdsCliFindNextImage, :QWORD
PROTO64 external,WdsCliFreeDomainJoinInformation, :QWORD
PROTO64 external,WdsCliFreeStringArray, :QWORD,:QWORD
PROTO64 external,WdsCliFreeUnattendVariables, :QWORD,:QWORD
PROTO64 external,WdsCliGetClientUnattend, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliGetDeploymentMetadata, :QWORD,:QWORD
PROTO64 external,WdsCliGetDeploymentMetadataAvailable, :QWORD,:QWORD
PROTO64 external,WdsCliGetDomainJoinInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliGetDriverQueryXml, :QWORD,:QWORD
PROTO64 external,WdsCliGetEnumerationFlags, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageArchitecture, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageDescription, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageFiles, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliGetImageGroup, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageHalName, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageHandleFromFindHandle, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageHandleFromTransferHandle, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageIndex, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageLanguage, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageLanguages, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliGetImageLastModifiedTime, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageName, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageNamespace, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageParameter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliGetImagePath, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageSize, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageType, :QWORD,:QWORD
PROTO64 external,WdsCliGetImageVersion, :QWORD,:QWORD
PROTO64 external,WdsCliGetSystemMetadata, :QWORD,:QWORD
PROTO64 external,WdsCliGetTransferSize, :QWORD,:QWORD
PROTO64 external,WdsCliGetUnattendVariables, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliGetWimImageReferenceFile, :QWORD,:QWORD
PROTO64 external,WdsCliInitializeLog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliObtainDriverPackages, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliObtainDriverPackagesEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliRegisterTrace, :QWORD
PROTO64 external,WdsCliResetBootProgram, :QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliSetSupportedFeatures, :QWORD,:QWORD
PROTO64 external,WdsCliSetSystemMetadata, :QWORD,:QWORD
PROTO64 external,WdsCliSetTransferBufferSize, :QWORD
PROTO64 external,WdsCliSimulateArchitecture, :QWORD,:QWORD
PROTO64 external,WdsCliSimulateDeviceId, :QWORD,:QWORD
PROTO64 external,WdsCliSimulateSmbiosInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliTransferFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliTransferImage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsCliWaitForTransfer, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wdsclientapi.inc
echo -----------------------------------------
ENDIF

