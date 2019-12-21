IFNDEF BLUETOOTHAPIS_INC
BLUETOOTHAPIS_INC equ <1>

PROTO64 external,BluetoothAddressToString, :QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothDisconnectDevice, :QWORD,:QWORD
PROTO64 external,BluetoothEnableDiscovery, :QWORD,:QWORD
PROTO64 external,BluetoothEnableIncomingConnections, :QWORD,:QWORD
PROTO64 external,BluetoothEnumerateInstalledServices, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothEnumerateInstalledServicesEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothEnumerateLocalServices, :QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothFindBrowseGroupClose, :QWORD
PROTO64 external,BluetoothFindClassIdClose, :QWORD
PROTO64 external,BluetoothFindDeviceClose, :QWORD
PROTO64 external,BluetoothFindFirstBrowseGroup, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstClassId, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstDevice, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstProfileDescriptor, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstProtocolDescriptorStack, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstProtocolEntry, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstRadio, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstService, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstServiceEx, :QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothFindNextBrowseGroup, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextClassId, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextDevice, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextProfileDescriptor, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextProtocolDescriptorStack, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextProtocolEntry, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextRadio, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextService, :QWORD,:QWORD
PROTO64 external,BluetoothFindProfileDescriptorClose, :QWORD
PROTO64 external,BluetoothFindProtocolDescriptorStackClose, :QWORD
PROTO64 external,BluetoothFindProtocolEntryClose, :QWORD
PROTO64 external,BluetoothFindRadioClose, :QWORD
PROTO64 external,BluetoothFindServiceClose, :QWORD
PROTO64 external,BluetoothGATTAbortReliableWrite, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTBeginReliableWrite, :QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTEndReliableWrite, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTGetCharacteristicValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTGetCharacteristics, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTGetDescriptorValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTGetDescriptors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTGetIncludedServices, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTGetServices, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTRegisterEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTSetCharacteristicValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTSetDescriptorValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGATTUnregisterEvent, :QWORD,:QWORD
PROTO64 external,BluetoothGetDeviceInfo, :QWORD,:QWORD
PROTO64 external,BluetoothGetLocalServiceInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothGetRadioInfo, :QWORD,:QWORD
PROTO64 external,BluetoothGetServicePnpInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothIsConnectable, :QWORD
PROTO64 external,BluetoothIsDiscoverable, :QWORD
PROTO64 external,BluetoothIsVersionAvailable, :QWORD,:QWORD
PROTO64 external,BluetoothRegisterForAuthentication, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothRegisterForAuthenticationEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothRemoveDevice, :QWORD
PROTO64 external,BluetoothSdpEnumAttributes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSdpGetAttributeValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSdpGetContainerElementData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSdpGetElementData, :QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSdpGetString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSendAuthenticationResponse, :QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSendAuthenticationResponseEx, :QWORD,:QWORD
PROTO64 external,BluetoothSetLocalServiceInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSetServiceState, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSetServiceStateEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothUnregisterAuthentication, :QWORD
PROTO64 external,BluetoothUpdateDeviceRecord, :QWORD
PROTO64 external,BthpCheckForUnsupportedGuid, :QWORD
PROTO64 external,BthpCleanupBRDeviceNode, :QWORD,:QWORD
PROTO64 external,BthpCleanupDeviceLocalServices, :QWORD
PROTO64 external,BthpCleanupDeviceRemoteServices, :QWORD
PROTO64 external,BthpCleanupLEDeviceNodes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BthpEnableA2DPIfPresent, :QWORD,:QWORD
PROTO64 external,BthpEnableAllServices, :QWORD,:QWORD
PROTO64 external,BthpEnableConnectableAndDiscoverable, :QWORD,:QWORD,:QWORD
PROTO64 external,BthpEnableRadioSoftware, :QWORD
PROTO64 external,BthpFindPnpInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BthpGATTCloseSession, :QWORD,:QWORD
PROTO64 external,BthpInnerRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,BthpIsBluetoothServiceRunning, 
PROTO64 external,BthpIsConnectableByDefault, 
PROTO64 external,BthpIsDiscoverable, :QWORD
PROTO64 external,BthpIsDiscoverableByDefault, 
PROTO64 external,BthpIsRadioSoftwareEnabled, :QWORD
PROTO64 external,BthpIsTopOfServiceGroup, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BthpMapStatusToErr, :QWORD
PROTO64 external,BthpNextRecord, :QWORD,:QWORD
PROTO64 external,BthpRegisterForAuthentication, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BthpSetServiceState, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BthpSetServiceStateEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BthpTranspose16Bits, :QWORD
PROTO64 external,BthpTranspose32Bits, :QWORD
PROTO64 external,BthpTransposeAndExtendBytes, :QWORD,:QWORD,:QWORD
PROTO64 external,FindNextOpenVCOMPort, :QWORD
PROTO64 external,InstallIncomingComPort, :QWORD,:QWORD
PROTO64 external,ShouldForceAuthentication, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bluetoothapis.inc
echo -----------------------------------------
ENDIF

