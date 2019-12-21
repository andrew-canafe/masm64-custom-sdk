IFNDEF MRMSUPPORT_INC
MRMSUPPORT_INC equ <1>

PROTO64 external,CreateResourceIndexer, :QWORD,:QWORD,:QWORD
PROTO64 external,DestroyIndexedResults, :QWORD,:QWORD,:QWORD
PROTO64 external,DestroyResourceIndexer, :QWORD
PROTO64 external,IndexFilePath, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mrmsupport.inc
echo -----------------------------------------
ENDIF

