IFNDEF SCECLI_INC
SCECLI_INC equ <1>

PROTO64 external,SceAddToNameList, :QWORD,:QWORD,:QWORD
PROTO64 external,SceAddToNameStatusList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceAddToObjectList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceAnalyzeSystem, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceAppendSecurityProfileInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceBrowseDatabaseTable, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceCloseProfile, :QWORD
PROTO64 external,SceCommitTransaction, :QWORD
PROTO64 external,SceCompareNameList, :QWORD,:QWORD
PROTO64 external,SceCompareSecurityDescriptors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceConfigureSystem, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceCopyBaseProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceCreateDirectory, :QWORD,:QWORD,:QWORD
PROTO64 external,SceDcPromoCreateGPOsInSysvol, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceDcPromoCreateGPOsInSysvolEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceDcPromoteSecurity, :QWORD,:QWORD
PROTO64 external,SceDcPromoteSecurityEx, :QWORD,:QWORD,:QWORD
PROTO64 external,SceEnforceSecurityPolicyPropagation, 
PROTO64 external,SceEnumerateServices, :QWORD,:QWORD
PROTO64 external,SceFreeMemory, :QWORD,:QWORD
PROTO64 external,SceFreeProfileMemory, :QWORD
PROTO64 external,SceGenerateRollback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceGetAnalysisAreaSummary, :QWORD,:QWORD,:QWORD
PROTO64 external,SceGetAreas, :QWORD
PROTO64 external,SceGetDatabaseSetting, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceGetDbTime, :QWORD,:QWORD,:QWORD
PROTO64 external,SceGetObjectChildren, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceGetObjectSecurity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceGetScpProfileDescription, :QWORD,:QWORD
PROTO64 external,SceGetSecurityProfileInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceGetServerProductType, :QWORD,:QWORD
PROTO64 external,SceGetTimeStamp, :QWORD,:QWORD,:QWORD
PROTO64 external,SceIsSystemDatabase, :QWORD
PROTO64 external,SceLookupPrivRightName, :QWORD,:QWORD,:QWORD
PROTO64 external,SceOpenProfile, :QWORD,:QWORD,:QWORD
PROTO64 external,SceRegisterRegValues, :QWORD
PROTO64 external,SceRollbackTransaction, :QWORD
PROTO64 external,SceSetDatabaseSetting, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSetupBackupSecurity, :QWORD
PROTO64 external,SceSetupConfigureServices, :QWORD
PROTO64 external,SceSetupGenerateTemplate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSetupMoveSecurityFile, :QWORD,:QWORD,:QWORD
PROTO64 external,SceSetupRootSecurity, 
PROTO64 external,SceSetupSystemByInfName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSetupUnwindSecurityFile, :QWORD,:QWORD
PROTO64 external,SceSetupUpdateSecurityFile, :QWORD,:QWORD,:QWORD
PROTO64 external,SceSetupUpdateSecurityKey, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSetupUpdateSecurityService, :QWORD,:QWORD,:QWORD
PROTO64 external,SceStartTransaction, :QWORD
PROTO64 external,SceSvcConvertSDToText, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSvcConvertTextToSD, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSvcFree, :QWORD
PROTO64 external,SceSvcGetInformationTemplate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSvcQueryInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSvcSetInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSvcSetInformationTemplate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceSvcUpdateInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SceUpdateObjectInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceUpdateSecurityProfile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SceWriteSecurityProfileInfo, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file scecli.inc
echo -----------------------------------------
ENDIF

