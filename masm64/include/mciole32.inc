IFNDEF MCIOLE32_INC
MCIOLE32_INC equ <1>

PROTO64 external,DllCreate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllCreateFromClip, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllCreateFromFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllCreateFromTemplate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllCreateLinkFromClip, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllCreateLinkFromFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllLoadFromStream, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMessageHook, :QWORD,:QWORD,:QWORD
PROTO64 external,InstallHook, :QWORD,:QWORD
PROTO64 external,OleQueryObjPos, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RemoveHook, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mciole32.inc
echo -----------------------------------------
ENDIF

