IFNDEF DDRAW_INC
DDRAW_INC equ <1>

PROTO64 external,DDGetAttachedSurfaceLcl, :QWORD,:QWORD,:QWORD
PROTO64 external,DDInternalLock, :QWORD,:QWORD
PROTO64 external,DDInternalUnlock, :QWORD
PROTO64 external,DSoundHelp, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectDrawCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectDrawCreateClipper, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectDrawCreateEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectDrawEnumerateA, :QWORD,:QWORD
PROTO64 external,DirectDrawEnumerateExA, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectDrawEnumerateExW, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectDrawEnumerateW, :QWORD,:QWORD
PROTO64 external,GetDDSurfaceLocal, :QWORD,:QWORD,:QWORD
PROTO64 external,GetSurfaceFromDC, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ddraw.inc
echo -----------------------------------------
ENDIF

