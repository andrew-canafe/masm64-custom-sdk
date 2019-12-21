IFNDEF DXVA2_INC
DXVA2_INC equ <1>

PROTO64 external,CapabilitiesRequestAndCapabilitiesReply, :QWORD,:QWORD,:QWORD
PROTO64 external,DXVA2CreateDirect3DDeviceManager9, :QWORD,:QWORD
PROTO64 external,DXVA2CreateVideoService, :QWORD,:QWORD,:QWORD
PROTO64 external,DXVAHD_CreateDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DegaussMonitor, :QWORD
PROTO64 external,DestroyPhysicalMonitor, :QWORD
PROTO64 external,DestroyPhysicalMonitors, :QWORD,:QWORD
PROTO64 external,GetCapabilitiesStringLength, :QWORD,:QWORD
PROTO64 external,GetMonitorBrightness, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMonitorCapabilities, :QWORD,:QWORD,:QWORD
PROTO64 external,GetMonitorColorTemperature, :QWORD,:QWORD
PROTO64 external,GetMonitorContrast, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMonitorDisplayAreaPosition, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMonitorDisplayAreaSize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMonitorRedGreenOrBlueDrive, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMonitorRedGreenOrBlueGain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMonitorTechnologyType, :QWORD,:QWORD
PROTO64 external,GetNumberOfPhysicalMonitorsFromHMONITOR, :QWORD,:QWORD
PROTO64 external,GetNumberOfPhysicalMonitorsFromIDirect3DDevice9, :QWORD,:QWORD
PROTO64 external,GetPhysicalMonitorsFromHMONITOR, :QWORD,:QWORD,:QWORD
PROTO64 external,GetPhysicalMonitorsFromIDirect3DDevice9, :QWORD,:QWORD,:QWORD
PROTO64 external,GetTimingReport, :QWORD,:QWORD
PROTO64 external,GetVCPFeatureAndVCPFeatureReply, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OPMGetVideoOutputsFromHMONITOR, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OPMGetVideoOutputsFromIDirect3DDevice9Object, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RestoreMonitorFactoryColorDefaults, :QWORD
PROTO64 external,RestoreMonitorFactoryDefaults, :QWORD
PROTO64 external,SaveCurrentMonitorSettings, :QWORD
PROTO64 external,SaveCurrentSettings, :QWORD
PROTO64 external,SetMonitorBrightness, :QWORD,:QWORD
PROTO64 external,SetMonitorColorTemperature, :QWORD,:QWORD
PROTO64 external,SetMonitorContrast, :QWORD,:QWORD
PROTO64 external,SetMonitorDisplayAreaPosition, :QWORD,:QWORD,:QWORD
PROTO64 external,SetMonitorDisplayAreaSize, :QWORD,:QWORD,:QWORD
PROTO64 external,SetMonitorRedGreenOrBlueDrive, :QWORD,:QWORD,:QWORD
PROTO64 external,SetMonitorRedGreenOrBlueGain, :QWORD,:QWORD,:QWORD
PROTO64 external,SetVCPFeature, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dxva2.inc
echo -----------------------------------------
ENDIF

