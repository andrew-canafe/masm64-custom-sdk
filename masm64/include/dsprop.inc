IFNDEF DSPROP_INC
DSPROP_INC equ <1>

PROTO64 external,ADsPropCheckIfWritable, :QWORD,:QWORD
PROTO64 external,ADsPropCreateNotifyObj, :QWORD,:QWORD,:QWORD
PROTO64 external,ADsPropGetInitInfo, :QWORD,:QWORD
PROTO64 external,ADsPropSendErrorMessage, :QWORD,:QWORD
PROTO64 external,ADsPropSetHwnd, :QWORD,:QWORD
PROTO64 external,ADsPropSetHwndWithTitle, :QWORD,:QWORD,:QWORD
PROTO64 external,ADsPropShowErrorDialog, :QWORD,:QWORD
PROTO64 external,BringSheetToForeground, :QWORD,:QWORD
PROTO64 external,IsSheetAlreadyUp, :QWORD
PROTO64 external,PostADsPropSheet, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dsprop.inc
echo -----------------------------------------
ENDIF

