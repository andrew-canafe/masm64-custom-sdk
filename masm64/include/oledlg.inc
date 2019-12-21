IFNDEF OLEDLG_INC
OLEDLG_INC equ <1>

PROTO64 external,OleUIAddVerbMenuA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleUIAddVerbMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleUIBusyA, :QWORD
PROTO64 external,OleUIBusyW, :QWORD
PROTO64 external,OleUICanConvertOrActivateAs, :QWORD,:QWORD,:QWORD
PROTO64 external,OleUIChangeIconA, :QWORD
PROTO64 external,OleUIChangeIconW, :QWORD
PROTO64 external,OleUIChangeSourceA, :QWORD
PROTO64 external,OleUIChangeSourceW, :QWORD
PROTO64 external,OleUIConvertA, :QWORD
PROTO64 external,OleUIConvertW, :QWORD
PROTO64 external,OleUIEditLinksA, :QWORD
PROTO64 external,OleUIEditLinksW, :QWORD
PROTO64 external,OleUIInsertObjectA, :QWORD
PROTO64 external,OleUIInsertObjectW, :QWORD
PROTO64 external,OleUIObjectPropertiesA, :QWORD
PROTO64 external,OleUIObjectPropertiesW, :QWORD
PROTO64 external,OleUIPasteSpecialA, :QWORD
PROTO64 external,OleUIPasteSpecialW, :QWORD
PROTO64 external,OleUIUpdateLinksA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleUIUpdateLinksW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file oledlg.inc
echo -----------------------------------------
ENDIF

