IFNDEF TOKENBINDING_INC
TOKENBINDING_INC equ <1>

PROTO64 external,TokenBindingDeleteBinding, :QWORD
PROTO64 external,TokenBindingGenerateBinding, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TokenBindingGenerateMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TokenBindingGetKeyTypesClient, :QWORD
PROTO64 external,TokenBindingGetKeyTypesServer, :QWORD
PROTO64 external,TokenBindingVerifyMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tokenbinding.inc
echo -----------------------------------------
ENDIF

