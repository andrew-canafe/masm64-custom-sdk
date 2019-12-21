IFNDEF MSDMO_INC
MSDMO_INC equ <1>

PROTO64 external,DMOEnum, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DMOGetName, :QWORD,:QWORD
PROTO64 external,DMOGetTypes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DMOGuidToStrA, :QWORD,:QWORD
PROTO64 external,DMOGuidToStrW, :QWORD,:QWORD
PROTO64 external,DMORegister, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DMOStrToGuidA, :QWORD,:QWORD
PROTO64 external,DMOStrToGuidW, :QWORD,:QWORD
PROTO64 external,DMOUnregister, :QWORD,:QWORD
PROTO64 external,MoCopyMediaType, :QWORD,:QWORD
PROTO64 external,MoCreateMediaType, :QWORD,:QWORD
PROTO64 external,MoDeleteMediaType, :QWORD
PROTO64 external,MoDuplicateMediaType, :QWORD,:QWORD
PROTO64 external,MoFreeMediaType, :QWORD
PROTO64 external,MoInitMediaType, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msdmo.inc
echo -----------------------------------------
ENDIF

