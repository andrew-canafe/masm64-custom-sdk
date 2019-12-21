IFNDEF WSCLIENT_INC
WSCLIENT_INC equ <1>

PROTO64 external,AcquireDeveloperLicense, :QWORD,:QWORD
PROTO64 external,CheckDeveloperLicense, :QWORD
PROTO64 external,GetApplicationURL, :QWORD,:QWORD
PROTO64 external,RefreshBannedAppsList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RemoveDeveloperLicense, :QWORD
PROTO64 external,WSCallServer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSCheckForConsumable, :QWORD,:QWORD,:QWORD
PROTO64 external,WSEvaluatePackage, :QWORD,:QWORD,:QWORD
PROTO64 external,WSGetEvaluatePackageAttempted, :QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseCleanUpState, 
PROTO64 external,WSLicenseClose, :QWORD
PROTO64 external,WSLicenseFilterValidAppCategoryIds, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseGetAllUserTokens, :QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseGetAllValidAppCategoryIds, :QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseGetDevInstalledApps, :QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseGetExtendedUserInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseGetFeatureLicenseResults, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseGetLicensesForProducts, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseGetOAuthServiceTicket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseGetProductLicenseResults, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseInstallLicense, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseOpen, :QWORD
PROTO64 external,WSLicenseRefreshLicense, :QWORD,:QWORD
PROTO64 external,WSLicenseRetrieveMachineID, :QWORD,:QWORD
PROTO64 external,WSLicenseRevokeLicenses, :QWORD,:QWORD,:QWORD
PROTO64 external,WSLicenseUninstallLicense, :QWORD,:QWORD,:QWORD
PROTO64 external,WSNotifyOOBECompletion, 
PROTO64 external,WSNotifyPackageInstalled, :QWORD,:QWORD,:QWORD
PROTO64 external,WSTriggerOOBEFileValidation, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wsclient.inc
echo -----------------------------------------
ENDIF

