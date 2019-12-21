IFNDEF P2P_INC
P2P_INC equ <1>

PROTO64 external,PeerCollabAddContact, :QWORD,:QWORD
PROTO64 external,PeerCollabAsyncInviteContact, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerCollabAsyncInviteEndpoint, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerCollabCancelInvitation, :QWORD
PROTO64 external,PeerCollabCloseHandle, :QWORD
PROTO64 external,PeerCollabDeleteContact, :QWORD
PROTO64 external,PeerCollabDeleteEndpointData, :QWORD
PROTO64 external,PeerCollabDeleteObject, :QWORD
PROTO64 external,PeerCollabEnumApplicationRegistrationInfo, :QWORD,:QWORD
PROTO64 external,PeerCollabEnumApplications, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerCollabEnumContacts, :QWORD
PROTO64 external,PeerCollabEnumEndpoints, :QWORD,:QWORD
PROTO64 external,PeerCollabEnumObjects, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerCollabEnumPeopleNearMe, :QWORD
PROTO64 external,PeerCollabExportContact, :QWORD,:QWORD
PROTO64 external,PeerCollabGetAppLaunchInfo, :QWORD
PROTO64 external,PeerCollabGetApplicationRegistrationInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerCollabGetContact, :QWORD,:QWORD
PROTO64 external,PeerCollabGetEndpointName, :QWORD
PROTO64 external,PeerCollabGetEventData, :QWORD,:QWORD
PROTO64 external,PeerCollabGetInvitationResponse, :QWORD,:QWORD
PROTO64 external,PeerCollabGetPresenceInfo, :QWORD,:QWORD
PROTO64 external,PeerCollabGetSigninOptions, :QWORD
PROTO64 external,PeerCollabInviteContact, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerCollabInviteEndpoint, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerCollabParseContact, :QWORD,:QWORD
PROTO64 external,PeerCollabQueryContactData, :QWORD,:QWORD
PROTO64 external,PeerCollabRefreshEndpointData, :QWORD
PROTO64 external,PeerCollabRegisterApplication, :QWORD,:QWORD
PROTO64 external,PeerCollabRegisterEvent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerCollabSetEndpointName, :QWORD
PROTO64 external,PeerCollabSetObject, :QWORD
PROTO64 external,PeerCollabSetPresenceInfo, :QWORD
PROTO64 external,PeerCollabShutdown, 
PROTO64 external,PeerCollabSignin, :QWORD,:QWORD
PROTO64 external,PeerCollabSignout, :QWORD
PROTO64 external,PeerCollabStartup, :QWORD
PROTO64 external,PeerCollabSubscribeEndpointData, :QWORD
PROTO64 external,PeerCollabUnregisterApplication, :QWORD,:QWORD
PROTO64 external,PeerCollabUnregisterEvent, :QWORD
PROTO64 external,PeerCollabUnsubscribeEndpointData, :QWORD
PROTO64 external,PeerCollabUpdateContact, :QWORD
PROTO64 external,PeerCreatePeerName, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerEndEnumeration, :QWORD
PROTO64 external,PeerEnumGroups, :QWORD,:QWORD
PROTO64 external,PeerEnumIdentities, :QWORD
PROTO64 external,PeerFreeData, :QWORD
PROTO64 external,PeerGetItemCount, :QWORD,:QWORD
PROTO64 external,PeerGetNextItem, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupAddRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupClose, :QWORD
PROTO64 external,PeerGroupCloseDirectConnection, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupConnect, :QWORD
PROTO64 external,PeerGroupConnectByAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupCreate, :QWORD,:QWORD
PROTO64 external,PeerGroupCreateInvitation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupCreatePasswordInvitation, :QWORD,:QWORD
PROTO64 external,PeerGroupDelete, :QWORD,:QWORD
PROTO64 external,PeerGroupDeleteRecord, :QWORD,:QWORD
PROTO64 external,PeerGroupEnumConnections, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupEnumMembers, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupEnumRecords, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupExportConfig, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupExportDatabase, :QWORD,:QWORD
PROTO64 external,PeerGroupGetEventData, :QWORD,:QWORD
PROTO64 external,PeerGroupGetProperties, :QWORD,:QWORD
PROTO64 external,PeerGroupGetRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupGetStatus, :QWORD,:QWORD
PROTO64 external,PeerGroupImportConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupImportDatabase, :QWORD,:QWORD
PROTO64 external,PeerGroupIssueCredentials, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupJoin, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupOpen, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupOpenDirectConnection, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupParseInvitation, :QWORD,:QWORD
PROTO64 external,PeerGroupPasswordJoin, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupPeerTimeToUniversalTime, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupRegisterEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupResumePasswordAuthentication, :QWORD,:QWORD
PROTO64 external,PeerGroupSearchRecords, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupSendData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupSetProperties, :QWORD,:QWORD
PROTO64 external,PeerGroupShutdown, 
PROTO64 external,PeerGroupStartup, :QWORD,:QWORD
PROTO64 external,PeerGroupUniversalTimeToPeerTime, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerGroupUnregisterEvent, :QWORD
PROTO64 external,PeerGroupUpdateRecord, :QWORD,:QWORD
PROTO64 external,PeerHostNameToPeerName, :QWORD,:QWORD
PROTO64 external,PeerIdentityCreate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerIdentityDelete, :QWORD
PROTO64 external,PeerIdentityExport, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerIdentityGetCert, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerIdentityGetCryptKey, :QWORD,:QWORD
PROTO64 external,PeerIdentityGetDefault, :QWORD
PROTO64 external,PeerIdentityGetFriendlyName, :QWORD,:QWORD
PROTO64 external,PeerIdentityGetXML, :QWORD,:QWORD
PROTO64 external,PeerIdentityImport, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerIdentitySetFriendlyName, :QWORD,:QWORD
PROTO64 external,PeerNameToPeerHostName, :QWORD,:QWORD
PROTO64 external,PeerPnrpEndResolve, :QWORD
PROTO64 external,PeerPnrpGetCloudInfo, :QWORD,:QWORD
PROTO64 external,PeerPnrpGetEndpoint, :QWORD,:QWORD
PROTO64 external,PeerPnrpRegister, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerPnrpResolve, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerPnrpShutdown, 
PROTO64 external,PeerPnrpStartResolve, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeerPnrpStartup, :QWORD
PROTO64 external,PeerPnrpUnregister, :QWORD
PROTO64 external,PeerPnrpUpdateRegistration, :QWORD,:QWORD
PROTO64 external,PeerSSPAddCredentials, :QWORD,:QWORD,:QWORD
PROTO64 external,PeerSSPRemoveCredentials, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file p2p.inc
echo -----------------------------------------
ENDIF

