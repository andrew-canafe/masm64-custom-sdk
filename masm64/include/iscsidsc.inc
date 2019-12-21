IFNDEF ISCSIDSC_INC
ISCSIDSC_INC equ <1>

PROTO64 external,AddISNSServerA, :QWORD
PROTO64 external,AddISNSServerW, :QWORD
PROTO64 external,AddIScsiConnectionA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddIScsiConnectionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddIScsiSendTargetPortalA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddIScsiSendTargetPortalW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddIScsiStaticTargetA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddIScsiStaticTargetW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddPersistentIScsiDeviceA, :QWORD
PROTO64 external,AddPersistentIScsiDeviceW, :QWORD
PROTO64 external,AddRadiusServerA, :QWORD
PROTO64 external,AddRadiusServerW, :QWORD
PROTO64 external,ClearPersistentIScsiDevices, 
PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDevicesForIScsiSessionA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDevicesForIScsiSessionW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetIScsiIKEInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetIScsiIKEInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetIScsiInitiatorNodeNameA, :QWORD
PROTO64 external,GetIScsiInitiatorNodeNameW, :QWORD
PROTO64 external,GetIScsiSessionListA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetIScsiSessionListEx, :QWORD,:QWORD,:QWORD
PROTO64 external,GetIScsiSessionListW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetIScsiTargetInformationA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetIScsiTargetInformationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetIScsiVersionInformation, :QWORD
PROTO64 external,LoginIScsiTargetA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LoginIScsiTargetW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LogoutIScsiTarget, :QWORD
PROTO64 external,RefreshISNSServerA, :QWORD
PROTO64 external,RefreshISNSServerW, :QWORD
PROTO64 external,RefreshIScsiSendTargetPortalA, :QWORD,:QWORD,:QWORD
PROTO64 external,RefreshIScsiSendTargetPortalW, :QWORD,:QWORD,:QWORD
PROTO64 external,RemoveISNSServerA, :QWORD
PROTO64 external,RemoveISNSServerW, :QWORD
PROTO64 external,RemoveIScsiConnection, :QWORD,:QWORD
PROTO64 external,RemoveIScsiPersistentTargetA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RemoveIScsiPersistentTargetW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RemoveIScsiSendTargetPortalA, :QWORD,:QWORD,:QWORD
PROTO64 external,RemoveIScsiSendTargetPortalW, :QWORD,:QWORD,:QWORD
PROTO64 external,RemoveIScsiStaticTargetA, :QWORD
PROTO64 external,RemoveIScsiStaticTargetW, :QWORD
PROTO64 external,RemovePersistentIScsiDeviceA, :QWORD
PROTO64 external,RemovePersistentIScsiDeviceW, :QWORD
PROTO64 external,RemoveRadiusServerA, :QWORD
PROTO64 external,RemoveRadiusServerW, :QWORD
PROTO64 external,ReportActiveIScsiTargetMappingsA, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportActiveIScsiTargetMappingsW, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportISNSServerListA, :QWORD,:QWORD
PROTO64 external,ReportISNSServerListW, :QWORD,:QWORD
PROTO64 external,ReportIScsiInitiatorListA, :QWORD,:QWORD
PROTO64 external,ReportIScsiInitiatorListW, :QWORD,:QWORD
PROTO64 external,ReportIScsiPersistentLoginsA, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportIScsiPersistentLoginsW, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportIScsiSendTargetPortalsA, :QWORD,:QWORD
PROTO64 external,ReportIScsiSendTargetPortalsExA, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportIScsiSendTargetPortalsExW, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportIScsiSendTargetPortalsW, :QWORD,:QWORD
PROTO64 external,ReportIScsiTargetPortalsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReportIScsiTargetPortalsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReportIScsiTargetsA, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportIScsiTargetsW, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportPersistentIScsiDevicesA, :QWORD,:QWORD
PROTO64 external,ReportPersistentIScsiDevicesW, :QWORD,:QWORD
PROTO64 external,ReportRadiusServerListA, :QWORD,:QWORD
PROTO64 external,ReportRadiusServerListW, :QWORD,:QWORD
PROTO64 external,SendScsiInquiry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SendScsiReadCapacity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SendScsiReportLuns, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetIScsiGroupPresharedKey, :QWORD,:QWORD,:QWORD
PROTO64 external,SetIScsiIKEInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetIScsiIKEInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetIScsiInitiatorCHAPSharedSecret, :QWORD,:QWORD
PROTO64 external,SetIScsiInitiatorNodeNameA, :QWORD
PROTO64 external,SetIScsiInitiatorNodeNameW, :QWORD
PROTO64 external,SetIScsiInitiatorRADIUSSharedSecret, :QWORD,:QWORD
PROTO64 external,SetIScsiTunnelModeOuterAddressA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetIScsiTunnelModeOuterAddressW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetupPersistentIScsiDevices, 
PROTO64 external,SetupPersistentIScsiVolumes, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file iscsidsc.inc
echo -----------------------------------------
ENDIF

