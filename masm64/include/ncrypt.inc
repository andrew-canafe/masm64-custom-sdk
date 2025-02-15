IFNDEF NCRYPT_INC
NCRYPT_INC equ <1>

PROTO64 external,BCryptAddContextFunction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptCloseAlgorithmProvider, :QWORD,:QWORD
PROTO64 external,BCryptConfigureContext, :QWORD,:QWORD,:QWORD
PROTO64 external,BCryptConfigureContextFunction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BCryptCreateContext, :QWORD,:QWORD,:QWORD
PROTO64 external,BCryptCreateHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
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
PROTO64 external,GetIsolationServerInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,GetKeyStorageInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,GetSChannelInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,NCryptCloseProtectionDescriptor, :QWORD
PROTO64 external,NCryptCreateClaim, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptCreatePersistedKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptCreateProtectionDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,NCryptDecrypt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptDeleteKey, :QWORD,:QWORD
PROTO64 external,NCryptDeriveKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptEncrypt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptEnumAlgorithms, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptEnumKeys, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptEnumStorageProviders, :QWORD,:QWORD,:QWORD
PROTO64 external,NCryptExportKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptFinalizeKey, :QWORD,:QWORD
PROTO64 external,NCryptFreeBuffer, :QWORD
PROTO64 external,NCryptFreeObject, :QWORD
PROTO64 external,NCryptGetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptGetProtectionDescriptorInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptImportKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptIsAlgSupported, :QWORD,:QWORD,:QWORD
PROTO64 external,NCryptIsKeyHandle, :QWORD
PROTO64 external,NCryptKeyDerivation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptNotifyChangeKey, :QWORD,:QWORD,:QWORD
PROTO64 external,NCryptOpenKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptOpenStorageProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,NCryptProtectSecret, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptQueryProtectionDescriptorName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptRegisterProtectionDescriptorName, :QWORD,:QWORD,:QWORD
PROTO64 external,NCryptSecretAgreement, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptSetAuditingInterface, :QWORD
PROTO64 external,NCryptSetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptSignHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptStreamClose, :QWORD
PROTO64 external,NCryptStreamOpenToProtect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptStreamOpenToUnprotect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptStreamOpenToUnprotectEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptStreamUpdate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptTranslateHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptUnprotectSecret, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptVerifyClaim, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NCryptVerifySignature, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslChangeNotify, :QWORD,:QWORD
PROTO64 external,SslComputeClientAuthHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslComputeEapKeyBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslComputeFinishedHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslComputeSessionHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslCreateClientAuthHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslCreateEphemeralKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslCreateHandshakeHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslDecrementProviderReferenceCount, :QWORD
PROTO64 external,SslDecryptPacket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslEncryptPacket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslEnumCipherSuites, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslEnumEccCurves, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslEnumProtocolProviders, :QWORD,:QWORD,:QWORD
PROTO64 external,SslExportKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslExportKeyingMaterial, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslFreeBuffer, :QWORD
PROTO64 external,SslFreeObject, :QWORD,:QWORD
PROTO64 external,SslGenerateMasterKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslGeneratePreMasterKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslGenerateSessionKeys, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslGetCipherSuitePRFHashAlgorithm, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslGetKeyProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslGetProviderProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslHashHandshake, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslImportKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslImportMasterKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslIncrementProviderReferenceCount, :QWORD
PROTO64 external,SslLookupCipherLengths, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslLookupCipherSuiteInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslOpenPrivateKey, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslOpenProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,SslSignHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SslVerifySignature, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ncrypt.inc
echo -----------------------------------------
ENDIF

