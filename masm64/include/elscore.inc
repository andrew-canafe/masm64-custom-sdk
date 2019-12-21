IFNDEF ELSCORE_INC
ELSCORE_INC equ <1>

PROTO64 external,MappingDoAction, :QWORD,:QWORD,:QWORD
PROTO64 external,MappingFreePropertyBag, :QWORD
PROTO64 external,MappingFreeServices, :QWORD
PROTO64 external,MappingGetServices, :QWORD,:QWORD,:QWORD
PROTO64 external,MappingRecognizeText, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file elscore.inc
echo -----------------------------------------
ENDIF

