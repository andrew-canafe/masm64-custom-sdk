IFNDEF MSPATCHA_INC
MSPATCHA_INC equ <1>

PROTO64 external,ApplyPatchToFileA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplyPatchToFileByBuffers, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplyPatchToFileByHandles, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplyPatchToFileByHandlesEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplyPatchToFileExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplyPatchToFileExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ApplyPatchToFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFilePatchSignatureA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFilePatchSignatureByBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFilePatchSignatureByHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFilePatchSignatureW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NormalizeFileForPatchSignature, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TestApplyPatchToFileA, :QWORD,:QWORD,:QWORD
PROTO64 external,TestApplyPatchToFileByBuffers, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TestApplyPatchToFileByHandles, :QWORD,:QWORD,:QWORD
PROTO64 external,TestApplyPatchToFileW, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mspatcha.inc
echo -----------------------------------------
ENDIF

