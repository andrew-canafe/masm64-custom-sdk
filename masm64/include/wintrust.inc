IFNDEF WINTRUST_INC
WINTRUST_INC equ <1>

PROTO64 external,AddPersonalTrustDBPages, :QWORD,:QWORD,:QWORD
PROTO64 external,CatalogCompactHashDatabase, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConfigCiFinalPolicy, :QWORD
PROTO64 external,CryptCATAdminAcquireContext2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAdminAcquireContext, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAdminAddCatalog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAdminCalcHashFromFileHandle2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAdminCalcHashFromFileHandle, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAdminEnumCatalogFromHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAdminPauseServiceForBackup, :QWORD,:QWORD
PROTO64 external,CryptCATAdminReleaseCatalogContext, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAdminReleaseContext, :QWORD,:QWORD
PROTO64 external,CryptCATAdminRemoveCatalog, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAdminResolveCatalogPath, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATAllocSortedMemberInfo, :QWORD,:QWORD
PROTO64 external,CryptCATCDFClose, :QWORD
PROTO64 external,CryptCATCDFEnumAttributes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATCDFEnumAttributesWithCDFTag, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATCDFEnumCatAttributes, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATCDFEnumMembers, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATCDFEnumMembersByCDFTag, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATCDFEnumMembersByCDFTagEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATCDFOpen, :QWORD,:QWORD
PROTO64 external,CryptCATCatalogInfoFromContext, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATClose, :QWORD
PROTO64 external,CryptCATEnumerateAttr, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATEnumerateCatAttr, :QWORD,:QWORD
PROTO64 external,CryptCATEnumerateMember, :QWORD,:QWORD
PROTO64 external,CryptCATFreeSortedMemberInfo, :QWORD,:QWORD
PROTO64 external,CryptCATGetAttrInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATGetCatAttrInfo, :QWORD,:QWORD
PROTO64 external,CryptCATGetMemberInfo, :QWORD,:QWORD
PROTO64 external,CryptCATHandleFromStore, :QWORD
PROTO64 external,CryptCATOpen, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATPersistStore, :QWORD
PROTO64 external,CryptCATPutAttrInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATPutCatAttrInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATPutMemberInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptCATStoreFromHandle, :QWORD
PROTO64 external,CryptSIPCreateIndirectData, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptSIPGetCaps, :QWORD,:QWORD
PROTO64 external,CryptSIPGetSealedDigest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptSIPGetSignedDataMsg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptSIPPutSignedDataMsg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptSIPRemoveSignedDataMsg, :QWORD,:QWORD
PROTO64 external,CryptSIPVerifyIndirectData, :QWORD,:QWORD
PROTO64 external,DriverCleanupPolicy, :QWORD
PROTO64 external,DriverFinalPolicy, :QWORD
PROTO64 external,DriverInitializePolicy, :QWORD
PROTO64 external,FindCertsByIssuer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HTTPSFinalProv, :QWORD
PROTO64 external,IsCatalogFile, :QWORD,:QWORD
PROTO64 external,MsCatConstructHashTag, :QWORD,:QWORD,:QWORD
PROTO64 external,MsCatFreeHashTag, :QWORD
PROTO64 external,OfficeCleanupPolicy, :QWORD
PROTO64 external,OfficeInitializePolicy, :QWORD
PROTO64 external,OpenPersonalTrustDBDialog, :QWORD
PROTO64 external,OpenPersonalTrustDBDialogEx, :QWORD,:QWORD,:QWORD
PROTO64 external,SoftpubAuthenticode, :QWORD
PROTO64 external,SoftpubCheckCert, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SoftpubCleanup, :QWORD
PROTO64 external,SoftpubDllRegisterServer, 
PROTO64 external,SoftpubDllUnregisterServer, 
PROTO64 external,SoftpubDumpStructure, :QWORD
PROTO64 external,SoftpubInitialize, :QWORD
PROTO64 external,SoftpubLoadMessage, :QWORD
PROTO64 external,SoftpubLoadSignature, :QWORD
PROTO64 external,TrustDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TrustFindIssuerCertificate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TrustFreeDecode, :QWORD,:QWORD
PROTO64 external,TrustIsCertificateSelfSigned, :QWORD,:QWORD,:QWORD
PROTO64 external,TrustOpenStores, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTHelperCertCheckValidSignature, :QWORD
PROTO64 external,WTHelperCertIsSelfSigned, :QWORD,:QWORD
PROTO64 external,WTHelperCheckCertUsage, :QWORD,:QWORD
PROTO64 external,WTHelperGetAgencyInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,WTHelperGetFileHandle, :QWORD
PROTO64 external,WTHelperGetFileHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTHelperGetFileName, :QWORD
PROTO64 external,WTHelperGetKnownUsages, :QWORD,:QWORD
PROTO64 external,WTHelperGetProvCertFromChain, :QWORD,:QWORD
PROTO64 external,WTHelperGetProvPrivateDataFromChain, :QWORD,:QWORD
PROTO64 external,WTHelperGetProvSignerFromChain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WTHelperIsChainedToMicrosoft, :QWORD,:QWORD,:QWORD
PROTO64 external,WTHelperIsChainedToMicrosoftFromStateData, :QWORD,:QWORD
PROTO64 external,WTHelperIsInRootStore, :QWORD,:QWORD
PROTO64 external,WTHelperOpenKnownStores, :QWORD
PROTO64 external,WTHelperProvDataFromStateData, :QWORD
PROTO64 external,WVTAsn1CatMemberInfo2Decode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1CatMemberInfo2Encode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1CatMemberInfoDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1CatMemberInfoEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1CatNameValueDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1CatNameValueEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1IntentToSealAttributeDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1IntentToSealAttributeEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SealingSignatureAttributeDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SealingSignatureAttributeEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SealingTimestampAttributeDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SealingTimestampAttributeEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcFinancialCriteriaInfoDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcFinancialCriteriaInfoEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcIndirectDataContentDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcIndirectDataContentEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcLinkDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcLinkEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcMinimalCriteriaInfoDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcMinimalCriteriaInfoEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcPeImageDataDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcPeImageDataEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcSigInfoDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcSigInfoEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcSpAgencyInfoDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcSpAgencyInfoEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcSpOpusInfoDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcSpOpusInfoEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcStatementTypeDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WVTAsn1SpcStatementTypeEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinVerifyTrust, :QWORD,:QWORD,:QWORD
PROTO64 external,WinVerifyTrustEx, :QWORD,:QWORD,:QWORD
PROTO64 external,WintrustAddActionID, :QWORD,:QWORD,:QWORD
PROTO64 external,WintrustAddDefaultForUsage, :QWORD,:QWORD
PROTO64 external,WintrustCertificateTrust, :QWORD
PROTO64 external,WintrustGetDefaultForUsage, :QWORD,:QWORD,:QWORD
PROTO64 external,WintrustGetRegPolicyFlags, :QWORD
PROTO64 external,WintrustLoadFunctionPointers, :QWORD,:QWORD
PROTO64 external,WintrustRemoveActionID, :QWORD
PROTO64 external,WintrustSetDefaultIncludePEPageHashes, :QWORD
PROTO64 external,WintrustSetRegPolicyFlags, :QWORD
PROTO64 external,mscat32DllRegisterServer, 
PROTO64 external,mscat32DllUnregisterServer, 
PROTO64 external,mssip32DllRegisterServer, 
PROTO64 external,mssip32DllUnregisterServer, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wintrust.inc
echo -----------------------------------------
ENDIF

