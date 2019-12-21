IFNDEF CERTIDL_INC
CERTIDL_INC equ <1>

PROTO64 external,CertServerRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MIDL_user_allocate, :QWORD
PROTO64 external,MIDL_user_free, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file certidl.inc
echo -----------------------------------------
ENDIF

