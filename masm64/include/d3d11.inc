IFNDEF D3D11_INC
D3D11_INC equ <1>

PROTO64 external,CreateDirect3D11DeviceFromDXGIDevice, :QWORD,:QWORD
PROTO64 external,CreateDirect3D11SurfaceFromDXGISurface, :QWORD,:QWORD
PROTO64 external,D3D11CoreCreateDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D11CoreCreateLayeredDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D11CoreGetLayeredDeviceSize, :QWORD,:QWORD
PROTO64 external,D3D11CoreRegisterLayers, :QWORD,:QWORD
PROTO64 external,D3D11CreateDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D11CreateDeviceAndSwapChain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D11On12CreateDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DKMTCreateAllocation, :QWORD
PROTO64 external,D3DKMTCreateContext, :QWORD
PROTO64 external,D3DKMTCreateDevice, :QWORD
PROTO64 external,D3DKMTCreateSynchronizationObject, :QWORD
PROTO64 external,D3DKMTEscape, :QWORD
PROTO64 external,D3DKMTGetContextSchedulingPriority, :QWORD
PROTO64 external,D3DKMTGetDeviceState, :QWORD
PROTO64 external,D3DKMTGetDisplayModeList, :QWORD
PROTO64 external,D3DKMTGetMultisampleMethodList, :QWORD
PROTO64 external,D3DKMTGetRuntimeData, :QWORD
PROTO64 external,D3DKMTGetSharedPrimaryHandle, :QWORD
PROTO64 external,D3DKMTLock, :QWORD
PROTO64 external,D3DKMTOpenAdapterFromHdc, :QWORD
PROTO64 external,D3DKMTOpenResource, :QWORD
PROTO64 external,D3DKMTQueryAllocationResidency, :QWORD
PROTO64 external,D3DKMTQueryResourceInfo, :QWORD
PROTO64 external,D3DKMTRender, :QWORD
PROTO64 external,D3DKMTSetAllocationPriority, :QWORD
PROTO64 external,D3DKMTSetContextSchedulingPriority, :QWORD
PROTO64 external,D3DKMTSetDisplayMode, :QWORD
PROTO64 external,D3DKMTSetGammaRamp, :QWORD
PROTO64 external,D3DKMTSetVidPnSourceOwner, :QWORD
PROTO64 external,D3DKMTWaitForVerticalBlankEvent, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file d3d11.inc
echo -----------------------------------------
ENDIF

