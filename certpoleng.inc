IFNDEF CERTPOLENG_INC
CERTPOLENG_INC equ <1>

PROTO64 external,PstAcquirePrivateKey, :QWORD
PROTO64 external,PstGetCertificateChain, :QWORD,:QWORD,:QWORD
PROTO64 external,PstGetCertificates, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PstGetTrustAnchors, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PstGetTrustAnchorsEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PstGetUserNameForCertificate, :QWORD,:QWORD
PROTO64 external,PstMapCertificate, :QWORD,:QWORD,:QWORD
PROTO64 external,PstValidate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file certpoleng.inc
echo -----------------------------------------
ENDIF

