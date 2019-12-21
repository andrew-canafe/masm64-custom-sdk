IFNDEF DWRITE_INC
DWRITE_INC equ <1>

PROTO64 external,DWriteCreateFactory, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dwrite.inc
echo -----------------------------------------
ENDIF

