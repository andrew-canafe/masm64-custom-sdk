IFNDEF COMPSTUI_INC
COMPSTUI_INC equ <1>

PROTO64 external,CommonPropertySheetUIA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CommonPropertySheetUIW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCPSUIUserData, :QWORD
PROTO64 external,SetCPSUIUserData, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file compstui.inc
echo -----------------------------------------
ENDIF

