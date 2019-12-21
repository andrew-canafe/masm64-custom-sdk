IFNDEF WSCAPI_INC
WSCAPI_INC equ <1>

PROTO64 external,WscGetAntiMalwareUri, :QWORD
PROTO64 external,WscGetSecurityProviderHealth, :QWORD,:QWORD
PROTO64 external,WscQueryAntiMalwareUri, 
PROTO64 external,WscRegisterForChanges, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WscRegisterForUserNotifications, 
PROTO64 external,WscUnRegisterChanges, :QWORD
PROTO64 external,wscAntiSpywareGetStatus, :QWORD,:QWORD
PROTO64 external,wscAntiVirusExpiredBeyondThreshold, :QWORD,:QWORD,:QWORD
PROTO64 external,wscAntiVirusGetStatus, :QWORD,:QWORD
PROTO64 external,wscAutoUpdatesEnableScheduledMode, 
PROTO64 external,wscAutoUpdatesGetStatus, :QWORD
PROTO64 external,wscFirewallGetStatus, :QWORD,:QWORD
PROTO64 external,wscGeneralSecurityGetStatus, :QWORD,:QWORD
PROTO64 external,wscGetAlertStatus, :QWORD,:QWORD
PROTO64 external,wscIcfEnable, 
PROTO64 external,wscIeSettingsFix, 
PROTO64 external,wscInitiateOfflineCleaning, :QWORD,:QWORD
PROTO64 external,wscIsDefenderAntivirusSupported, :QWORD
PROTO64 external,wscLuaSettingsFix, :QWORD
PROTO64 external,wscNotifyUserForNearExpiration, :QWORD
PROTO64 external,wscOverrideComponentStatus, :QWORD,:QWORD
PROTO64 external,wscPing, 
PROTO64 external,wscProductInfoFree, :QWORD,:QWORD
PROTO64 external,wscRegisterChangeNotification, :QWORD,:QWORD
PROTO64 external,wscRegisterSecurityProduct, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wscUnRegisterChangeNotification, :QWORD
PROTO64 external,wscUnregisterSecurityProduct, :QWORD
PROTO64 external,wscUpdateProductStatus, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wscapi.inc
echo -----------------------------------------
ENDIF

