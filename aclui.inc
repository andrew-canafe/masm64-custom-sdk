IFNDEF ACLUI_INC
ACLUI_INC equ <1>

PROTO64 external,CreateSecurityPage, :QWORD
PROTO64 external,EditConditionalAceClaims, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EditResourceCondition, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EditSecurity, :QWORD,:QWORD
PROTO64 external,EditSecurityAdvanced, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file aclui.inc
echo -----------------------------------------
ENDIF

