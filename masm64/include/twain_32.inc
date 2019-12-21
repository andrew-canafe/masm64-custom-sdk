IFNDEF TWAIN_32_INC
TWAIN_32_INC equ <1>

PROTO64 external,AboutDlgProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ChooseDlgProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DSM_Entry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InfoHook, :QWORD,:QWORD,:QWORD
PROTO64 external,WGDlgProc, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file twain_32.inc
echo -----------------------------------------
ENDIF

