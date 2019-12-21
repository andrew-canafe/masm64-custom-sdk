IFNDEF CABINET_INC
CABINET_INC equ <1>

PROTO64 external,CloseCompressor, :QWORD
PROTO64 external,CloseDecompressor, :QWORD
PROTO64 external,Compress, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateCompressor, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateDecompressor, :QWORD,:QWORD,:QWORD
PROTO64 external,Decompress, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteExtractedFiles, :QWORD
PROTO64 external,DllGetVersion, :QWORD
PROTO64 external,Extract, :QWORD,:QWORD
PROTO64 external,GetDllVersion, 
PROTO64 external,QueryCompressorInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryDecompressorInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResetCompressor, :QWORD
PROTO64 external,ResetDecompressor, :QWORD
PROTO64 external,SetCompressorInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetDecompressorInformation, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cabinet.inc
echo -----------------------------------------
ENDIF

