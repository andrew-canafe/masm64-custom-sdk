IFNDEF DCOMP_INC
DCOMP_INC equ <1>

PROTO64 external,DCompositionCreateDevice2, :QWORD,:QWORD,:QWORD
PROTO64 external,DCompositionCreateDevice3, :QWORD,:QWORD,:QWORD
PROTO64 external,DCompositionCreateDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,DCompositionCreateSurfaceHandle, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dcomp.inc
echo -----------------------------------------
ENDIF

