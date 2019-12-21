IFNDEF IRPROPS_INC
IRPROPS_INC equ <1>

PROTO64 external,BluetoothAuthenticateDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothAuthenticateMultipleDevices, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothAuthenticationAgent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothDisconnectDevice, :QWORD,:QWORD
PROTO64 external,BluetoothDisplayDeviceProperties, :QWORD,:QWORD
PROTO64 external,BluetoothEnableDiscovery, :QWORD,:QWORD
PROTO64 external,BluetoothEnableIncomingConnections, :QWORD,:QWORD
PROTO64 external,BluetoothEnumerateInstalledServices, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothFindDeviceClose, :QWORD
PROTO64 external,BluetoothFindFirstDevice, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstRadio, :QWORD,:QWORD
PROTO64 external,BluetoothFindFirstService, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextDevice, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextRadio, :QWORD,:QWORD
PROTO64 external,BluetoothFindNextService, :QWORD,:QWORD
PROTO64 external,BluetoothFindRadioClose, :QWORD
PROTO64 external,BluetoothFindServiceClose, :QWORD
PROTO64 external,BluetoothGetDeviceInfo, :QWORD,:QWORD
PROTO64 external,BluetoothGetRadioInfo, :QWORD,:QWORD
PROTO64 external,BluetoothIsConnectable, :QWORD
PROTO64 external,BluetoothIsDiscoverable, :QWORD
PROTO64 external,BluetoothRegisterForAuthentication, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothRemoveDevice, :QWORD
PROTO64 external,BluetoothSdpEnumAttributes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSdpGetAttributeValue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSdpGetContainerElementData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSdpGetElementData, :QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSdpGetString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSelectDevices, :QWORD
PROTO64 external,BluetoothSelectDevicesFree, :QWORD
PROTO64 external,BluetoothSendAuthenticationResponse, :QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothSetServiceState, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BluetoothUnregisterAuthentication, :QWORD
PROTO64 external,BluetoothUpdateDeviceRecord, :QWORD
PROTO64 external,CPlApplet, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file irprops.inc
echo -----------------------------------------
ENDIF

