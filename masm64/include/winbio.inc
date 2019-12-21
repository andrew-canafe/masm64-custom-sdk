IFNDEF WINBIO_INC
WINBIO_INC equ <1>

PROTO64 external,WinBioAcquireFocus, 
PROTO64 external,WinBioAsyncEnumBiometricUnits, :QWORD,:QWORD
PROTO64 external,WinBioAsyncEnumDatabases, :QWORD,:QWORD
PROTO64 external,WinBioAsyncEnumServiceProviders, :QWORD,:QWORD
PROTO64 external,WinBioAsyncMonitorFrameworkChanges, :QWORD,:QWORD
PROTO64 external,WinBioAsyncOpenFramework, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioAsyncOpenSession, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioCancel, :QWORD
PROTO64 external,WinBioCaptureSample, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioCaptureSampleWithCallback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioCloseFramework, :QWORD
PROTO64 external,WinBioCloseSession, :QWORD
PROTO64 external,WinBioControlUnit, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioControlUnitPrivileged, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioDeleteTemplate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioEnrollBegin, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioEnrollCapture, :QWORD,:QWORD
PROTO64 external,WinBioEnrollCaptureWithCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioEnrollCommit, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioEnrollDiscard, :QWORD
PROTO64 external,WinBioEnrollSelect, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioEnumBiometricUnits, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioEnumDatabases, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioEnumEnrollments, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioEnumServiceProviders, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioFree, :QWORD
PROTO64 external,WinBioGetCredentialState, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioGetCredentialWithTicket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioGetDomainLogonSetting, :QWORD,:QWORD
PROTO64 external,WinBioGetEnabledSetting, :QWORD,:QWORD
PROTO64 external,WinBioGetEnrolledFactors, :QWORD,:QWORD
PROTO64 external,WinBioGetLogonSetting, :QWORD,:QWORD
PROTO64 external,WinBioGetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioIdentify, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioIdentifyAndReleaseTicket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioIdentifyWithCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioLocateSensor, :QWORD,:QWORD
PROTO64 external,WinBioLocateSensorWithCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioLockUnit, :QWORD,:QWORD
PROTO64 external,WinBioLogonIdentifiedUser, :QWORD
PROTO64 external,WinBioMonitorPresence, :QWORD,:QWORD
PROTO64 external,WinBioOpenSession, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioProtectData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioRegisterEventMonitor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioRegisterServiceMonitor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioReleaseFocus, 
PROTO64 external,WinBioRemoveAllCredentials, 
PROTO64 external,WinBioRemoveAllDomainCredentials, 
PROTO64 external,WinBioRemoveCredential, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioSetCredential, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioSetMSACredential, :QWORD,:QWORD,:QWORD
PROTO64 external,WinBioSetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioUnlockUnit, :QWORD,:QWORD
PROTO64 external,WinBioUnprotectData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioUnregisterEventMonitor, :QWORD
PROTO64 external,WinBioUnregisterServiceMonitor, :QWORD
PROTO64 external,WinBioVerify, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioVerifyAndReleaseTicket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioVerifyWithCallback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinBioWait, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file winbio.inc
echo -----------------------------------------
ENDIF

