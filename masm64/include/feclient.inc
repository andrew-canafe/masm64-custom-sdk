IFNDEF FECLIENT_INC
FECLIENT_INC equ <1>

PROTO64 external,EdpCredentialCreate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpCredentialDelete, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpCredentialExists, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpCredentialQuery, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpDplPolicyEnabledForUser, :QWORD,:QWORD
PROTO64 external,EdpDplUpgradePinInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpDplUpgradeVerifyUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpDplUserCredentialsSet, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpDplUserUnlockComplete, :QWORD,:QWORD,:QWORD
PROTO64 external,EdpDplUserUnlockStart, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpFree, :QWORD
PROTO64 external,EdpGetCredServiceState, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EdpQueryDplEnforcedPolicyOwnerIds, :QWORD,:QWORD
PROTO64 external,EdpQueryRevokedPolicyOwnerIds, :QWORD,:QWORD
PROTO64 external,EfsClientCloseFileRaw, :QWORD
PROTO64 external,EfsClientDecryptFile, :QWORD,:QWORD
PROTO64 external,EfsClientDuplicateEncryptionInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EfsClientEncryptFileEx, :QWORD,:QWORD
PROTO64 external,EfsClientFileEncryptionStatus, :QWORD,:QWORD
PROTO64 external,EfsClientFreeProtectorList, :QWORD
PROTO64 external,EfsClientGetEncryptedFileVersion, :QWORD,:QWORD
PROTO64 external,EfsClientOpenFileRaw, :QWORD,:QWORD,:QWORD
PROTO64 external,EfsClientQueryProtectors, :QWORD,:QWORD
PROTO64 external,EfsClientReadFileRaw, :QWORD,:QWORD,:QWORD
PROTO64 external,EfsClientWriteFileRaw, :QWORD,:QWORD,:QWORD
PROTO64 external,EfsClientWriteFileWithHeaderRaw, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FeClientInitialize, :QWORD,:QWORD
PROTO64 external,GetLockSessionUnwrappedKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetLockSessionWrappedKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file feclient.inc
echo -----------------------------------------
ENDIF

