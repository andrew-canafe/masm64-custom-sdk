IFNDEF UUID_INC
UUID_INC equ <1>

PROTO64 external,_uiautomationclientpriv_IID_Lookup, :QWORD,:QWORD
PROTO64 external,_uiautomationcore_IID_Lookup, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file uuid.inc
echo -----------------------------------------
ENDIF

