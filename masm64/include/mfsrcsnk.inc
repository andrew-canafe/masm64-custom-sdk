IFNDEF MFSRCSNK_INC
MFSRCSNK_INC equ <1>

PROTO64 external,MFCreateAVIMediaSink, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MFCreateWAVEMediaSink, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mfsrcsnk.inc
echo -----------------------------------------
ENDIF

