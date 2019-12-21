IFNDEF SAMSRV_INC
SAMSRV_INC equ <1>

PROTO64 external,RtlDeleteElementGenericTable2, :QWORD,:QWORD
PROTO64 external,RtlInitializeGenericTable2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlInsertElementGenericTable2, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlLookupElementGenericTable2, :QWORD,:QWORD
PROTO64 external,SAM_MIDL_user_allocate, :QWORD
PROTO64 external,SAM_MIDL_user_free, :QWORD
PROTO64 external,SamDsExtAlloc, :QWORD
PROTO64 external,SamDsExtFree, :QWORD
PROTO64 external,SamIAccountRestrictions, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIAddDSNameToAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIChangePasswordForeignUser, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIClaimIsValid, :QWORD
PROTO64 external,SamIConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIConvertSecurityAttributesToClaimsBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,SamICopyCurrentDomainAccountSettings, :QWORD
PROTO64 external,SamICreateKrbTgt, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIDecodeClaimsBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIDecodeClaimsBlobIntoClaimsSet, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIDecodeClaimsBlobToAuthz, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIDemote, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIDemoteUndo, 
PROTO64 external,SamIDoFSMORoleChange, :QWORD
PROTO64 external,SamIFreeAuthzSecurityAttributesInfo, :QWORD
PROTO64 external,SamIFreeClaimsBlob, :QWORD
PROTO64 external,SamIFreeDecodedClaimsSet, :QWORD,:QWORD
PROTO64 external,SamIFreeLookupNamesInfo, :QWORD
PROTO64 external,SamIFreeLookupSidsInfo, :QWORD
PROTO64 external,SamIFreeOidList, :QWORD
PROTO64 external,SamIFreeRealmList, :QWORD
PROTO64 external,SamIFreeSecurityAttributesInfo, :QWORD
PROTO64 external,SamIFreeSidAndAttributesList, :QWORD
PROTO64 external,SamIFreeSidArray, :QWORD
PROTO64 external,SamIFreeVoid, :QWORD
PROTO64 external,SamIFree_SAMPR_DISPLAY_INFO_BUFFER, :QWORD,:QWORD
PROTO64 external,SamIFree_SAMPR_DOMAIN_INFO_BUFFER, :QWORD,:QWORD
PROTO64 external,SamIFree_SAMPR_ENUMERATION_BUFFER, :QWORD
PROTO64 external,SamIFree_SAMPR_GET_GROUPS_BUFFER, :QWORD
PROTO64 external,SamIFree_SAMPR_RETURNED_USTRING_ARRAY, :QWORD
PROTO64 external,SamIFree_SAMPR_ULONG_ARRAY, :QWORD
PROTO64 external,SamIFree_SAMPR_USER_INFO_BUFFER, :QWORD,:QWORD
PROTO64 external,SamIFree_UserInternal6Information, :QWORD
PROTO64 external,SamIGetAliasMembership, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetConfigurationOidList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetDefaultAdministratorName, :QWORD,:QWORD
PROTO64 external,SamIGetResourceGroupMembershipsTransitive2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetResourceGroupMembershipsTransitive, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetUserLogonInformation2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetUserLogonInformation3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetUserLogonInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIGetUserLogonInformationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIHandleObjectUpdate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIImpersonateNullSession, 
PROTO64 external,SamIInitialize, 
PROTO64 external,SamIIsDownlevelDcUpgrade, 
PROTO64 external,SamIIsExtendedSidMode, :QWORD
PROTO64 external,SamIIsRebootAfterPromotion, 
PROTO64 external,SamIIsSetupInProgress, :QWORD
PROTO64 external,SamILoadDownlevelDatabase, :QWORD
PROTO64 external,SamILookupNamesBySid, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamILookupNamesInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamILookupSidsByName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamILoopbackConnect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIMixedDomain2, :QWORD,:QWORD
PROTO64 external,SamIMixedDomain, :QWORD
PROTO64 external,SamINT4UpgradeInProgress, 
PROTO64 external,SamINetLogonPing, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamINotifyRoleChange, :QWORD,:QWORD
PROTO64 external,SamIOpenUserByAlternateId, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIPromote, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIPromoteUndo, 
PROTO64 external,SamIPurgeSecrets, :QWORD
PROTO64 external,SamIQueryAccountSecretsCachability, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIQueryCapabilities, 
PROTO64 external,SamIQueryRealmList, :QWORD,:QWORD
PROTO64 external,SamIQueryServerRole2, :QWORD,:QWORD
PROTO64 external,SamIQueryServerRole, :QWORD,:QWORD
PROTO64 external,SamIRemoveDSNameFromAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIReplaceDownlevelDatabase, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIReplicateAccountData, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIResetBadPwdCountOnPdc, :QWORD
PROTO64 external,SamIRetrieveMultiplePrimaryCredentials, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIRetrieveNGCKeyCredential, :QWORD,:QWORD
PROTO64 external,SamIRetrievePrimaryCredentials, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIRevertNullSession, 
PROTO64 external,SamIScorePassword, :QWORD,:QWORD
PROTO64 external,SamISetAuditingInformation, :QWORD
PROTO64 external,SamISetMachinePassword, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamISetPasswordForeignUser2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamISetPasswordForeignUser3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamISetPasswordInfoOnDc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIStorePrimaryCredentials, :QWORD,:QWORD
PROTO64 external,SamITransformClaims, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamIUPNFromUserHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,SamIUnLoadDownlevelDatabase, :QWORD
PROTO64 external,SamIUninitialize, 
PROTO64 external,SamIUpdateLogonStatistics, :QWORD,:QWORD
PROTO64 external,SamIValidateAccountName, :QWORD,:QWORD
PROTO64 external,SamIValidateNewAccountName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAccountControlToFlags, :QWORD
PROTO64 external,SampAcquireReadLock, 
PROTO64 external,SampAcquireSamLockExclusive, 
PROTO64 external,SampAcquireWriteLock, :QWORD
PROTO64 external,SampAddAccountToGroupMembers, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAddAccountsAndApplyMemberships, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAddDeltaTime, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAddNonLocalDomainRelativeMemberships, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAddSameDomainMemberToGlobalOrUniversalGroup, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAddUserToGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SampAlInvalidateAliasInformation, :QWORD
PROTO64 external,SampAllocateNextCurrentRidFromIndex, :QWORD
PROTO64 external,SampApplyDomainUpdatesForAllDomains, :QWORD,:QWORD
PROTO64 external,SampAssignPrimaryGroup, :QWORD,:QWORD
PROTO64 external,SampAuditAccountEnableDisableChange, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAuditAccountNameChange, :QWORD,:QWORD,:QWORD
PROTO64 external,SampAuditAnyEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAuditGroupTypeChange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampAuditSidHistory, :QWORD,:QWORD
PROTO64 external,SampBuildDsNameFromSid, :QWORD,:QWORD
PROTO64 external,SampBuildSamProtection, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampCalculateLmAndNtOwfPasswords, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampChangeAliasAccountName, :QWORD,:QWORD,:QWORD
PROTO64 external,SampChangeGroupAccountName, :QWORD,:QWORD,:QWORD
PROTO64 external,SampChangeUserAccountName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampCheckForAccountLockout, :QWORD,:QWORD,:QWORD
PROTO64 external,SampCheckGroupTypeBits, :QWORD,:QWORD
PROTO64 external,SampCheckSidType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampCommitBufferedWrites, :QWORD
PROTO64 external,SampCompareDisplayStrings, :QWORD,:QWORD,:QWORD
PROTO64 external,SampComputePasswordExpired, :QWORD,:QWORD
PROTO64 external,SampConnect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampConvertUiListToApiList, :QWORD,:QWORD,:QWORD
PROTO64 external,SampCreateAccountContext2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampCreateAliasInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampCreateContextEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampCreateDefaultUPN, :QWORD,:QWORD,:QWORD
PROTO64 external,SampCreateFullSid, :QWORD,:QWORD,:QWORD
PROTO64 external,SampCreateGroupInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampCreateUserInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampCurrentThreadOwnsLock, 
PROTO64 external,SampDeReferenceContext, :QWORD,:QWORD
PROTO64 external,SampDecrementActiveThreads, 
PROTO64 external,SampDecryptCredentialData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDeleteContext, :QWORD
PROTO64 external,SampDeleteDsDirsToDeleteKey, 
PROTO64 external,SampDeleteKeyForPostBootPromote, 
PROTO64 external,SampDeltaChangeNotify, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDsChangePasswordUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SampDsConvertReadAttrBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDsGetPrimaryDomainStart, 
PROTO64 external,SampDsInitializeSingleDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDsIsRunning, 
PROTO64 external,SampDsMakeAttrBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDsSetBuiltinDomainPolicy, :QWORD
PROTO64 external,SampDsSetDomainPolicy, :QWORD,:QWORD
PROTO64 external,SampDsSetPasswordUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDsUpdateContextAttributes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampDuplicateGroupInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SampDuplicateMachineInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SampDuplicateOemGroupInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SampDuplicateOemUserInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SampDuplicateUnicodeString, :QWORD,:QWORD
PROTO64 external,SampDuplicateUserInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SampEncryptCredentialData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampExamineSid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampExtendDefinedDomains, :QWORD
PROTO64 external,SampFlagsToAccountControl, :QWORD,:QWORD
PROTO64 external,SampFreeGroupInfo, :QWORD
PROTO64 external,SampFreeMachineInfo, :QWORD
PROTO64 external,SampFreeOemGroupInfo, :QWORD
PROTO64 external,SampFreeOemUserInfo, :QWORD
PROTO64 external,SampFreeUnicodeString, :QWORD
PROTO64 external,SampFreeUserInfo, :QWORD
PROTO64 external,SampGenerateRandomPassword, :QWORD,:QWORD
PROTO64 external,SampGetAccessAttribute, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetAccountDomainInfo, :QWORD,:QWORD
PROTO64 external,SampGetBehaviorVersion, :QWORD
PROTO64 external,SampGetCurrentOwnerAndPrimaryGroup, :QWORD,:QWORD
PROTO64 external,SampGetDisableOutboundRSO, 
PROTO64 external,SampGetDisableRSOOnPDCForward, 
PROTO64 external,SampGetDisableResetBadPwdCountForward, 
PROTO64 external,SampGetDisableSingleObjectRepl, 
PROTO64 external,SampGetDnsDomainNameFromIndex, :QWORD
PROTO64 external,SampGetDomainContextFromIndex, :QWORD
PROTO64 external,SampGetDomainObjectFromAccountContext, :QWORD
PROTO64 external,SampGetDomainObjectFromIndex, :QWORD
PROTO64 external,SampGetDomainServerRoleFromIndex, :QWORD
PROTO64 external,SampGetDomainSidFromAccountContext, :QWORD
PROTO64 external,SampGetDomainSidFromIndex, :QWORD
PROTO64 external,SampGetDomainSidListForSam, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetDomainUpgradeTasks, :QWORD,:QWORD
PROTO64 external,SampGetDownLevelDomainControllersPresent, :QWORD
PROTO64 external,SampGetExtendedAttribute, :QWORD,:QWORD,:QWORD
PROTO64 external,SampGetExternalNameFromIndex, :QWORD
PROTO64 external,SampGetFixedAttributes, :QWORD,:QWORD,:QWORD
PROTO64 external,SampGetHasNeverTime, 
PROTO64 external,SampGetIgnoreGCFailures, 
PROTO64 external,SampGetLogLevel, 
PROTO64 external,SampGetNT4UpgradeInProgress, 
PROTO64 external,SampGetNewAccountSecurityNt4, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetNextUnmodifiedRidFromIndex, :QWORD
PROTO64 external,SampGetNoGcLogonEnforceKerberosIpCheck, 
PROTO64 external,SampGetNoGcLogonEnforceNTLMCheck, 
PROTO64 external,SampGetObjectSD, :QWORD,:QWORD,:QWORD
PROTO64 external,SampGetObjectTypeNameFromIndex, :QWORD
PROTO64 external,SampGetPasswordMustChangeWithUF_UAC, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetReverseMembershipTransitive, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetSamSubsystemName, 
PROTO64 external,SampGetSerialNumberDomain2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetServerObjectName, 
PROTO64 external,SampGetSidArrayAttribute, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetSidAttribute, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetSuccessAccountAuditingEnabled, 
PROTO64 external,SampGetUlongArrayAttribute, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetUnicodeStringAttribute, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetUserAccountControlComputed, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampGetUserAccountSettings, :QWORD,:QWORD
PROTO64 external,SampGetWillNeverTime, 
PROTO64 external,SampImpersonateClient, :QWORD
PROTO64 external,SampIncreaseBadPwdCountLoopback, :QWORD
PROTO64 external,SampIncrementActiveThreads, 
PROTO64 external,SampIncrementNetlogonChangeLogSerialNumber, :QWORD
PROTO64 external,SampInvalidateDomainCache, 
PROTO64 external,SampIsAccountBuiltIn, :QWORD
PROTO64 external,SampIsAuditingEnabled, :QWORD,:QWORD
PROTO64 external,SampIsBuiltinDomain, :QWORD
PROTO64 external,SampIsDomainHosted, :QWORD
PROTO64 external,SampIsServiceRunning, 
PROTO64 external,SampIsSetupInProgress, :QWORD
PROTO64 external,SampLookupContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampMarkPerAttributeInvalidFromWhichFields, :QWORD,:QWORD
PROTO64 external,SampNeedUserAccountSettingsDuringQuery, :QWORD,:QWORD,:QWORD
PROTO64 external,SampNetLogonNotificationRequired, :QWORD,:QWORD
PROTO64 external,SampNotifyAuditChange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampNotifyReplicatedInChange, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampPasswordChangeNotify, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampPasswordChangeNotifyWorker, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampPositionOfHighestBit, :QWORD
PROTO64 external,SampQueryCapabilities, :QWORD,:QWORD
PROTO64 external,SampQueryInformationUserInternal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampReadExtendedAttributes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampRecordSystemSchemaVerisonInRegistry, 
PROTO64 external,SampReferenceContext, :QWORD
PROTO64 external,SampRegObjToDsObj, :QWORD,:QWORD
PROTO64 external,SampReleaseReadLock, 
PROTO64 external,SampReleaseSamLockExclusive, 
PROTO64 external,SampReleaseWriteLock, :QWORD
PROTO64 external,SampRemoveAccountFromGroupMembers, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampRemoveSameDomainMemberFromGlobalOrUniversalGroup, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampRemoveUserFromGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SampRenameKrbtgtAccount, 
PROTO64 external,SampReplaceUserLogonHours, :QWORD,:QWORD
PROTO64 external,SampReplaceUserV1aFixed, :QWORD,:QWORD
PROTO64 external,SampRetrieveGroupV1Fixed, :QWORD,:QWORD
PROTO64 external,SampRetrieveMultipleCredentials, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampRetrieveUserPasswords, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampRetrieveUserV1aFixed, :QWORD,:QWORD
PROTO64 external,SampRevertToSelf, :QWORD
PROTO64 external,SampRtlWellKnownPrivilegeCheck, :QWORD,:QWORD,:QWORD
PROTO64 external,SampSetAccessAttribute, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampSetAdminPassword, :QWORD
PROTO64 external,SampSetAttributeAccess, :QWORD,:QWORD,:QWORD
PROTO64 external,SampSetComputerObjectDsName, :QWORD
PROTO64 external,SampSetDSRMPasswordWorker, :QWORD,:QWORD
PROTO64 external,SampSetExtendedAttributeAccess, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampSetFixedAttributes, :QWORD,:QWORD
PROTO64 external,SampSetGlobalDsSids, :QWORD,:QWORD,:QWORD
PROTO64 external,SampSetPassword, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampSetPasswordInfoOnPdcByHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,SampSetPasswordInfoOnPdcByIndex, :QWORD,:QWORD,:QWORD
PROTO64 external,SampSetSerialNumberDomain2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampSetTransactionDomain, :QWORD
PROTO64 external,SampSetTransactionWithinDomain, :QWORD
PROTO64 external,SampSetUnicodeStringAttribute, :QWORD,:QWORD,:QWORD
PROTO64 external,SampSetUserAccountControl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampSplitSid, :QWORD,:QWORD,:QWORD
PROTO64 external,SampStoreObjectAttributes, :QWORD,:QWORD
PROTO64 external,SampStringFromGuid, :QWORD,:QWORD
PROTO64 external,SampTraceEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,SampUpdateAccountDisabledFlag, :QWORD,:QWORD
PROTO64 external,SampUpdateComputedUserAccountControlBits, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampUpdateMixedModeAndFindDomain, :QWORD,:QWORD
PROTO64 external,SampUpdatePerformanceCounters, :QWORD,:QWORD,:QWORD
PROTO64 external,SampUpgradeUserParmsActual, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampUsingDsData, 
PROTO64 external,SampValidateDomainCacheCallback, :QWORD
PROTO64 external,SampValidateDomainControllerCreation, :QWORD
PROTO64 external,SampValidatePwdSettingAttempt, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SampValidateRegAttributes, :QWORD,:QWORD
PROTO64 external,SampWriteGroupType, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrAddMemberToAlias, :QWORD,:QWORD
PROTO64 external,SamrAddMemberToGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrCloseHandle, :QWORD
PROTO64 external,SamrCreateUser2InDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrCreateUserInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrDeleteAlias, :QWORD
PROTO64 external,SamrDeleteGroup, :QWORD
PROTO64 external,SamrDeleteUser, :QWORD
PROTO64 external,SamrEnumerateUsersInDomain2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrEnumerateUsersInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrGetAliasMembership, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrGetGroupsForUser, :QWORD,:QWORD
PROTO64 external,SamrLookupIdsInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrLookupNamesInDomain2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrLookupNamesInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrOpenAlias, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrOpenDomain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrOpenGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrOpenUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryDisplayInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryInformationDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryInformationUser2, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrQueryInformationUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrQuerySecurityObject, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrRemoveMemberFromAlias, :QWORD,:QWORD
PROTO64 external,SamrRemoveMemberFromGroup, :QWORD,:QWORD
PROTO64 external,SamrRidToSid, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetInformationAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetInformationGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetInformationUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrSetSecurityObject, :QWORD,:QWORD,:QWORD
PROTO64 external,SamrValidatePassword, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file samsrv.inc
echo -----------------------------------------
ENDIF

