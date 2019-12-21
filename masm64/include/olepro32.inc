IFNDEF OLEPRO32_INC
OLEPRO32_INC equ <1>

PROTO64 external,OleCreateFontIndirect, :QWORD,:QWORD,:QWORD
PROTO64 external,OleCreatePictureIndirect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreatePropertyFrame, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreatePropertyFrameIndirect, :QWORD
PROTO64 external,OleIconToCursor, :QWORD,:QWORD
PROTO64 external,OleLoadPicture, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleTranslateColor, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file olepro32.inc
echo -----------------------------------------
ENDIF

