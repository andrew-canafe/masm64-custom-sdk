IFNDEF D3D12_INC
D3D12_INC equ <1>

PROTO64 external,D3D12CoreCreateLayeredDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D12CoreGetLayeredDeviceSize, :QWORD,:QWORD
PROTO64 external,D3D12CoreRegisterLayers, :QWORD,:QWORD
PROTO64 external,D3D12CreateDevice, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D12CreateRootSignatureDeserializer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D12GetDebugInterface, :QWORD,:QWORD
PROTO64 external,D3D12SerializeRootSignature, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file d3d12.inc
echo -----------------------------------------
ENDIF

