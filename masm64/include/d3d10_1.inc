IFNDEF D3D10_1_INC
D3D10_1_INC equ <1>

PROTO64 external,D3D10CompileEffectFromMemory, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10CompileShader, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10CreateBlob, :QWORD,:QWORD
PROTO64 external,D3D10CreateDevice1, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10CreateDeviceAndSwapChain1, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10CreateEffectFromMemory, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10CreateEffectPoolFromMemory, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10CreateStateBlock, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10DisassembleEffect, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10DisassembleShader, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10GetGeometryShaderProfile, :QWORD
PROTO64 external,D3D10GetInputAndOutputSignatureBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10GetInputSignatureBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10GetOutputSignatureBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10GetPixelShaderProfile, :QWORD
PROTO64 external,D3D10GetShaderDebugInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10GetVersion, 
PROTO64 external,D3D10GetVertexShaderProfile, :QWORD
PROTO64 external,D3D10PreprocessShader, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10ReflectShader, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10RegisterLayers, 
PROTO64 external,D3D10StateBlockMaskDifference, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10StateBlockMaskDisableAll, :QWORD
PROTO64 external,D3D10StateBlockMaskDisableCapture, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10StateBlockMaskEnableAll, :QWORD
PROTO64 external,D3D10StateBlockMaskEnableCapture, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3D10StateBlockMaskGetSetting, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10StateBlockMaskIntersect, :QWORD,:QWORD,:QWORD
PROTO64 external,D3D10StateBlockMaskUnion, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file d3d10_1.inc
echo -----------------------------------------
ENDIF

