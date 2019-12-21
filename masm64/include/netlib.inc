IFNDEF NETLIB_INC
NETLIB_INC equ <1>

PROTO64 external,CEventDeinit, 
PROTO64 external,CEventInit, 
PROTO64 external,CEventRegister, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CEventUnregister, :QWORD
PROTO64 external,CEventWrite, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DosGetMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FatalListEntryError, :QWORD,:QWORD,:QWORD
PROTO64 external,FindUserProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GenerateRandomPassword, :QWORD
PROTO64 external,GetStrPtr, :QWORD
PROTO64 external,InitializeListHead, :QWORD
PROTO64 external,InsertHeadList, :QWORD,:QWORD
PROTO64 external,InsertTailList, :QWORD,:QWORD
PROTO64 external,IntToUInt, :QWORD,:QWORD
PROTO64 external,IsListEmpty, :QWORD
PROTO64 external,MIDL_user_allocate, :QWORD
PROTO64 external,MIDL_user_free, :QWORD
PROTO64 external,MIDL_user_reallocate, :QWORD,:QWORD
PROTO64 external,MIDL_user_size, :QWORD
PROTO64 external,MyAllocUnicode, :QWORD,:QWORD
PROTO64 external,MyAllocUnicodeVector, :QWORD,:QWORD,:QWORD
PROTO64 external,MyFreeUnicode, :QWORD
PROTO64 external,MyFreeUnicodeVector, :QWORD,:QWORD
PROTO64 external,NetSetuppCloseLog, 
PROTO64 external,NetSetuppOpenLog, 
PROTO64 external,NetpAccessCheck2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpAccessCheck, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpAccessCheckAndAudit, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpAccessCheckAndAuditEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpAccessCheckUser, :QWORD
PROTO64 external,NetpAddTStrToTStrArray, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpAddTlnFtinfoEntry, :QWORD,:QWORD
PROTO64 external,NetpAliasMemberToPriv, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpAllocAStrFromWStr, :QWORD
PROTO64 external,NetpAllocFtinfoEntry2, :QWORD,:QWORD
PROTO64 external,NetpAllocFtinfoEntry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpAllocStrFromWStr, :QWORD
PROTO64 external,NetpAllocWStrFromAStr, :QWORD
PROTO64 external,NetpAllocWStrFromStr, :QWORD
PROTO64 external,NetpAllocWStrFromWStr, :QWORD
PROTO64 external,NetpAllocateAndInitializeSid, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpAllocateEnumBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpAllocateEnumBufferEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpApiStatusToNtStatus, :QWORD
PROTO64 external,NetpBindRpc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpCleanFtinfoContext, :QWORD
PROTO64 external,NetpCloseConfigData, :QWORD
PROTO64 external,NetpCloseDebugFile, :QWORD
PROTO64 external,NetpCompareDnsNameWithSortOrder, :QWORD,:QWORD
PROTO64 external,NetpCompareHelper, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpCompareSid, :QWORD,:QWORD
PROTO64 external,NetpCopyDataToBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpCopyFtinfoContext, :QWORD
PROTO64 external,NetpCopyStrArrayToTStrArray, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpCopyStrToWStr, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpCopyStringToBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpCopyWStrToStr, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpCopyWStrToStrDBCS, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpCreateSecurityDescriptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpCreateSecurityObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpCreateWellKnownSids, :QWORD
PROTO64 external,NetpDebugDumpRoutine, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpDeleteConfigKeyword, :QWORD,:QWORD
PROTO64 external,NetpDeleteSecurityObject, :QWORD
PROTO64 external,NetpDomainIdToSid, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpDuplicateString, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpEventlogClearList, :QWORD
PROTO64 external,NetpEventlogClose, :QWORD
PROTO64 external,NetpEventlogOpen, :QWORD,:QWORD
PROTO64 external,NetpEventlogSetTimeout, :QWORD,:QWORD
PROTO64 external,NetpEventlogWrite, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpEventlogWriteEx2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpEventlogWriteEx3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpEventlogWriteEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpExpandConfigString, :QWORD,:QWORD
PROTO64 external,NetpFreeWellKnownSids, 
PROTO64 external,NetpGetComputerName, :QWORD
PROTO64 external,NetpGetComputerNameEx2, :QWORD,:QWORD
PROTO64 external,NetpGetComputerNameEx, :QWORD,:QWORD
PROTO64 external,NetpGetConfigBool, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpGetConfigDword, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpGetConfigMaxSizes, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpGetConfigTStrArray, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpGetConfigValue, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpGetDomainName, :QWORD
PROTO64 external,NetpGetDomainNameEx, :QWORD,:QWORD
PROTO64 external,NetpGetDomainNameExEx, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpGetDomainNameExExEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpGetDsIsCloningPDC, 
PROTO64 external,NetpGetElapsedSeconds, :QWORD
PROTO64 external,NetpGetLocalDomainId, :QWORD,:QWORD
PROTO64 external,NetpGetNewHostName, :QWORD
PROTO64 external,NetpGetNewMachineName, :QWORD
PROTO64 external,NetpGetPrivilege, :QWORD,:QWORD
PROTO64 external,NetpGetTimeFormat, :QWORD
PROTO64 external,NetpGetWinRegConfigMaxSizes, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpGmtTimeToLocalTime, :QWORD,:QWORD
PROTO64 external,NetpHandleRpcFailure, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpInitFtinfoContext, :QWORD
PROTO64 external,NetpInitializeAllowedAce, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpInitializeAuditAce, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpInitializeDeniedAce, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpInitializeLogFile, 
PROTO64 external,NetpIsServiceStarted, :QWORD
PROTO64 external,NetpIsSubordinate, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpLocalTimeToGmtTime, :QWORD,:QWORD
PROTO64 external,NetpLocalTimeZoneOffset, 
PROTO64 external,NetpLogBuildInformation, 
PROTO64 external,NetpLogonTimeHasElapsed, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpMarshalFtinfoEntry, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpMemoryAllocate, :QWORD
PROTO64 external,NetpMemoryFree, :QWORD
PROTO64 external,NetpMemoryReallocate, :QWORD,:QWORD
PROTO64 external,NetpMergeFtinfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpMergeFtinfoHelper, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpNCopyStrToWStr, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpNCopyWStrToStr, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpNtStatusToApiStatus, :QWORD
PROTO64 external,NetpOpenConfigData, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpOpenConfigDataEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpOpenConfigDataWithPath, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpOpenConfigDataWithPathEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpOpenDebugFile, :QWORD,:QWORD
PROTO64 external,NetpPackString, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpParmsQueryUserProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpParmsSetUserProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpParmsUserPropertyFree, :QWORD
PROTO64 external,NetpRdrFsControlTree, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpRdrFsControlTreeEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpReleasePrivilege, 
PROTO64 external,NetpRotateLogonHours, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpRotateLogonHoursPhase1, :QWORD,:QWORD
PROTO64 external,NetpRotateLogonHoursPhase2, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpServerRequiresRAP, :QWORD,:QWORD
PROTO64 external,NetpSetDnsComputerNameAsRequired, :QWORD
PROTO64 external,NetpSetDsIsCloningPDC, :QWORD
PROTO64 external,NetpShutdownLogFile, 
PROTO64 external,NetpSrvClose, :QWORD
PROTO64 external,NetpSrvGetRecordCount, :QWORD
PROTO64 external,NetpSrvNext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpSrvNextEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpSrvOpen, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpSrvProcessARecords, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpSrvProcessAllRecords, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpStrArraySize, :QWORD
PROTO64 external,NetpSystemTimeToGmtTime, :QWORD,:QWORD
PROTO64 external,NetpTStrArrayEntryCount, :QWORD
PROTO64 external,NetpTStrArraySize, :QWORD
PROTO64 external,NetpULongPtrRoundUp, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpULongRoundUp, :QWORD,:QWORD,:QWORD
PROTO64 external,NetpUnbindRpc, :QWORD
PROTO64 external,NetpUnicodeToDBCSLen, :QWORD
PROTO64 external,NetpWriteEventlog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetpWriteEventlogEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NlWriteBinaryLog, :QWORD,:QWORD,:QWORD
PROTO64 external,NlWriteBinaryLogEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NlWriteFileForestTrustList, :QWORD,:QWORD,:QWORD
PROTO64 external,NlWriteFileForestTrustListEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RemoveEntryList, :QWORD
PROTO64 external,RemoveHeadList, :QWORD
PROTO64 external,RemoveUserProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlConvertUlongToLuid, :QWORD
PROTO64 external,RtlFailFast, :QWORD
PROTO64 external,RtlStringCbCopyA, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlStringCbVPrintfExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtlUIntPtrToLong, :QWORD,:QWORD
PROTO64 external,RtlULongAdd, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlULongLongToULong, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlULongMult, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlUShortAdd, :QWORD,:QWORD,:QWORD
PROTO64 external,UIntMult, :QWORD,:QWORD,:QWORD
PROTO64 external,ULongAdd, :QWORD,:QWORD,:QWORD
PROTO64 external,ULongLongToUInt, :QWORD,:QWORD,:QWORD
PROTO64 external,ULongLongToULong, :QWORD,:QWORD,:QWORD
PROTO64 external,ULongMult, :QWORD,:QWORD,:QWORD
PROTO64 external,UShortAdd, :QWORD,:QWORD,:QWORD
PROTO64 external,UShortSub, :QWORD,:QWORD,:QWORD
PROTO64 external,UserPropertyAllocBlock, :QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_L, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WPP_SF_LL, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,allocateEvntlogMap, :QWORD,:QWORD
PROTO64 external,compareLists, :QWORD,:QWORD,:QWORD
PROTO64 external,freeEvntlogMap, :QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD
PROTO64 external,net_gmtime, :QWORD,:QWORD
PROTO64 external,time_now, 
PROTO64 external,wtol, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file netlib.inc
echo -----------------------------------------
ENDIF

