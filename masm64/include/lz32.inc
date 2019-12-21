IFNDEF LZ32_INC
LZ32_INC equ <1>

PROTO64 external,CopyLZFile, :QWORD,:QWORD
PROTO64 external,GetExpandedNameA, :QWORD,:QWORD
PROTO64 external,GetExpandedNameW, :QWORD,:QWORD
PROTO64 external,LZClose, :QWORD
PROTO64 external,LZCloseFile, :QWORD
PROTO64 external,LZCopy, :QWORD,:QWORD
PROTO64 external,LZCreateFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LZDone, 
PROTO64 external,LZInit, :QWORD
PROTO64 external,LZOpenFileA, :QWORD,:QWORD,:QWORD
PROTO64 external,LZOpenFileW, :QWORD,:QWORD,:QWORD
PROTO64 external,LZRead, :QWORD,:QWORD,:QWORD
PROTO64 external,LZSeek, :QWORD,:QWORD,:QWORD
PROTO64 external,LZStart, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file lz32.inc
echo -----------------------------------------
ENDIF

