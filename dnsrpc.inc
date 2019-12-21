IFNDEF DNSRPC_INC
DNSRPC_INC equ <1>

PROTO64 external,ADnsRecordConvert, :QWORD
PROTO64 external,DhcidDnsRecordConvert, :QWORD
PROTO64 external,DnsConvertRecordToRpcBuffer, :QWORD
PROTO64 external,DnsPrint_Node, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_NodeList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcDpEnum, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcDpInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcDpList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcIpArrayPlusParameters, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcNode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcRecordsInBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcServerInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcServerInfo_DotNet, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcServerInfo_W2K, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcSingleStat, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcStatRaw, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcStatsBuffer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcUnion, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcZone, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcZoneInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcZoneInfoList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcZoneInfo_DotNet, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcZoneInfo_W2K, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcZoneList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcZoneList_W2K, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsPrint_RpcZone_W2K, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnsRpc_ConvertToCurrent, :QWORD,:QWORD
PROTO64 external,DnsRpc_ConvertToUnversioned, :QWORD,:QWORD,:QWORD
PROTO64 external,DnsSetup, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_CountNsRecordsForDomain, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_CountParentNsRecordsForDomain, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_CreateDelegationInParent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_DeleteDelegationInParent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dns_DoesDomainHostDns, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_MaintainNtdsDependency, :QWORD,:QWORD,:QWORD
PROTO64 external,Dns_SetDnsRpcLogger, :QWORD
PROTO64 external,Dns_SystemHourToSystemTime, :QWORD,:QWORD
PROTO64 external,DnskeyDnsRecordConvert, :QWORD
PROTO64 external,DnssrvAddARecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvAddCnameRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvAddMxRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvAddNsRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvAddSubnetsInClientSubnet, :QWORD,:QWORD
PROTO64 external,DnssrvAutoConfigure, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvChangeZoneDirectoryPartition, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvClearStatistics, :QWORD
PROTO64 external,DnssrvComplexOperationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvConcatDnsNames, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvCopyRpcNameToBuffer, :QWORD,:QWORD
PROTO64 external,DnssrvCreateAllDomainDirectoryPartitions, :QWORD,:QWORD
PROTO64 external,DnssrvCreateClientSubnetRecord, :QWORD,:QWORD
PROTO64 external,DnssrvCreateDsNodeName, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvCreateDsServerName, :QWORD
PROTO64 external,DnssrvCreateDsZoneName, :QWORD,:QWORD
PROTO64 external,DnssrvCreatePolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvCreateServerScope, :QWORD,:QWORD
PROTO64 external,DnssrvCreateZone, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvCreateZoneEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvCreateZoneForDcPromo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvCreateZoneForDcPromoEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvCreateZoneInDirectoryPartition, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvCreateZoneScope, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteARecord, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteCnameRecord, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteMxRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteNode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteNsRecord, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeletePolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteRecordSet, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteRecordSetCreds, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteServerScope, :QWORD,:QWORD
PROTO64 external,DnssrvDeleteZone, :QWORD,:QWORD
PROTO64 external,DnssrvDeleteZoneScope, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteZoneScopeNode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDeleteZoneScopeRecordSet, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvDirectoryPartitionInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnlistDirectoryPartition, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumClientSubnetRecords, :QWORD,:QWORD
PROTO64 external,DnssrvEnumDirectoryPartitions, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumPolicies, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumRecordsEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumRecordsZoneScope, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumServerScope, :QWORD,:QWORD
PROTO64 external,DnssrvEnumTrustAnchors, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumTrustPoints, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumZoneSKDs, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumZoneScope, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumZonesEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvEnumerateKSPS, :QWORD,:QWORD
PROTO64 external,DnssrvExportZone, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvFillOutSingleIndirectionRecord, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvFillRecordHeader, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvFindStatisticsInBuffer, :QWORD,:QWORD
PROTO64 external,DnssrvForceAging, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvFreeDirectoryPartitionEnum, :QWORD
PROTO64 external,DnssrvFreeDirectoryPartitionInfo, :QWORD
PROTO64 external,DnssrvFreeDirectoryPartitionList, :QWORD
PROTO64 external,DnssrvFreeNode, :QWORD,:QWORD
PROTO64 external,DnssrvFreeNodeList, :QWORD,:QWORD
PROTO64 external,DnssrvFreePolicyInfo, :QWORD,:QWORD
PROTO64 external,DnssrvFreePolicyList, :QWORD
PROTO64 external,DnssrvFreeRpcBuffer, :QWORD
PROTO64 external,DnssrvFreeServerInfo, :QWORD
PROTO64 external,DnssrvFreeServerScopeList, :QWORD
PROTO64 external,DnssrvFreeSigningValidationError, :QWORD
PROTO64 external,DnssrvFreeTrustAnchorList, :QWORD
PROTO64 external,DnssrvFreeTrustPointList, :QWORD
PROTO64 external,DnssrvFreeUnicodeStringList, :QWORD
PROTO64 external,DnssrvFreeUtf8StringList, :QWORD
PROTO64 external,DnssrvFreeZone, :QWORD
PROTO64 external,DnssrvFreeZoneInfo, :QWORD
PROTO64 external,DnssrvFreeZoneList, :QWORD
PROTO64 external,DnssrvFreeZoneSKD, :QWORD
PROTO64 external,DnssrvFreeZoneSKDList, :QWORD
PROTO64 external,DnssrvFreeZoneSKDState, :QWORD
PROTO64 external,DnssrvFreeZoneScopeInfo, :QWORD
PROTO64 external,DnssrvFreeZoneScopeList, :QWORD
PROTO64 external,DnssrvFreeZoneSigningInfo, :QWORD
PROTO64 external,DnssrvFreeZoneSkdStateEx, :QWORD
PROTO64 external,DnssrvFreeZoneStatistics, :QWORD
PROTO64 external,DnssrvGetClientSubnetRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetForwardersServerScope, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetPolicy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetRecursionServerScope, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetServerInfo, :QWORD,:QWORD
PROTO64 external,DnssrvGetStatistics, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetWksServicesInRecord, :QWORD
PROTO64 external,DnssrvGetZoneDNSSECSettings, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetZoneInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetZoneSKDState, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetZoneScopeInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvGetZoneStatistics, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvIncrementZoneVersion, :QWORD,:QWORD
PROTO64 external,DnssrvIpValidate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvMatchDnsRpcName, :QWORD,:QWORD
PROTO64 external,DnssrvMidlAllocZero, :QWORD
PROTO64 external,DnssrvModifyZoneSKD, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvOperationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvPauseZone, :QWORD,:QWORD
PROTO64 external,DnssrvPerformKeymasterOperation, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvQueryDwordPropertyEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvQueryEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvQueryZoneDwordProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvQueryZoneScope, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvRemoveClientSubnetRecord, :QWORD,:QWORD
PROTO64 external,DnssrvRemoveSubnetsFromClientSubnet, :QWORD,:QWORD
PROTO64 external,DnssrvRenameZone, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvReplaceSubnetsInClientSubnet, :QWORD,:QWORD
PROTO64 external,DnssrvResetDwordPropertyEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetForwarders, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetForwardersServerScope, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetIPListPropertyEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetRecursionServerScope, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetServerDwordProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetServerListenAddresses, :QWORD,:QWORD
PROTO64 external,DnssrvResetServerListenAddressesV4, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetStringPropertyEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetUtf8StringListPropertyEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetZoneDatabase, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetZoneMasters, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetZoneMastersEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetZoneSecondaries, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetZoneType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResetZoneTypeEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvResumeZone, :QWORD,:QWORD
PROTO64 external,DnssrvSbsAddClientToIspZone, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvSbsDeleteRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvSetPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvSetZoneDNSSECSettings, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvSetZoneSKDState, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvSetupDefaultDirectoryPartitions, :QWORD,:QWORD
PROTO64 external,DnssrvUpdateRecordEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvUpdateRecordZoneScope, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvValidateZoneSigningParameters, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvValidityCheckStatistic, :QWORD
PROTO64 external,DnssrvWriteDirtyZones, :QWORD
PROTO64 external,DnssrvWriteNameToFlatBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,DnssrvZoneScopeOperation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dnssrv_CreateRPCBindingHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,Dnssrv_FreeRPCBindingHandle, :QWORD
PROTO64 external,DsDnsRecordConvert, :QWORD
PROTO64 external,FindProtocolToUse, :QWORD
PROTO64 external,FlatDnsRecordConvert, :QWORD
PROTO64 external,FreeClientSubnetRecord, :QWORD
PROTO64 external,HRESULT_FROM_WIN32, :QWORD
PROTO64 external,IN6_IS_ADDR_LOOPBACK, :QWORD
PROTO64 external,IP6_IS_ADDR_LINKLOCAL, :QWORD
PROTO64 external,IP6_IS_ADDR_SITELOCAL, :QWORD
PROTO64 external,IsNullOrEmpty, :QWORD
PROTO64 external,MinfoDnsRecordConvert, :QWORD
PROTO64 external,MxDnsRecordConvert, :QWORD
PROTO64 external,NaptrDnsRecordConvert, :QWORD
PROTO64 external,NbstatDnsRecordConvert, :QWORD
PROTO64 external,Nsec3DnsRecordConvert, :QWORD
PROTO64 external,Nsec3ParamDnsRecordConvert, :QWORD
PROTO64 external,NsecDnsRecordConvert, :QWORD
PROTO64 external,NxtDnsRecordConvert, :QWORD
PROTO64 external,PtrDnsRecordConvert, :QWORD
PROTO64 external,R_DnssrvComplexOperation2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvComplexOperation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvEnumRecords2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvEnumRecords3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvEnumRecords, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvOperation2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvOperation3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvOperation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvQuery2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvQuery3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvQuery, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvUpdateRecord2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvUpdateRecord3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,R_DnssrvUpdateRecord, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Rpc_AllocateRecord, :QWORD
PROTO64 external,SigDnsRecordConvert, :QWORD
PROTO64 external,SoaDnsRecordConvert, :QWORD
PROTO64 external,SrvDnsRecordConvert, :QWORD
PROTO64 external,StringCbCatW, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCbCopyW, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCatA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCatW, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCopyA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCopyNA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCopyW, :QWORD,:QWORD,:QWORD
PROTO64 external,TlsaDnsRecordConvert, :QWORD
PROTO64 external,TxtDnsRecordConvert, :QWORD
PROTO64 external,ULongAdd, :QWORD,:QWORD,:QWORD
PROTO64 external,ULongLongToULong, :QWORD,:QWORD,:QWORD
PROTO64 external,ULongMult, :QWORD,:QWORD,:QWORD
PROTO64 external,ULongSub, :QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSsDsS, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSsDsd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSsDsq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSsDsqdD, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSss, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSssd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSssq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSssqq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_DSsssdDssqq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_S, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_SDq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_SDsssq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_Sd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_Sds, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_Sq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_SsDq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_SsSsd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_Ssd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_Ssq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_SssS, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_SssSqq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_SssSsdDssqq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_Sssq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_d, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_dD, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_dSssdd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_dd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_ddd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_dddqq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_ddq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_dsS, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_q, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_qqdq, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_s, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_sS, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,buildRpcRecord, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,countNsRecordsInRecordSet, :QWORD,:QWORD,:QWORD
PROTO64 external,ctimeWrapper, :QWORD,:QWORD,:QWORD
PROTO64 external,dns_MapRpcExtendedHResultToWin32, :QWORD
PROTO64 external,dotTerminateW, :QWORD,:QWORD
PROTO64 external,findParentDomainThatHostsDns, :QWORD,:QWORD,:QWORD
PROTO64 external,freeServiceConfig, :QWORD
PROTO64 external,getParentDomainName, :QWORD,:QWORD,:QWORD
PROTO64 external,getServiceConfig, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,getUnicodeForUtf8, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD
PROTO64 external,isValidNsTargetAddr, :QWORD
PROTO64 external,makeSpn, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,midlConvertIp4ArrayToDnsAddrArray, :QWORD
PROTO64 external,partitionDisplayName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,performCreateDelegation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,performDeleteDelegation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,printExtendedRpcErrorInfo, :QWORD
PROTO64 external,printNsecTypeBitmap, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,printStatTypeArray, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,restoreDisableIdnEncodingFlag, 
PROTO64 external,setDisableIdnEncodingFlag, 
PROTO64 external,trimTrailingDots, :QWORD
PROTO64 external,utf8ToUnicode, :QWORD,:QWORD
PROTO64 external,zoneTypeString, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dnsrpc.inc
echo -----------------------------------------
ENDIF
