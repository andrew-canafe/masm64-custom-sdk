IFNDEF MSCMS_INC
MSCMS_INC equ <1>

PROTO64 external,AssociateColorProfileWithDeviceA, :QWORD,:QWORD,:QWORD
PROTO64 external,AssociateColorProfileWithDeviceW, :QWORD,:QWORD,:QWORD
PROTO64 external,CheckBitmapBits, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CheckColors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CloseColorProfile, :QWORD
PROTO64 external,CloseDisplay, :QWORD
PROTO64 external,ColorCplGetDefaultProfileScope, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ColorCplGetDefaultRenderingIntentScope, :QWORD
PROTO64 external,ColorCplGetProfileProperties, :QWORD,:QWORD
PROTO64 external,ColorCplHasSystemWideAssociationListChanged, :QWORD,:QWORD,:QWORD
PROTO64 external,ColorCplInitialize, 
PROTO64 external,ColorCplLoadAssociationList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ColorCplMergeAssociationLists, :QWORD,:QWORD
PROTO64 external,ColorCplOverwritePerUserAssociationList, :QWORD,:QWORD
PROTO64 external,ColorCplReleaseProfileProperties, :QWORD
PROTO64 external,ColorCplResetSystemWideAssociationListChangedWarning, :QWORD,:QWORD
PROTO64 external,ColorCplSaveAssociationList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ColorCplSetUsePerUserProfiles, :QWORD,:QWORD,:QWORD
PROTO64 external,ColorCplUninitialize, 
PROTO64 external,ConvertColorNameToIndex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertIndexToColorName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateColorTransformA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateColorTransformW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateDeviceLinkProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateMultiProfileTransform, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateProfileFromLogColorSpaceA, :QWORD,:QWORD
PROTO64 external,CreateProfileFromLogColorSpaceW, :QWORD,:QWORD
PROTO64 external,DccwCreateDisplayProfileAssociationList, :QWORD
PROTO64 external,DccwGetDisplayProfileAssociationList, :QWORD,:QWORD,:QWORD
PROTO64 external,DccwGetGamutSize, :QWORD,:QWORD
PROTO64 external,DccwReleaseDisplayProfileAssociationList, :QWORD
PROTO64 external,DccwSetDisplayProfileAssociationList, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteColorTransform, :QWORD
PROTO64 external,DeviceRenameEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,DisassociateColorProfileFromDeviceA, :QWORD,:QWORD,:QWORD
PROTO64 external,DisassociateColorProfileFromDeviceW, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumColorProfilesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumColorProfilesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GenerateCopyFilePaths, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCMMInfo, :QWORD,:QWORD
PROTO64 external,GetColorDirectoryA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetColorDirectoryW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetColorProfileElement, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetColorProfileElementTag, :QWORD,:QWORD,:QWORD
PROTO64 external,GetColorProfileFromHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,GetColorProfileHeader, :QWORD,:QWORD
PROTO64 external,GetCountColorProfileElements, :QWORD,:QWORD
PROTO64 external,GetNamedProfileInfo, :QWORD,:QWORD
PROTO64 external,GetPS2ColorRenderingDictionary, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPS2ColorRenderingIntent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPS2ColorSpaceArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetStandardColorSpaceProfileA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetStandardColorSpaceProfileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InstallColorProfileA, :QWORD,:QWORD
PROTO64 external,InstallColorProfileW, :QWORD,:QWORD
PROTO64 external,InternalGetDeviceConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2CSAFromLCS, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2ColorRenderingDictionary2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2ColorRenderingDictionary, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2ColorSpaceArray2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2ColorSpaceArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2PreviewCRD2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalGetPS2PreviewCRD, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalRefreshCalibration, :QWORD,:QWORD
PROTO64 external,InternalSetDeviceConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalWcsAssociateColorProfileWithDevice, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsColorProfileTagPresent, :QWORD,:QWORD,:QWORD
PROTO64 external,IsColorProfileValid, :QWORD,:QWORD
PROTO64 external,OpenColorProfileA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenColorProfileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenDisplay, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterCMMA, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterCMMW, :QWORD,:QWORD,:QWORD
PROTO64 external,SelectCMM, :QWORD
PROTO64 external,SetColorProfileElement, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetColorProfileElementReference, :QWORD,:QWORD,:QWORD
PROTO64 external,SetColorProfileElementSize, :QWORD,:QWORD,:QWORD
PROTO64 external,SetColorProfileHeader, :QWORD,:QWORD
PROTO64 external,SetStandardColorSpaceProfileA, :QWORD,:QWORD,:QWORD
PROTO64 external,SetStandardColorSpaceProfileW, :QWORD,:QWORD,:QWORD
PROTO64 external,SpoolerCopyFileEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,TranslateBitmapBits, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TranslateColors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UninstallColorProfileA, :QWORD,:QWORD,:QWORD
PROTO64 external,UninstallColorProfileW, :QWORD,:QWORD,:QWORD
PROTO64 external,UnregisterCMMA, :QWORD,:QWORD
PROTO64 external,UnregisterCMMW, :QWORD,:QWORD
PROTO64 external,WcsAssociateColorProfileWithDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,WcsCheckColors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcsCreateIccProfile, :QWORD,:QWORD
PROTO64 external,WcsDisassociateColorProfileFromDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,WcsEnumColorProfiles, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcsEnumColorProfilesSize, :QWORD,:QWORD,:QWORD
PROTO64 external,WcsGetCalibrationManagementState, :QWORD
PROTO64 external,WcsGetDefaultColorProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcsGetDefaultColorProfileSize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcsGetDefaultRenderingIntent, :QWORD,:QWORD
PROTO64 external,WcsGetUsePerUserProfiles, :QWORD,:QWORD,:QWORD
PROTO64 external,WcsGpCanInstallOrUninstallProfiles, :QWORD
PROTO64 external,WcsOpenColorProfileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcsOpenColorProfileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcsSetCalibrationManagementState, :QWORD
PROTO64 external,WcsSetDefaultColorProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WcsSetDefaultRenderingIntent, :QWORD,:QWORD
PROTO64 external,WcsSetUsePerUserProfiles, :QWORD,:QWORD,:QWORD
PROTO64 external,WcsTranslateColors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mscms.inc
echo -----------------------------------------
ENDIF

