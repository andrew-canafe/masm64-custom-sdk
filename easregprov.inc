IFNDEF EASREGPROV_INC
EASREGPROV_INC equ <1>

PROTO64 external,EasRegisterEncryptionProvider, :QWORD
PROTO64 external,EasUnRegisterEncryptionProvider, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file easregprov.inc
echo -----------------------------------------
ENDIF

