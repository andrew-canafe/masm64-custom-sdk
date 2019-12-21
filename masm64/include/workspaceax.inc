IFNDEF WORKSPACEAX_INC
WORKSPACEAX_INC equ <1>

PROTO64 external,_radcapi_IID_Lookup, :QWORD,:QWORD
PROTO64 external,_workspaceax_IID_Lookup, :QWORD,:QWORD
PROTO64 external,_workspacenotify_IID_Lookup, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file workspaceax.inc
echo -----------------------------------------
ENDIF

