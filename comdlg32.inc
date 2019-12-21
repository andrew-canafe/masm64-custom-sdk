IFNDEF COMDLG32_INC
COMDLG32_INC equ <1>

PROTO64 external,ChooseColorA, :QWORD
PROTO64 external,ChooseColorW, :QWORD
PROTO64 external,ChooseFontA, :QWORD
PROTO64 external,ChooseFontW, :QWORD
PROTO64 external,CommDlgExtendedError, 
PROTO64 external,FindTextA, :QWORD
PROTO64 external,FindTextW, :QWORD
PROTO64 external,GetFileTitleA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetFileTitleW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetOpenFileNameA, :QWORD
PROTO64 external,GetOpenFileNameW, :QWORD
PROTO64 external,GetSaveFileNameA, :QWORD
PROTO64 external,GetSaveFileNameW, :QWORD
PROTO64 external,PageSetupDlgA, :QWORD
PROTO64 external,PageSetupDlgW, :QWORD
PROTO64 external,PrintDlgA, :QWORD
PROTO64 external,PrintDlgExA, :QWORD
PROTO64 external,PrintDlgExW, :QWORD
PROTO64 external,PrintDlgW, :QWORD
PROTO64 external,ReplaceTextA, :QWORD
PROTO64 external,ReplaceTextW, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file comdlg32.inc
echo -----------------------------------------
ENDIF

