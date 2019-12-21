IFNDEF XPSPRINT_INC
XPSPRINT_INC equ <1>

PROTO64 external,StartXpsPrintJob1, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StartXpsPrintJob, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file xpsprint.inc
echo -----------------------------------------
ENDIF

