IFNDEF NORMALIZ_INC
NORMALIZ_INC equ <1>

PROTO64 external,IdnToAscii, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IdnToNameprepUnicode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IdnToUnicode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsNormalizedString, :QWORD,:QWORD,:QWORD
PROTO64 external,NormalizeString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file normaliz.inc
echo -----------------------------------------
ENDIF

