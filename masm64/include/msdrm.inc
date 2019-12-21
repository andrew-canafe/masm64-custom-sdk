IFNDEF MSDRM_INC
MSDRM_INC equ <1>

PROTO64 external,DRMAcquireAdvisories, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMAcquireIssuanceLicenseTemplate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMAcquireLicense, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMActivate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMAddLicense, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMAddRightWithUser, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMAttest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCheckSecurity, :QWORD,:QWORD
PROTO64 external,DRMClearAllRights, :QWORD
PROTO64 external,DRMCloseEnvironmentHandle, :QWORD
PROTO64 external,DRMCloseHandle, :QWORD
PROTO64 external,DRMClosePubHandle, :QWORD
PROTO64 external,DRMCloseQueryHandle, :QWORD
PROTO64 external,DRMCloseSession, :QWORD
PROTO64 external,DRMConstructCertificateChain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateBoundLicense, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateClientSession, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateEnablingBitsDecryptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateEnablingBitsEncryptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateEnablingPrincipal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateIssuanceLicense, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateLicenseStorageSession, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateRight, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMCreateUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMDecode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMDeconstructCertificateChain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMDecrypt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMDeleteLicense, :QWORD,:QWORD
PROTO64 external,DRMDuplicateEnvironmentHandle, :QWORD,:QWORD
PROTO64 external,DRMDuplicateHandle, :QWORD,:QWORD
PROTO64 external,DRMDuplicatePubHandle, :QWORD,:QWORD
PROTO64 external,DRMDuplicateSession, :QWORD,:QWORD
PROTO64 external,DRMEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMEncrypt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMEnumerateLicense, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetApplicationSpecificData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetBoundLicenseAttribute, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetBoundLicenseAttributeCount, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetBoundLicenseObject, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetBoundLicenseObjectCount, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetCertificateChainCount, :QWORD,:QWORD
PROTO64 external,DRMGetClientVersion, :QWORD
PROTO64 external,DRMGetEnvironmentInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetIntervalTime, :QWORD,:QWORD
PROTO64 external,DRMGetIssuanceLicenseInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetIssuanceLicenseTemplate, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetMetaData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetNameAndDescription, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetOwnerLicense, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetProcAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetRevocationPoint, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetRightExtendedInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetRightInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetSecurityProvider, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetServiceLocation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetSignedIssuanceLicense, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetSignedIssuanceLicenseEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetTime, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetUnboundLicenseAttribute, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetUnboundLicenseAttributeCount, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetUnboundLicenseObject, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetUnboundLicenseObjectCount, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetUsagePolicy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetUserInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetUserRights, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMGetUsers, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMInitEnvironment, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMIsActivated, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMIsWindowProtected, :QWORD,:QWORD
PROTO64 external,DRMLoadLibrary, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMParseUnboundLicense, :QWORD,:QWORD
PROTO64 external,DRMRegisterContent, :QWORD
PROTO64 external,DRMRegisterProtectedWindow, :QWORD,:QWORD
PROTO64 external,DRMRegisterRevocationList, :QWORD,:QWORD
PROTO64 external,DRMRepair, 
PROTO64 external,DRMSetApplicationSpecificData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMSetGlobalOptions, :QWORD,:QWORD,:QWORD
PROTO64 external,DRMSetIntervalTime, :QWORD,:QWORD
PROTO64 external,DRMSetMetaData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMSetNameAndDescription, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMSetRevocationPoint, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMSetUsagePolicy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DRMVerify, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,__AddMachineCertToLicenseStore, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msdrm.inc
echo -----------------------------------------
ENDIF

