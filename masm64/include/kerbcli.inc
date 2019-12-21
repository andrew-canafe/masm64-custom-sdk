IFNDEF KERBCLI_INC
KERBCLI_INC equ <1>

PROTO64 external,KerbChangePasswordUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KerbSetPasswordUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KerbSetPasswordUserEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file kerbcli.inc
echo -----------------------------------------
ENDIF

