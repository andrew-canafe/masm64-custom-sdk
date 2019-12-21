IFNDEF DXGI_INC
DXGI_INC equ <1>

PROTO64 external,CreateDXGIFactory1, :QWORD,:QWORD
PROTO64 external,CreateDXGIFactory2, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateDXGIFactory, :QWORD,:QWORD
PROTO64 external,DXGID3D10CreateDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DXGID3D10CreateLayeredDevice, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DXGID3D10GetLayeredDeviceSize, :QWORD,:QWORD
PROTO64 external,DXGID3D10RegisterLayers, :QWORD,:QWORD
PROTO64 external,DXGIGetDebugInterface1, :QWORD,:QWORD,:QWORD
PROTO64 external,DXGIReportAdapterConfiguration, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dxgi.inc
echo -----------------------------------------
ENDIF

