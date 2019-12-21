IFNDEF SHFOLDER_INC
SHFOLDER_INC equ <1>

PROTO64 external,SHGetFolderPathA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHGetFolderPathW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file shfolder.inc
echo -----------------------------------------
ENDIF

