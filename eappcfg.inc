IFNDEF EAPPCFG_INC
EAPPCFG_INC equ <1>

PROTO64 external,EapHostPeerConfigBlob2Xml, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerConfigXml2Blob, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerCreateMethodConfiguration, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerCredentialsXml2Blob, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerFreeErrorMemory, :QWORD
PROTO64 external,EapHostPeerFreeMemory, :QWORD
PROTO64 external,EapHostPeerGetMethodProperties, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerGetMethods, :QWORD,:QWORD
PROTO64 external,EapHostPeerInvokeConfigUI, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerInvokeIdentityUI, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerInvokeInteractiveUI, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerQueryCredentialInputFields, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerQueryInteractiveUIInputFields, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerQueryUIBlobFromInteractiveUIInputFields, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EapHostPeerQueryUserBlobFromCredentialInputFields, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file eappcfg.inc
echo -----------------------------------------
ENDIF

