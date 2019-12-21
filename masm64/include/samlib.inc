IFNDEF SAMLIB_INC
SAMLIB_INC equ <1>

PROTO64 external,OnMachineUILanguageInit, :QWORD,:QWORD
PROTO64 external,SamAddMemberToAlias, :QWORD,:QWORD
PROTO64 external,SamAddMemberToGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamAddMultipleMembersToAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamChangePasswordUser2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamChangePasswordUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamCloseHandle, :QWORD
PROTO64 external,SamConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamConnectWithCreds, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamCreateAliasInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamCreateGroupInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamCreateUser2InDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamCreateUserInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamDeleteAlias, :QWORD
PROTO64 external,SamDeleteGroup, :QWORD
PROTO64 external,SamDeleteUser, :QWORD
PROTO64 external,SamEnumerateAliasesInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamEnumerateDomainsInSamServer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamEnumerateGroupsInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamEnumerateUsersInDomain2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamEnumerateUsersInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamFreeMemory, :QWORD
PROTO64 external,SamGetAliasMembership, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamGetCompatibilityMode, :QWORD,:QWORD
PROTO64 external,SamGetDisplayEnumerationIndex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamGetGroupsForUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamGetMembersInAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamGetMembersInGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamLookupDomainInSamServer, :QWORD,:QWORD,:QWORD
PROTO64 external,SamLookupIdsInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamLookupNamesInDomain2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamLookupNamesInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamOpenAlias, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamOpenDomain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamOpenGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamOpenUser, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamPerformGenericOperation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamQueryDisplayInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamQueryInformationAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamQueryInformationDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,SamQueryInformationGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamQueryInformationUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamQueryLocalizableAccountsInDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamQuerySecurityObject, :QWORD,:QWORD,:QWORD
PROTO64 external,SamRegisterObjectChangeNotification, :QWORD,:QWORD
PROTO64 external,SamRemoveMemberFromAlias, :QWORD,:QWORD
PROTO64 external,SamRemoveMemberFromForeignDomain, :QWORD,:QWORD
PROTO64 external,SamRemoveMemberFromGroup, :QWORD,:QWORD
PROTO64 external,SamRemoveMultipleMembersFromAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamRidToSid, :QWORD,:QWORD,:QWORD
PROTO64 external,SamSetInformationAlias, :QWORD,:QWORD,:QWORD
PROTO64 external,SamSetInformationDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,SamSetInformationGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamSetInformationUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamSetMemberAttributesOfGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,SamSetSecurityObject, :QWORD,:QWORD,:QWORD
PROTO64 external,SamShutdownSamServer, :QWORD
PROTO64 external,SamTestPrivateFunctionsDomain, :QWORD
PROTO64 external,SamTestPrivateFunctionsUser, :QWORD
PROTO64 external,SamUnregisterObjectChangeNotification, :QWORD,:QWORD
PROTO64 external,SamValidatePassword, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamiChangeKeys, 
PROTO64 external,SamiChangePasswordUser2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamiChangePasswordUser, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamiEncryptPasswords, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamiLmChangePasswordUser, :QWORD,:QWORD,:QWORD
PROTO64 external,SamiSetBootKeyInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SamiSetDSRMPassword, :QWORD,:QWORD,:QWORD
PROTO64 external,SamiSetDSRMPasswordOWF, :QWORD,:QWORD,:QWORD
PROTO64 external,SamiSyncDSRMPasswordFromAccount, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file samlib.inc
echo -----------------------------------------
ENDIF

