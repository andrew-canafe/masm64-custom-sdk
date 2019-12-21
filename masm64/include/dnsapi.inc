IFNDEF DNSAPI_INC
DNSAPI_INC equ <1>

PROTO64 external,AdaptiveTimeout_ClearInterfaceSpecificConfiguration, 
PROTO64 external,AdaptiveTimeout_ResetAdaptiveTimeout, 
PROTO64 external,AddRefQueryBlobEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BreakRecordsIntoBlob, :QWORD,:QWORD,:QWORD
PROTO64 external,Coalesce_UpdateNetVersion, 
PROTO64 external,CombineRecordsInBlob, :QWORD,:QWORD
PROTO64 external,DeRefQueryBlobEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DelaySortDAServerlist, 
PROTO64 external,DnsAcquireContextHandle_A, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsAcquireContextHandle_W, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsAllocateRecord, :QWORD
PROTO64 external,DnsApiAlloc, :QWORD
PROTO64 external,DnsApiAllocZero, :QWORD
PROTO64 external,DnsApiFree, :QWORD
PROTO64 external,DnsApiHeapReset, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsApiRealloc, :QWORD,:QWORD
PROTO64 external,DnsApiSetDebugGlobals, :QWORD
PROTO64 external,DnsAsyncRegisterHostAddrs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsAsyncRegisterInit, :QWORD
PROTO64 external,DnsAsyncRegisterTerm, 
PROTO64 external,DnsCancelQuery, :QWORD
PROTO64 external,DnsCopyStringEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsCreateReverseNameStringForIpAddress, :QWORD
PROTO64 external,DnsCreateStandardDnsNameCopy, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsCreateStringCopy, :QWORD,:QWORD
PROTO64 external,DnsDeRegisterLocal, :QWORD
PROTO64 external,DnsDhcpRegisterAddrs, :QWORD
PROTO64 external,DnsDhcpRegisterHostAddrs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsDhcpRegisterInit, 
PROTO64 external,DnsDhcpRegisterTerm, 
PROTO64 external,DnsDhcpRemoveRegistrations, 
PROTO64 external,DnsDhcpSrvRegisterHostAddr, :QWORD
PROTO64 external,DnsDhcpSrvRegisterHostAddrEx, :QWORD
PROTO64 external,DnsDhcpSrvRegisterHostName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsDhcpSrvRegisterHostNameEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsDhcpSrvRegisterInit, :QWORD,:QWORD
PROTO64 external,DnsDhcpSrvRegisterInitialize, :QWORD
PROTO64 external,DnsDhcpSrvRegisterTerm, 
PROTO64 external,DnsDisableIdnEncoding, :QWORD,:QWORD
PROTO64 external,DnsDowncaseDnsNameLabel, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsExtractRecordsFromMessage_UTF8, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsExtractRecordsFromMessage_W, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsFindAuthoritativeZone, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsFlushResolverCache, 
PROTO64 external,DnsFlushResolverCacheEntry_A, :QWORD
PROTO64 external,DnsFlushResolverCacheEntry_UTF8, :QWORD
PROTO64 external,DnsFlushResolverCacheEntry_W, :QWORD
PROTO64 external,DnsFree, :QWORD,:QWORD
PROTO64 external,DnsFreeConfigStructure, :QWORD,:QWORD
PROTO64 external,DnsFreePolicyConfig, :QWORD
PROTO64 external,DnsFreeProxyName, :QWORD
PROTO64 external,DnsGetBufferLengthForStringCopy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsGetCacheDataTable, :QWORD
PROTO64 external,DnsGetDnsServerList, :QWORD
PROTO64 external,DnsGetLastFailedUpdateInfo, :QWORD
PROTO64 external,DnsGetPolicyTableInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsGetPolicyTableInfoPrivate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsGetPrimaryDomainName_A, 
PROTO64 external,DnsGetProxyInfoPrivate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsGetProxyInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsGetQueryRetryTimeouts, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsIpv6AddressToString, :QWORD,:QWORD
PROTO64 external,DnsIpv6StringToAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsIsStringCountValidForTextType, :QWORD,:QWORD
PROTO64 external,DnsLogEvent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsModifyRecordsInSet_A, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsModifyRecordsInSet_UTF8, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsModifyRecordsInSet_W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsNameCompareEx_A, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsNameCompareEx_UTF8, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsNameCompareEx_W, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsNameCompare_A, :QWORD,:QWORD
PROTO64 external,DnsNameCompare_UTF8, :QWORD,:QWORD
PROTO64 external,DnsNameCompare_W, :QWORD,:QWORD
PROTO64 external,DnsNameCopy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsNameCopyAllocate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsNetworkInfo_CreateFromFAZ, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsNetworkInformation_CreateFromFAZ, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsNotifyResolver, :QWORD,:QWORD
PROTO64 external,DnsNotifyResolverClusterIp, :QWORD,:QWORD
PROTO64 external,DnsNotifyResolverEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsQueryConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsQueryConfigAllocEx, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsQueryConfigDword, :QWORD,:QWORD
PROTO64 external,DnsQueryExA, :QWORD
PROTO64 external,DnsQueryExUTF8, :QWORD
PROTO64 external,DnsQueryExW, :QWORD
PROTO64 external,DnsQuery_A, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsQuery_UTF8, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsQuery_W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsRecordBuild_UTF8, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsRecordBuild_W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsRecordCompare, :QWORD,:QWORD
PROTO64 external,DnsRecordCopyEx, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsRecordListFree, :QWORD,:QWORD
PROTO64 external,DnsRecordListUnmapV4MappedAAAAInPlace, :QWORD
PROTO64 external,DnsRecordSetCompare, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsRecordSetCopyEx, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsRecordSetDetach, :QWORD
PROTO64 external,DnsRecordStringForType, :QWORD
PROTO64 external,DnsRecordStringForWritableType, :QWORD
PROTO64 external,DnsRecordTypeForName, :QWORD,:QWORD
PROTO64 external,DnsRegisterLocal, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsReleaseContextHandle, :QWORD
PROTO64 external,DnsRemoveRegistrations, 
PROTO64 external,DnsReplaceRecordSetA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsReplaceRecordSetUTF8, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsReplaceRecordSetW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsResetQueryRetryTimeouts, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsResolverOp, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsScreenLocalAddrsForRegistration, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsServiceBrowse, :QWORD,:QWORD
PROTO64 external,DnsServiceBrowseCancel, :QWORD
PROTO64 external,DnsServiceConstructInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsServiceCopyInstance, :QWORD
PROTO64 external,DnsServiceDeRegister, :QWORD,:QWORD
PROTO64 external,DnsServiceFreeInstance, :QWORD
PROTO64 external,DnsServiceRegister, :QWORD,:QWORD
PROTO64 external,DnsServiceRegisterCancel, :QWORD
PROTO64 external,DnsServiceResolve, :QWORD,:QWORD
PROTO64 external,DnsServiceResolveCancel, :QWORD
PROTO64 external,DnsSetConfigDword, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsSetQueryRetryTimeouts, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsStartMulticastQuery, :QWORD,:QWORD
PROTO64 external,DnsStopMulticastQuery, :QWORD
PROTO64 external,DnsStringCopyAllocateEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsTraceServerConfig, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsUpdate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsUpdateMachinePresence, 
PROTO64 external,DnsUpdateTest_A, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsUpdateTest_UTF8, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsUpdateTest_W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsValidateNameOrIp_TempW, :QWORD,:QWORD
PROTO64 external,DnsValidateName_A, :QWORD,:QWORD
PROTO64 external,DnsValidateName_UTF8, :QWORD,:QWORD
PROTO64 external,DnsValidateName_W, :QWORD,:QWORD
PROTO64 external,DnsValidateServerArray_A, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsValidateServerArray_W, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsValidateServerStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsValidateServer_A, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsValidateServer_W, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsValidateUtf8Byte, :QWORD,:QWORD
PROTO64 external,DnsWriteQuestionToBuffer_UTF8, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsWriteQuestionToBuffer_W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsWriteReverseNameStringForIpAddress, :QWORD,:QWORD
PROTO64 external,Dns_AddRecordsToMessage, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_AllocateMsgBuf, :QWORD
PROTO64 external,Dns_BuildPacket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_CacheServiceCleanup, 
PROTO64 external,Dns_CacheServiceInit, 
PROTO64 external,Dns_CacheServiceStopIssued, 
PROTO64 external,Dns_CleanupWinsock, 
PROTO64 external,Dns_CloseConnection, :QWORD
PROTO64 external,Dns_CloseSocket, :QWORD
PROTO64 external,Dns_CreateMulticastSocket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_CreateSocket, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_CreateSocketEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_ExtractRecordsFromMessage, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_FindAuthoritativeZoneLib, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_FreeMsgBuf, :QWORD
PROTO64 external,Dns_GetRandomXid, :QWORD
PROTO64 external,Dns_InitializeMsgBuf, :QWORD
PROTO64 external,Dns_InitializeMsgRemoteSockaddr, :QWORD,:QWORD
PROTO64 external,Dns_InitializeWinsock, 
PROTO64 external,Dns_OpenTcpConnectionAndSend, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_ParseMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_ParsePacketRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_PingAdapterServers, :QWORD
PROTO64 external,Dns_ReadRecordStructureFromPacket, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_RecvTcp, :QWORD
PROTO64 external,Dns_ResetNetworkInfo, :QWORD
PROTO64 external,Dns_SendAndRecvUdp, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_SendEx, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_SetRecordDatalength, :QWORD,:QWORD
PROTO64 external,Dns_SetRecordsSection, :QWORD,:QWORD
PROTO64 external,Dns_SetRecordsTtl, :QWORD,:QWORD
PROTO64 external,Dns_SkipToRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_UpdateLib, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_UpdateLibEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_WriteQuestionToMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_WriteRecordStructureToPacketEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExtraInfo_Init, :QWORD,:QWORD
PROTO64 external,Faz_AreServerListsInSameNameSpace, :QWORD,:QWORD,:QWORD
PROTO64 external,FlushDnsPolicyUnreachableStatus, 
PROTO64 external,GetCurrentTimeInSeconds, 
PROTO64 external,HostsFile_Close, :QWORD
PROTO64 external,HostsFile_Open, :QWORD
PROTO64 external,HostsFile_ReadLine, :QWORD
PROTO64 external,IpHelp_IsAddrOnLink, :QWORD
PROTO64 external,Local_GetRecordsForLocalName, :QWORD,:QWORD
PROTO64 external,Local_GetRecordsForLocalNameEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetInfo_Build, :QWORD
PROTO64 external,NetInfo_Clean, :QWORD,:QWORD
PROTO64 external,NetInfo_Copy, :QWORD
PROTO64 external,NetInfo_CopyNetworkIndex, :QWORD,:QWORD
PROTO64 external,NetInfo_CreatePerNetworkNetinfo, :QWORD,:QWORD
PROTO64 external,NetInfo_Free, :QWORD
PROTO64 external,NetInfo_GetAdapterByAddress, :QWORD,:QWORD,:QWORD
PROTO64 external,NetInfo_GetAdapterByInterfaceIndex, :QWORD,:QWORD,:QWORD
PROTO64 external,NetInfo_GetAdapterByName, :QWORD,:QWORD
PROTO64 external,NetInfo_IsAddrConfig, :QWORD,:QWORD
PROTO64 external,NetInfo_IsForUpdate, :QWORD
PROTO64 external,NetInfo_IsTcpipConfigChange, :QWORD
PROTO64 external,NetInfo_ResetServerPriorities, :QWORD,:QWORD
PROTO64 external,NetInfo_UpdateDnsInterfaceConfigChange, :QWORD
PROTO64 external,NetInfo_UpdateNetworkProperties, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetInfo_UpdateServerReachability, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryDirectEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Query_Cancel, :QWORD,:QWORD,:QWORD
PROTO64 external,Query_Main, :QWORD
PROTO64 external,ReadPacketName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadPacketNameAllocate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Reg_FreeUpdateInfo, :QWORD,:QWORD
PROTO64 external,Reg_GetValueEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Reg_ReadGlobalsEx, :QWORD,:QWORD
PROTO64 external,Reg_ReadUpdateInfo, :QWORD,:QWORD
PROTO64 external,Security_ContextListTimeout, :QWORD
PROTO64 external,Send_AndRecvUdpWithParam, :QWORD
PROTO64 external,Send_MessagePrivate, :QWORD,:QWORD,:QWORD
PROTO64 external,Send_MessagePrivateEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Send_OpenTcpConnectionAndSend, :QWORD,:QWORD,:QWORD
PROTO64 external,SkipPacketName, :QWORD,:QWORD
PROTO64 external,Socket_CacheCleanup, 
PROTO64 external,Socket_CacheInit, :QWORD
PROTO64 external,Socket_CleanupWinsock, 
PROTO64 external,Socket_ClearMessageSockets, :QWORD
PROTO64 external,Socket_CloseEx, :QWORD,:QWORD
PROTO64 external,Socket_CloseMessageSockets, :QWORD
PROTO64 external,Socket_Create, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Socket_CreateMulticast, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Socket_InitWinsock, :QWORD
PROTO64 external,Socket_JoinMulticast, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Socket_RecvFrom, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Socket_SetMulticastInterface, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Socket_SetMulticastLoopBack, :QWORD,:QWORD,:QWORD
PROTO64 external,Socket_SetTtl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Socket_TcpListen, :QWORD
PROTO64 external,Trace_Reset, 
PROTO64 external,Update_ReplaceAddressRecordsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Util_IsIp6Running, 
PROTO64 external,WriteDottedNameToPacket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dnsapi.inc
echo -----------------------------------------
ENDIF

