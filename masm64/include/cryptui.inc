IFNDEF CRYPTUI_INC
CRYPTUI_INC equ <1>

PROTO64 external,ACUIProviderInvokeUI, :QWORD
PROTO64 external,CertSelectionGetSerializedBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,CommonInit, 
PROTO64 external,CryptDllProtectPrompt, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIDlgCertMgr, :QWORD
PROTO64 external,CryptUIDlgFreeCAContext, :QWORD
PROTO64 external,CryptUIDlgFreePolicyServerContext, :QWORD
PROTO64 external,CryptUIDlgSelectCA, :QWORD
PROTO64 external,CryptUIDlgSelectCertificateA, :QWORD
PROTO64 external,CryptUIDlgSelectCertificateFromStore, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIDlgSelectCertificateW, :QWORD
PROTO64 external,CryptUIDlgSelectPolicyServer, :QWORD
PROTO64 external,CryptUIDlgSelectStoreA, :QWORD
PROTO64 external,CryptUIDlgSelectStoreW, :QWORD
PROTO64 external,CryptUIDlgViewCRLA, :QWORD
PROTO64 external,CryptUIDlgViewCRLW, :QWORD
PROTO64 external,CryptUIDlgViewCTLA, :QWORD
PROTO64 external,CryptUIDlgViewCTLW, :QWORD
PROTO64 external,CryptUIDlgViewCertificateA, :QWORD,:QWORD
PROTO64 external,CryptUIDlgViewCertificatePropertiesA, :QWORD,:QWORD
PROTO64 external,CryptUIDlgViewCertificatePropertiesW, :QWORD,:QWORD
PROTO64 external,CryptUIDlgViewCertificateW, :QWORD,:QWORD
PROTO64 external,CryptUIDlgViewContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIDlgViewSignerInfoA, :QWORD
PROTO64 external,CryptUIDlgViewSignerInfoW, :QWORD
PROTO64 external,CryptUIFreeCertificatePropertiesPagesA, :QWORD,:QWORD
PROTO64 external,CryptUIFreeCertificatePropertiesPagesW, :QWORD,:QWORD
PROTO64 external,CryptUIFreeViewSignaturesPagesA, :QWORD,:QWORD
PROTO64 external,CryptUIFreeViewSignaturesPagesW, :QWORD,:QWORD
PROTO64 external,CryptUIGetCertificatePropertiesPagesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIGetCertificatePropertiesPagesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIGetViewSignaturesPagesA, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIGetViewSignaturesPagesW, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIStartCertMgr, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIViewExpiringCerts, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizBuildCTL, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizDigitalSign, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizExport, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizFreeDigitalSignContext, :QWORD
PROTO64 external,CryptUIWizImport, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUIWizImportInternal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsWizardExtensionAvailable, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cryptui.inc
echo -----------------------------------------
ENDIF

