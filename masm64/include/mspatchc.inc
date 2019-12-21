IFNDEF MSPATCHC_INC
MSPATCHC_INC equ <1>

PROTO64 external,CreatePatchFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreatePatchFileByHandles, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreatePatchFileByHandlesEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreatePatchFileExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreatePatchFileExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreatePatchFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExtractPatchHeaderToFileA, :QWORD,:QWORD
PROTO64 external,ExtractPatchHeaderToFileByHandles, :QWORD,:QWORD
PROTO64 external,ExtractPatchHeaderToFileW, :QWORD,:QWORD
PROTO64 external,GetFilePatchSignatureA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFilePatchSignatureByBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFilePatchSignatureByHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFilePatchSignatureW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NormalizeFileForPatchSignature, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mspatchc.inc
echo -----------------------------------------
ENDIF

