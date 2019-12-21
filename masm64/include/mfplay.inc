IFNDEF MFPLAY_INC
MFPLAY_INC equ <1>

PROTO64 external,MFPCreateMediaPlayer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mfplay.inc
echo -----------------------------------------
ENDIF

