IFNDEF SECUR32_INC
SECUR32_INC equ <1>

PROTO64 external,AcceptSecurityContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AcquireCredentialsHandleA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AcquireCredentialsHandleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddCredentialsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddCredentialsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddSecurityPackageA, :QWORD,:QWORD
PROTO64 external,AddSecurityPackageW, :QWORD,:QWORD
PROTO64 external,ApplyControlToken, :QWORD,:QWORD
PROTO64 external,ChangeAccountPasswordA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ChangeAccountPasswordW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
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
PROTO64 external,GetComputerObjectNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetComputerObjectNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetSecurityUserInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,GetUserNameExA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetUserNameExW, :QWORD,:QWORD,:QWORD
PROTO64 external,ImpersonateSecurityContext, :QWORD
PROTO64 external,ImportSecurityContextA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImportSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitSecurityInterfaceA, 
PROTO64 external,InitSecurityInterfaceW, 
PROTO64 external,InitializeSecurityContextA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitializeSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaCallAuthenticationPackage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaConnectUntrusted, :QWORD
PROTO64 external,LsaDeregisterLogonProcess, :QWORD
PROTO64 external,LsaEnumerateLogonSessions, :QWORD,:QWORD
PROTO64 external,LsaFreeReturnBuffer, :QWORD
PROTO64 external,LsaGetLogonSessionData, :QWORD,:QWORD
PROTO64 external,LsaLogonUser, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaLookupAuthenticationPackage, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaRegisterLogonProcess, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaRegisterPolicyChangeNotification, :QWORD,:QWORD
PROTO64 external,LsaUnregisterPolicyChangeNotification, :QWORD,:QWORD
PROTO64 external,MakeSignature, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryContextAttributesA, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryContextAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryCredentialsAttributesA, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryCredentialsAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,QuerySecurityContextToken, :QWORD,:QWORD
PROTO64 external,QuerySecurityPackageInfoA, :QWORD,:QWORD
PROTO64 external,QuerySecurityPackageInfoW, :QWORD,:QWORD
PROTO64 external,RevertSecurityContext, :QWORD
PROTO64 external,SaslAcceptSecurityContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SaslEnumerateProfilesA, :QWORD,:QWORD
PROTO64 external,SaslEnumerateProfilesW, :QWORD,:QWORD
PROTO64 external,SaslGetContextOption, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SaslGetProfilePackageA, :QWORD,:QWORD
PROTO64 external,SaslGetProfilePackageW, :QWORD,:QWORD
PROTO64 external,SaslIdentifyPackageA, :QWORD,:QWORD
PROTO64 external,SaslIdentifyPackageW, :QWORD,:QWORD
PROTO64 external,SaslInitializeSecurityContextA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SaslInitializeSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SaslSetContextOption, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SealMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SeciAllocateAndSetCallFlags, :QWORD,:QWORD
PROTO64 external,SeciAllocateAndSetIPAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,SeciFreeCallContext, 
PROTO64 external,SetContextAttributesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetContextAttributesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetCredentialsAttributesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetCredentialsAttributesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SspiCompareAuthIdentities, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SspiCopyAuthIdentity, :QWORD,:QWORD
PROTO64 external,SspiDecryptAuthIdentity, :QWORD
PROTO64 external,SspiEncodeAuthIdentityAsStrings, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SspiEncodeStringsAsAuthIdentity, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SspiEncryptAuthIdentity, :QWORD
PROTO64 external,SspiExcludePackage, :QWORD,:QWORD,:QWORD
PROTO64 external,SspiFreeAuthIdentity, :QWORD
PROTO64 external,SspiGetTargetHostName, :QWORD,:QWORD
PROTO64 external,SspiIsAuthIdentityEncrypted, :QWORD
PROTO64 external,SspiLocalFree, :QWORD
PROTO64 external,SspiMarshalAuthIdentity, :QWORD,:QWORD,:QWORD
PROTO64 external,SspiPrepareForCredRead, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SspiPrepareForCredWrite, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SspiUnmarshalAuthIdentity, :QWORD,:QWORD,:QWORD
PROTO64 external,SspiValidateAuthIdentity, :QWORD
PROTO64 external,SspiZeroAuthIdentity, :QWORD
PROTO64 external,TranslateNameA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TranslateNameW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UnsealMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerifySignature, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file secur32.inc
echo -----------------------------------------
ENDIF

