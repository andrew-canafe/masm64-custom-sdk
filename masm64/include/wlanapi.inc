IFNDEF WLANAPI_INC
WLANAPI_INC equ <1>

PROTO64 external,WFDCancelOpenSession, :QWORD
PROTO64 external,WFDCloseHandle, :QWORD
PROTO64 external,WFDCloseSession, :QWORD
PROTO64 external,WFDOpenHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,WFDOpenLegacySession, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WFDStartOpenSession, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WFDUpdateDeviceVisibility, :QWORD
PROTO64 external,WlanAllocateMemory, :QWORD
PROTO64 external,WlanCloseHandle, :QWORD,:QWORD
PROTO64 external,WlanConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanConnectEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanDeleteProfile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanDisconnect, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanEnumInterfaces, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanExtractPsdIEDataList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanFreeMemory, :QWORD
PROTO64 external,WlanGetAvailableNetworkList2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanGetAvailableNetworkList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanGetFilterList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanGetInterfaceCapability, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanGetNetworkBssList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanGetProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanGetProfileCustomUserData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanGetProfileList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanGetSecuritySettings, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkForceStart, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkForceStop, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkInitSettings, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkQueryProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkQuerySecondaryKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkQueryStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkRefreshSecuritySettings, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkSetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkSetSecondaryKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkStartUsing, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanHostedNetworkStopUsing, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanIhvControl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanOpenHandle, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanPrivateQueryInterface, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanPrivateSetInterface, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanQueryAutoConfigParameter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanQueryInterface, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanReasonCodeToString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanRegisterNotification, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanRegisterVirtualStationNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,WlanRenameProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSaveTemporaryProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanScan, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetAutoConfigParameter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetFilterList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetInterface, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetProfileCustomUserData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetProfileEapUserData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetProfileEapXmlUserData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetProfileList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetProfileListForOffload, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetProfilePosition, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetPsdIEDataList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WlanSetSecuritySettings, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wlanapi.inc
echo -----------------------------------------
ENDIF

