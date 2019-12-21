IFNDEF MMDEVAPI_INC
MMDEVAPI_INC equ <1>

PROTO64 external,ActivateAudioInterfaceAsync, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CleanupDeviceAPI, 
PROTO64 external,FlushDeviceTopologyCache, 
PROTO64 external,GenerateMediaEvent, :QWORD,:QWORD
PROTO64 external,GetClassFromEndpointId, :QWORD
PROTO64 external,GetEndpointGuidFromEndpointId, :QWORD,:QWORD
PROTO64 external,GetEndpointIdFromDeviceInterfaceId, :QWORD,:QWORD
PROTO64 external,GetSessionIdFromEndpointId, :QWORD
PROTO64 external,InitializeDeviceAPI, 
PROTO64 external,MMDeviceCreateRegistryPropertyStore, :QWORD,:QWORD,:QWORD
PROTO64 external,MMDeviceGetDeviceEnumerator, :QWORD
PROTO64 external,MMDeviceGetEndpointManager, :QWORD
PROTO64 external,MMDeviceGetPolicyConfig, :QWORD
PROTO64 external,RegisterForMediaCallback, :QWORD,:QWORD
PROTO64 external,UnregisterMediaCallback, :QWORD
PROTO64 external,mmdDevFindMmDevProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,mmdDevGetInstanceIdFromInterfaceId, :QWORD,:QWORD
PROTO64 external,mmdDevGetInterfaceClassGuid, :QWORD,:QWORD
PROTO64 external,mmdDevGetInterfaceDataFlow, :QWORD,:QWORD
PROTO64 external,mmdDevGetInterfaceIdFromMMDevice, :QWORD,:QWORD
PROTO64 external,mmdDevGetInterfacePropertyStore, :QWORD,:QWORD,:QWORD
PROTO64 external,mmdDevGetMMDeviceFromInterfaceId, :QWORD,:QWORD
PROTO64 external,mmdDevGetMMDeviceIdFromInterfaceId, :QWORD,:QWORD
PROTO64 external,mmdDevGetRelatedInterfaceId, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mmdevapi.inc
echo -----------------------------------------
ENDIF

