IFNDEF IMGUTIL_INC
IMGUTIL_INC equ <1>

PROTO64 external,ComputeInvCMAP, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateDDrawSurfaceOnDIB, :QWORD,:QWORD
PROTO64 external,CreateMIMEMap, :QWORD
PROTO64 external,DecodeImage, :QWORD,:QWORD,:QWORD
PROTO64 external,DecodeImageEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DitherTo8, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMaxMIMEIDBytes, :QWORD
PROTO64 external,IdentifyMIMEType, :QWORD,:QWORD,:QWORD
PROTO64 external,SniffStream, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file imgutil.inc
echo -----------------------------------------
ENDIF

