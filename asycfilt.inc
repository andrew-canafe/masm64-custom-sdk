IFNDEF ASYCFILT_INC
ASYCFILT_INC equ <1>

PROTO64 external,FilterCreateInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file asycfilt.inc
echo -----------------------------------------
ENDIF

