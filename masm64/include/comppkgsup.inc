IFNDEF COMPPKGSUP_INC
COMPPKGSUP_INC equ <1>

PROTO64 external,AreDvdCodecsEnabled, 
PROTO64 external,GetServerForPMP, :QWORD,:QWORD
PROTO64 external,InstantiateComponentFromPackage, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterServerForPMP, :QWORD,:QWORD,:QWORD
PROTO64 external,UnregisterServerForPMP, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file comppkgsup.inc
echo -----------------------------------------
ENDIF

