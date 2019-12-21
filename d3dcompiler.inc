IFNDEF D3DCOMPILER_INC
D3DCOMPILER_INC equ <1>

PROTO64 external,D3DCompile2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DCompile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DCompileFromFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DCompressShaders, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DCreateBlob, :QWORD,:QWORD
PROTO64 external,D3DCreateFunctionLinkingGraph, :QWORD,:QWORD
PROTO64 external,D3DCreateLinker, :QWORD
PROTO64 external,D3DDecompressShaders, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DDisassemble10Effect, :QWORD,:QWORD,:QWORD
PROTO64 external,D3DDisassemble11Trace, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DDisassemble, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DDisassembleRegion, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DGetBlobPart, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DGetDebugInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,D3DGetInputAndOutputSignatureBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,D3DGetInputSignatureBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,D3DGetOutputSignatureBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,D3DGetTraceInstructionOffsets, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DLoadModule, :QWORD,:QWORD,:QWORD
PROTO64 external,D3DPreprocess, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DReadFileToBlob, :QWORD,:QWORD
PROTO64 external,D3DReflect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DReflectLibrary, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DReturnFailure1, :QWORD,:QWORD,:QWORD
PROTO64 external,D3DSetBlobPart, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DStripShader, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D3DWriteBlobToFile, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file d3dcompiler.inc
echo -----------------------------------------
ENDIF

