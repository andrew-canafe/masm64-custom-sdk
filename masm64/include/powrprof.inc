IFNDEF POWRPROF_INC
POWRPROF_INC equ <1>

PROTO64 external,CallNtPowerInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CanUserWritePwrScheme, 
PROTO64 external,DeletePwrScheme, :QWORD
PROTO64 external,DevicePowerClose, 
PROTO64 external,DevicePowerEnumDevices, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DevicePowerOpen, :QWORD
PROTO64 external,DevicePowerSetDeviceState, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumPwrSchemes, :QWORD,:QWORD
PROTO64 external,GUIDFormatToGlobalPowerPolicy, :QWORD,:QWORD
PROTO64 external,GUIDFormatToPowerPolicy, :QWORD,:QWORD
PROTO64 external,GetActivePwrScheme, :QWORD
PROTO64 external,GetCurrentPowerPolicies, :QWORD,:QWORD
PROTO64 external,GetPwrCapabilities, :QWORD
PROTO64 external,GetPwrDiskSpindownRange, :QWORD,:QWORD
PROTO64 external,IsAdminOverrideActive, :QWORD
PROTO64 external,IsPwrHibernateAllowed, 
PROTO64 external,IsPwrShutdownAllowed, 
PROTO64 external,IsPwrSuspendAllowed, 
PROTO64 external,LoadCurrentPwrScheme, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MergeLegacyPwrScheme, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerApplyPowerRequestOverride, 
PROTO64 external,PowerCanRestoreIndividualDefaultPowerScheme, :QWORD
PROTO64 external,PowerCloseEnvironmentalMonitor, :QWORD
PROTO64 external,PowerCloseLimitsMitigation, :QWORD
PROTO64 external,PowerCloseLimitsPolicy, :QWORD
PROTO64 external,PowerCreatePossibleSetting, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerCreateSetting, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerCustomizePlatformPowerSettings, 
PROTO64 external,PowerDebugDifPowerPolicies, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerDebugDifSystemPowerPolicies, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerDebugDumpPowerPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerDebugDumpPowerScheme, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerDebugDumpSystemPowerCapabilities, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerDebugDumpSystemPowerPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerDeleteScheme, :QWORD,:QWORD
PROTO64 external,PowerDeterminePlatformRole, 
PROTO64 external,PowerDeterminePlatformRoleEx, :QWORD
PROTO64 external,PowerDuplicateScheme, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerEnumerate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerGetActiveScheme, :QWORD,:QWORD
PROTO64 external,PowerImportPowerScheme, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerIsSettingRangeDefined, :QWORD,:QWORD
PROTO64 external,PowerOpenSystemPowerKey, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerOpenUserPowerKey, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerPolicyToGUIDFormat, :QWORD,:QWORD
PROTO64 external,PowerReadACDefaultIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadACValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadACValueIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadDCDefaultIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadDCValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadDCValueIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadDescription, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadFriendlyName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadIconResourceSpecifier, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadPossibleDescription, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadPossibleFriendlyName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadPossibleValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadSecurityDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadSettingAttributes, :QWORD,:QWORD
PROTO64 external,PowerReadValueIncrement, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadValueMax, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadValueMin, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerReadValueUnitsSpecifier, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerRegisterEnvironmentalMonitor, :QWORD,:QWORD
PROTO64 external,PowerRegisterLimitsMitigation, :QWORD,:QWORD
PROTO64 external,PowerRegisterLimitsPolicy, :QWORD,:QWORD
PROTO64 external,PowerRegisterSuspendResumeNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerRemovePowerSetting, :QWORD,:QWORD
PROTO64 external,PowerReplaceDefaultPowerSchemes, 
PROTO64 external,PowerReportLimitsEvent, :QWORD
PROTO64 external,PowerReportThermalEvent, :QWORD
PROTO64 external,PowerRestoreDefaultPowerSchemes, 
PROTO64 external,PowerRestoreIndividualDefaultPowerScheme, :QWORD
PROTO64 external,PowerSetActiveScheme, :QWORD,:QWORD
PROTO64 external,PowerSetAlsBrightnessOffset, :QWORD
PROTO64 external,PowerSettingAccessCheck, :QWORD,:QWORD
PROTO64 external,PowerSettingAccessCheckEx, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerSettingRegisterNotification, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerSettingUnregisterNotification, :QWORD
PROTO64 external,PowerUnregisterSuspendResumeNotification, :QWORD
PROTO64 external,PowerUpdateEnvironmentalMonitorState, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerUpdateEnvironmentalMonitorThresholds, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerUpdateLimitsMitigation, :QWORD,:QWORD
PROTO64 external,PowerWriteACDefaultIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteACValueIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteDCDefaultIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteDCValueIndex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteDescription, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteFriendlyName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteIconResourceSpecifier, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWritePossibleDescription, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWritePossibleFriendlyName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWritePossibleValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteSecurityDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteSettingAttributes, :QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteValueIncrement, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteValueMax, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteValueMin, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PowerWriteValueUnitsSpecifier, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadGlobalPwrPolicy, :QWORD
PROTO64 external,ReadProcessorPwrScheme, :QWORD,:QWORD
PROTO64 external,ReadPwrScheme, :QWORD,:QWORD
PROTO64 external,SetActivePwrScheme, :QWORD,:QWORD,:QWORD
PROTO64 external,SetSuspendState, :QWORD,:QWORD,:QWORD
PROTO64 external,ValidatePowerPolicies, :QWORD,:QWORD
PROTO64 external,WriteGlobalPwrPolicy, :QWORD
PROTO64 external,WriteProcessorPwrScheme, :QWORD,:QWORD
PROTO64 external,WritePwrScheme, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file powrprof.inc
echo -----------------------------------------
ENDIF

