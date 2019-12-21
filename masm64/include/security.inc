IFNDEF SECURITY_INC
SECURITY_INC equ <1>

PROTO64 external,AcceptSecurityContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AcquireCredentialsHandleA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AcquireCredentialsHandleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddSecurityPackageA, :QWORD,:QWORD
PROTO64 external,AddSecurityPackageW, :QWORD,:QWORD
PROTO64 external,ApplyControlToken, :QWORD,:QWORD
PROTO64 external,CompleteAuthToken, :QWORD,:QWORD
PROTO64 external,DecryptMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteSecurityContext, :QWORD
PROTO64 external,DeleteSecurityPackageA, :QWORD
PROTO64 external,DeleteSecurityPackageW, :QWORD
PROTO64 external,EncryptMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumerateSecurityPackagesA, :QWORD,:QWORD
PROTO64 external,EnumerateSecurityPackagesW, :QWORD,:QWORD
PROTO64 external,ExportSecurityContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeContextBuffer, :QWORD
PROTO64 external,FreeCredentialsHandle, :QWORD
PROTO64 external,ImpersonateSecurityContext, :QWORD
PROTO64 external,ImportSecurityContextA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImportSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitSecurityInterfaceA, 
PROTO64 external,InitSecurityInterfaceW, 
PROTO64 external,InitializeSecurityContextA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitializeSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MakeSignature, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryContextAttributesA, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryContextAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryCredentialsAttributesA, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryCredentialsAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,QuerySecurityContextToken, :QWORD,:QWORD
PROTO64 external,QuerySecurityPackageInfoA, :QWORD,:QWORD
PROTO64 external,QuerySecurityPackageInfoW, :QWORD,:QWORD
PROTO64 external,RevertSecurityContext, :QWORD
PROTO64 external,SealMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UnsealMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerifySignature, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file security.inc
echo -----------------------------------------
ENDIF

