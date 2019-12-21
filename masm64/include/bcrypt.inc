IFNDEF BCRYPT_INC
BCRYPT_INC equ <1>

PROTO64 external,BCryptAddContextFunction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptCloseAlgorithmProvider, :QWORD,:QWORD
PROTO64 external,BCryptConfigureContext, :QWORD,:QWORD,:QWORD
PROTO64 external,BCryptConfigureContextFunction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptCreateContext, :QWORD,:QWORD,:QWORD
PROTO64 external,BCryptCreateHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptCreateMultiHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptDecrypt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptDeleteContext, :QWORD,:QWORD
PROTO64 external,BCryptDeriveKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptDeriveKeyCapi, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptDeriveKeyPBKDF2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptDestroyHash, :QWORD
PROTO64 external,BCryptDestroyKey, :QWORD
PROTO64 external,BCryptDestroySecret, :QWORD
PROTO64 external,BCryptDuplicateHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptDuplicateKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptEncrypt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptEnumAlgorithms, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptEnumContextFunctionProviders, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptEnumContextFunctions, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptEnumContexts, :QWORD,:QWORD,:QWORD
PROTO64 external,BCryptEnumProviders, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptEnumRegisteredProviders, :QWORD,:QWORD
PROTO64 external,BCryptExportKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptFinalizeKeyPair, :QWORD,:QWORD
PROTO64 external,BCryptFinishHash, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptFreeBuffer, :QWORD
PROTO64 external,BCryptGenRandom, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptGenerateKeyPair, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptGenerateSymmetricKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptGetFipsAlgorithmMode, :QWORD
PROTO64 external,BCryptGetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptHashData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptImportKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptImportKeyPair, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptKeyDerivation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptOpenAlgorithmProvider, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptProcessMultiOperations, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptQueryContextConfiguration, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptQueryContextFunctionConfiguration, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptQueryContextFunctionProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptQueryProviderRegistration, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptRegisterConfigChangeNotify, :QWORD
PROTO64 external,BCryptRemoveContextFunction, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptResolveProviders, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptSecretAgreement, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptSetAuditingInterface, :QWORD
PROTO64 external,BCryptSetContextFunctionProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptSetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptSignHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptUnregisterConfigChangeNotify, :QWORD
PROTO64 external,BCryptVerifySignature, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bcrypt.inc
echo -----------------------------------------
ENDIF

