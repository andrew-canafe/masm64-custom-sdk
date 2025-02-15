IFNDEF RPCRT4_INC
RPCRT4_INC equ <1>

PROTO64 external,CStdStubBuffer_AddRef, :QWORD
PROTO64 external,CStdStubBuffer_Connect, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer_CountRefs, :QWORD
PROTO64 external,CStdStubBuffer_DebugServerQueryInterface, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer_DebugServerRelease, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer_Disconnect, :QWORD
PROTO64 external,CStdStubBuffer_Invoke, :QWORD,:QWORD,:QWORD
PROTO64 external,CStdStubBuffer_IsIIDSupported, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer_QueryInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateProxyFromTypeInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateStubFromTypeInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DceErrorInqTextA, :QWORD,:QWORD
PROTO64 external,DceErrorInqTextW, :QWORD,:QWORD
PROTO64 external,IUnknown_AddRef_Proxy, :QWORD
PROTO64 external,IUnknown_QueryInterface_Proxy, :QWORD,:QWORD,:QWORD
PROTO64 external,IUnknown_Release_Proxy, :QWORD
PROTO64 external,I_RpcAllocate, :QWORD
PROTO64 external,I_RpcAsyncAbortCall, :QWORD,:QWORD
PROTO64 external,I_RpcAsyncSetHandle, :QWORD,:QWORD
PROTO64 external,I_RpcBCacheAllocate, :QWORD
PROTO64 external,I_RpcBCacheFree, :QWORD
PROTO64 external,I_RpcBindingCopy, :QWORD,:QWORD
PROTO64 external,I_RpcBindingCreateNP, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcBindingHandleToAsyncHandle, :QWORD,:QWORD
PROTO64 external,I_RpcBindingInqClientTokenAttributes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcBindingInqDynamicEndpointA, :QWORD,:QWORD
PROTO64 external,I_RpcBindingInqDynamicEndpointW, :QWORD,:QWORD
PROTO64 external,I_RpcBindingInqLocalClientPID, :QWORD,:QWORD
PROTO64 external,I_RpcBindingInqMarshalledTargetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcBindingInqSecurityContext, :QWORD,:QWORD
PROTO64 external,I_RpcBindingInqSecurityContextKeyInfo, :QWORD,:QWORD
PROTO64 external,I_RpcBindingInqTransportType, :QWORD,:QWORD
PROTO64 external,I_RpcBindingInqWireIdForSnego, :QWORD,:QWORD
PROTO64 external,I_RpcBindingIsClientLocal, :QWORD,:QWORD
PROTO64 external,I_RpcBindingIsServerLocal, :QWORD,:QWORD
PROTO64 external,I_RpcBindingSetPrivateOption, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcBindingToStaticStringBindingW, :QWORD,:QWORD
PROTO64 external,I_RpcCertProcessAndProvision, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcClearMutex, :QWORD
PROTO64 external,I_RpcCompleteAndFree, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcConnectionInqSockBuffSize, :QWORD,:QWORD
PROTO64 external,I_RpcConnectionSetSockBuffSize, :QWORD,:QWORD
PROTO64 external,I_RpcDeleteMutex, :QWORD
PROTO64 external,I_RpcEnableWmiTrace, :QWORD,:QWORD
PROTO64 external,I_RpcExceptionFilter, :QWORD
PROTO64 external,I_RpcFilterDCOMActivation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcFree, :QWORD
PROTO64 external,I_RpcFreeBuffer, :QWORD
PROTO64 external,I_RpcFreePipeBuffer, :QWORD
PROTO64 external,I_RpcGetBuffer, :QWORD
PROTO64 external,I_RpcGetBufferWithObject, :QWORD,:QWORD
PROTO64 external,I_RpcGetCurrentCallHandle, 
PROTO64 external,I_RpcGetDefaultSD, :QWORD
PROTO64 external,I_RpcGetExtendedError, 
PROTO64 external,I_RpcGetPortAllocationData, :QWORD
PROTO64 external,I_RpcIfInqTransferSyntaxes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcLogEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcMapWin32Status, :QWORD
PROTO64 external,I_RpcMarshalBindingHandleAndInterfaceForNDF, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcMgmtEnableDedicatedThreadPool, 
PROTO64 external,I_RpcNDRCGetWireRepresentation, :QWORD,:QWORD
PROTO64 external,I_RpcNDRSContextEmergencyCleanup, :QWORD,:QWORD
PROTO64 external,I_RpcNegotiateTransferSyntax, :QWORD
PROTO64 external,I_RpcNsBindingSetEntryNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcNsBindingSetEntryNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcNsInterfaceExported, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcNsInterfaceUnexported, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcOpenClientProcess, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcParseSecurity, :QWORD,:QWORD
PROTO64 external,I_RpcPauseExecution, :QWORD
PROTO64 external,I_RpcReallocPipeBuffer, :QWORD,:QWORD
PROTO64 external,I_RpcReceive, :QWORD,:QWORD
PROTO64 external,I_RpcRecordCalloutFailure, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcRequestMutex, :QWORD
PROTO64 external,I_RpcSNCHOption, :QWORD,:QWORD
PROTO64 external,I_RpcSend, :QWORD
PROTO64 external,I_RpcSendReceive, :QWORD
PROTO64 external,I_RpcServerAllocateIpPort, :QWORD,:QWORD
PROTO64 external,I_RpcServerCheckClientRestriction, :QWORD
PROTO64 external,I_RpcServerDisableExceptionFilter, 
PROTO64 external,I_RpcServerGetAssociationID, :QWORD,:QWORD
PROTO64 external,I_RpcServerInqAddressChangeFn, 
PROTO64 external,I_RpcServerInqLocalConnAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcServerInqRemoteConnAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcServerInqTransportType, :QWORD
PROTO64 external,I_RpcServerIsClientDisconnected, :QWORD,:QWORD
PROTO64 external,I_RpcServerRegisterForwardFunction, :QWORD
PROTO64 external,I_RpcServerSetAddressChangeFn, :QWORD
PROTO64 external,I_RpcServerStartService, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcServerSubscribeForDisconnectNotification, :QWORD,:QWORD
PROTO64 external,I_RpcServerUseProtseq2A, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcServerUseProtseq2W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcServerUseProtseqEp2A, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcServerUseProtseqEp2W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcSessionStrictContextHandle, 
PROTO64 external,I_RpcSetDCOMAppId, :QWORD
PROTO64 external,I_RpcSsDontSerializeContext, 
PROTO64 external,I_RpcSystemFunction001, :QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcTransConnectionAllocatePacket, :QWORD,:QWORD
PROTO64 external,I_RpcTransConnectionFreePacket, :QWORD,:QWORD
PROTO64 external,I_RpcTransConnectionReallocPacket, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcTransDatagramAllocate2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcTransDatagramAllocate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,I_RpcTransDatagramFree, :QWORD,:QWORD
PROTO64 external,I_RpcTransGetThreadEvent, 
PROTO64 external,I_RpcTransGetThreadEventThreadOptional, 
PROTO64 external,I_RpcTransIoCancelled, :QWORD,:QWORD
PROTO64 external,I_RpcTransServerNewConnection, :QWORD
PROTO64 external,I_RpcTurnOnEEInfoPropagation, 
PROTO64 external,I_UuidCreate, :QWORD
PROTO64 external,MesBufferHandleReset, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MesDecodeBufferHandleCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,MesDecodeIncrementalHandleCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,MesEncodeDynBufferHandleCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,MesEncodeFixedBufferHandleCreate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MesEncodeIncrementalHandleCreate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MesHandleFree, :QWORD
PROTO64 external,MesIncrementalHandleReset, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MesInqProcEncodingId, :QWORD,:QWORD,:QWORD
PROTO64 external,NDRCContextBinding, :QWORD
PROTO64 external,NDRCContextMarshall, :QWORD,:QWORD
PROTO64 external,NDRCContextUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDRSContextMarshall2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDRSContextMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NDRSContextMarshallEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDRSContextUnmarshall2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDRSContextUnmarshall, :QWORD,:QWORD
PROTO64 external,NDRSContextUnmarshallEx, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrAllocate, :QWORD,:QWORD
PROTO64 external,NdrAsyncServerCall, :QWORD
PROTO64 external,NdrByteCountPointerBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrByteCountPointerFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrByteCountPointerMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrByteCountPointerUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrCStdStubBuffer2_Release, :QWORD,:QWORD
PROTO64 external,NdrCStdStubBuffer_Release, :QWORD,:QWORD
PROTO64 external,NdrClearOutParameters, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrClientContextMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrClientContextUnmarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrClientInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrClientInitializeNew, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrComplexArrayBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrComplexArrayFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrComplexArrayMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrComplexArrayMemorySize, :QWORD,:QWORD
PROTO64 external,NdrComplexArrayUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrComplexStructBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrComplexStructFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrComplexStructMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrComplexStructMemorySize, :QWORD,:QWORD
PROTO64 external,NdrComplexStructUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantArrayBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantArrayFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantArrayMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantArrayMemorySize, :QWORD,:QWORD
PROTO64 external,NdrConformantArrayUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantStringBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantStringMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantStringMemorySize, :QWORD,:QWORD
PROTO64 external,NdrConformantStringUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantStructBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantStructFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantStructMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantStructMemorySize, :QWORD,:QWORD
PROTO64 external,NdrConformantStructUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantVaryingArrayBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantVaryingArrayFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantVaryingArrayMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantVaryingArrayMemorySize, :QWORD,:QWORD
PROTO64 external,NdrConformantVaryingArrayUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantVaryingStructBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantVaryingStructFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantVaryingStructMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConformantVaryingStructMemorySize, :QWORD,:QWORD
PROTO64 external,NdrConformantVaryingStructUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrContextHandleInitialize, :QWORD,:QWORD
PROTO64 external,NdrContextHandleSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConvert2, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrConvert, :QWORD,:QWORD
PROTO64 external,NdrCorrelationFree, :QWORD
PROTO64 external,NdrCorrelationInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrCorrelationPass, :QWORD
PROTO64 external,NdrCreateServerInterfaceFromStub, :QWORD,:QWORD
PROTO64 external,NdrDcomAsyncStubCall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrDllCanUnloadNow, :QWORD
PROTO64 external,NdrDllGetClassObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrDllRegisterProxy, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrDllUnregisterProxy, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrEncapsulatedUnionBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrEncapsulatedUnionFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrEncapsulatedUnionMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrEncapsulatedUnionMemorySize, :QWORD,:QWORD
PROTO64 external,NdrEncapsulatedUnionUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrFixedArrayBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrFixedArrayFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrFixedArrayMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrFixedArrayMemorySize, :QWORD,:QWORD
PROTO64 external,NdrFixedArrayUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrFreeBuffer, :QWORD
PROTO64 external,NdrFullPointerXlatFree, :QWORD
PROTO64 external,NdrFullPointerXlatInit, :QWORD,:QWORD
PROTO64 external,NdrGetBaseInterfaceFromStub, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrGetBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrGetDcomProtocolVersion, :QWORD,:QWORD
PROTO64 external,NdrGetSimpleTypeBufferAlignment, :QWORD
PROTO64 external,NdrGetSimpleTypeBufferSize, :QWORD
PROTO64 external,NdrGetSimpleTypeMemorySize, :QWORD
PROTO64 external,NdrGetTypeFlags, :QWORD
PROTO64 external,NdrGetUserMarshalInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrInterfacePointerBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrInterfacePointerFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrInterfacePointerMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrInterfacePointerMemorySize, :QWORD,:QWORD
PROTO64 external,NdrInterfacePointerUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMapCommAndFaultStatus, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesSimpleTypeAlignSize, :QWORD
PROTO64 external,NdrMesSimpleTypeDecode, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesSimpleTypeEncode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesTypeAlignSize2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesTypeAlignSize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesTypeDecode2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesTypeDecode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesTypeEncode2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesTypeEncode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrMesTypeFree2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrNonConformantStringBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrNonConformantStringMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrNonConformantStringMemorySize, :QWORD,:QWORD
PROTO64 external,NdrNonConformantStringUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrNonEncapsulatedUnionBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrNonEncapsulatedUnionFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrNonEncapsulatedUnionMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrNonEncapsulatedUnionMemorySize, :QWORD,:QWORD
PROTO64 external,NdrNonEncapsulatedUnionUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrNsGetBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrNsSendReceive, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrOleAllocate, :QWORD
PROTO64 external,NdrOleFree, :QWORD
PROTO64 external,NdrOutInit, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrPartialIgnoreClientBufferSize, :QWORD,:QWORD
PROTO64 external,NdrPartialIgnoreClientMarshall, :QWORD,:QWORD
PROTO64 external,NdrPartialIgnoreServerInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrPartialIgnoreServerUnmarshall, :QWORD,:QWORD
PROTO64 external,NdrPointerBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrPointerFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrPointerMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrPointerMemorySize, :QWORD,:QWORD
PROTO64 external,NdrPointerUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrProxyErrorHandler, :QWORD
PROTO64 external,NdrProxyFreeBuffer, :QWORD,:QWORD
PROTO64 external,NdrProxyGetBuffer, :QWORD,:QWORD
PROTO64 external,NdrProxyInitialize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrProxySendReceive, :QWORD,:QWORD
PROTO64 external,NdrRangeUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrRpcSmClientAllocate, :QWORD
PROTO64 external,NdrRpcSmClientFree, :QWORD
PROTO64 external,NdrRpcSmSetClientToOsf, :QWORD
PROTO64 external,NdrRpcSsDefaultAllocate, :QWORD
PROTO64 external,NdrRpcSsDefaultFree, :QWORD
PROTO64 external,NdrRpcSsDisableAllocate, :QWORD
PROTO64 external,NdrRpcSsEnableAllocate, :QWORD
PROTO64 external,NdrSendReceive, :QWORD,:QWORD
PROTO64 external,NdrServerCall2, :QWORD
PROTO64 external,NdrServerCall, :QWORD
PROTO64 external,NdrServerContextMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrServerContextNewMarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrServerContextNewUnmarshall, :QWORD,:QWORD
PROTO64 external,NdrServerContextUnmarshall, :QWORD
PROTO64 external,NdrServerInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrServerInitializeMarshall, :QWORD,:QWORD
PROTO64 external,NdrServerInitializeNew, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrServerInitializePartial, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrServerInitializeUnmarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrServerMarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrServerUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrSimpleStructBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrSimpleStructFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrSimpleStructMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrSimpleStructMemorySize, :QWORD,:QWORD
PROTO64 external,NdrSimpleStructUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrSimpleTypeMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrSimpleTypeUnmarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrStubCall2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrStubCall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrStubForwardingFunction, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrStubGetBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrStubInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrStubInitializeMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrTypeFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrTypeMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrTypeSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrTypeUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrUnmarshallBasetypeInline, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrUserMarshalBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrUserMarshalFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrUserMarshalMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrUserMarshalMemorySize, :QWORD,:QWORD
PROTO64 external,NdrUserMarshalSimpleTypeConvert, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrUserMarshalUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrVaryingArrayBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrVaryingArrayFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrVaryingArrayMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrVaryingArrayMemorySize, :QWORD,:QWORD
PROTO64 external,NdrVaryingArrayUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrXmitOrRepAsBufferSize, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrXmitOrRepAsFree, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrXmitOrRepAsMarshall, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrXmitOrRepAsMemorySize, :QWORD,:QWORD
PROTO64 external,NdrXmitOrRepAsUnmarshall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrpCreateProxy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrpCreateStub, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrpGetProcFormatString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrpGetTypeFormatString, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrpGetTypeGenCookie, :QWORD
PROTO64 external,NdrpMemoryIncrement, :QWORD,:QWORD,:QWORD
PROTO64 external,NdrpReleaseTypeFormatString, :QWORD
PROTO64 external,NdrpReleaseTypeGenCookie, :QWORD
PROTO64 external,NdrpVarVtOfTypeDesc, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcAsyncAbortCall, :QWORD,:QWORD
PROTO64 external,RpcAsyncCancelCall, :QWORD,:QWORD
PROTO64 external,RpcAsyncCompleteCall, :QWORD,:QWORD
PROTO64 external,RpcAsyncGetCallStatus, :QWORD
PROTO64 external,RpcAsyncInitializeHandle, :QWORD,:QWORD
PROTO64 external,RpcAsyncRegisterInfo, :QWORD
PROTO64 external,RpcBindingBind, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingCopy, :QWORD,:QWORD
PROTO64 external,RpcBindingCreateA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingCreateW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingFree, :QWORD
PROTO64 external,RpcBindingFromStringBindingA, :QWORD,:QWORD
PROTO64 external,RpcBindingFromStringBindingW, :QWORD,:QWORD
PROTO64 external,RpcBindingInqAuthClientA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingInqAuthClientExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingInqAuthClientExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingInqAuthClientW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingInqAuthInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingInqAuthInfoExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingInqAuthInfoExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingInqAuthInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingInqObject, :QWORD,:QWORD
PROTO64 external,RpcBindingInqOption, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingReset, :QWORD
PROTO64 external,RpcBindingServerFromClient, :QWORD,:QWORD
PROTO64 external,RpcBindingSetAuthInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingSetAuthInfoExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingSetAuthInfoExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingSetAuthInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingSetObject, :QWORD,:QWORD
PROTO64 external,RpcBindingSetOption, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcBindingToStringBindingA, :QWORD,:QWORD
PROTO64 external,RpcBindingToStringBindingW, :QWORD,:QWORD
PROTO64 external,RpcBindingUnbind, :QWORD
PROTO64 external,RpcBindingVectorFree, :QWORD
PROTO64 external,RpcCancelThread, :QWORD
PROTO64 external,RpcCancelThreadEx, :QWORD,:QWORD
PROTO64 external,RpcCertGeneratePrincipalNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcCertGeneratePrincipalNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcEpRegisterA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcEpRegisterNoReplaceA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcEpRegisterNoReplaceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcEpRegisterW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcEpResolveBinding, :QWORD,:QWORD
PROTO64 external,RpcEpUnregister, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcErrorAddRecord, :QWORD
PROTO64 external,RpcErrorClearInformation, 
PROTO64 external,RpcErrorEndEnumeration, :QWORD
PROTO64 external,RpcErrorGetNextRecord, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcErrorGetNumberOfRecords, :QWORD,:QWORD
PROTO64 external,RpcErrorLoadErrorInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcErrorResetEnumeration, :QWORD
PROTO64 external,RpcErrorSaveErrorInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcErrorStartEnumeration, :QWORD
PROTO64 external,RpcExceptionFilter, :QWORD
PROTO64 external,RpcFreeAuthorizationContext, :QWORD
PROTO64 external,RpcGetAuthorizationContextForClient, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcIfIdVectorFree, :QWORD
PROTO64 external,RpcIfInqId, :QWORD,:QWORD
PROTO64 external,RpcImpersonateClient2, :QWORD
PROTO64 external,RpcImpersonateClient, :QWORD
PROTO64 external,RpcImpersonateClientContainer, :QWORD
PROTO64 external,RpcMgmtEnableIdleCleanup, 
PROTO64 external,RpcMgmtEpEltInqBegin, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcMgmtEpEltInqDone, :QWORD
PROTO64 external,RpcMgmtEpEltInqNextA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcMgmtEpEltInqNextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcMgmtEpUnregister, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcMgmtInqComTimeout, :QWORD,:QWORD
PROTO64 external,RpcMgmtInqDefaultProtectLevel, :QWORD,:QWORD
PROTO64 external,RpcMgmtInqIfIds, :QWORD,:QWORD
PROTO64 external,RpcMgmtInqServerPrincNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcMgmtInqServerPrincNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcMgmtInqStats, :QWORD,:QWORD
PROTO64 external,RpcMgmtIsServerListening, :QWORD
PROTO64 external,RpcMgmtSetAuthorizationFn, :QWORD
PROTO64 external,RpcMgmtSetCancelTimeout, :QWORD
PROTO64 external,RpcMgmtSetComTimeout, :QWORD,:QWORD
PROTO64 external,RpcMgmtSetServerStackSize, :QWORD
PROTO64 external,RpcMgmtStatsVectorFree, :QWORD
PROTO64 external,RpcMgmtStopServerListening, :QWORD
PROTO64 external,RpcMgmtWaitServerListen, 
PROTO64 external,RpcNetworkInqProtseqsA, :QWORD
PROTO64 external,RpcNetworkInqProtseqsW, :QWORD
PROTO64 external,RpcNetworkIsProtseqValidA, :QWORD
PROTO64 external,RpcNetworkIsProtseqValidW, :QWORD
PROTO64 external,RpcNsBindingInqEntryNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingInqEntryNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcObjectInqType, :QWORD,:QWORD
PROTO64 external,RpcObjectSetInqFn, :QWORD
PROTO64 external,RpcObjectSetType, :QWORD,:QWORD
PROTO64 external,RpcProtseqVectorFreeA, :QWORD
PROTO64 external,RpcProtseqVectorFreeW, :QWORD
PROTO64 external,RpcRaiseException, :QWORD
PROTO64 external,RpcRevertContainerImpersonation, 
PROTO64 external,RpcRevertToSelf, 
PROTO64 external,RpcRevertToSelfEx, :QWORD
PROTO64 external,RpcServerCompleteSecurityCallback, :QWORD,:QWORD
PROTO64 external,RpcServerInqBindingHandle, :QWORD
PROTO64 external,RpcServerInqBindings, :QWORD
PROTO64 external,RpcServerInqCallAttributesA, :QWORD,:QWORD
PROTO64 external,RpcServerInqCallAttributesW, :QWORD,:QWORD
PROTO64 external,RpcServerInqDefaultPrincNameA, :QWORD,:QWORD
PROTO64 external,RpcServerInqDefaultPrincNameW, :QWORD,:QWORD
PROTO64 external,RpcServerInqIf, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerInterfaceGroupActivate, :QWORD
PROTO64 external,RpcServerInterfaceGroupClose, :QWORD
PROTO64 external,RpcServerInterfaceGroupCreateA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerInterfaceGroupCreateW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerInterfaceGroupDeactivate, :QWORD,:QWORD
PROTO64 external,RpcServerInterfaceGroupInqBindings, :QWORD,:QWORD
PROTO64 external,RpcServerListen, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerRegisterAuthInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerRegisterAuthInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerRegisterIf2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerRegisterIf3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerRegisterIf, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerRegisterIfEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerSubscribeForNotification, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerTestCancel, :QWORD
PROTO64 external,RpcServerUnregisterIf, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUnregisterIfEx, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUnsubscribeForNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseAllProtseqs, :QWORD,:QWORD
PROTO64 external,RpcServerUseAllProtseqsEx, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseAllProtseqsIf, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseAllProtseqsIfEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqA, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqEpA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqEpExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqEpExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqEpW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqIfA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqIfExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqIfExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqIfW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerUseProtseqW, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcServerYield, 
PROTO64 external,RpcSmAllocate, :QWORD,:QWORD
PROTO64 external,RpcSmClientFree, :QWORD
PROTO64 external,RpcSmDestroyClientContext, :QWORD
PROTO64 external,RpcSmDisableAllocate, 
PROTO64 external,RpcSmEnableAllocate, 
PROTO64 external,RpcSmFree, :QWORD
PROTO64 external,RpcSmGetThreadHandle, :QWORD
PROTO64 external,RpcSmSetClientAllocFree, :QWORD,:QWORD
PROTO64 external,RpcSmSetThreadHandle, :QWORD
PROTO64 external,RpcSmSwapClientAllocFree, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcSsAllocate, :QWORD
PROTO64 external,RpcSsContextLockExclusive, :QWORD,:QWORD
PROTO64 external,RpcSsContextLockShared, :QWORD,:QWORD
PROTO64 external,RpcSsDestroyClientContext, :QWORD
PROTO64 external,RpcSsDisableAllocate, 
PROTO64 external,RpcSsDontSerializeContext, 
PROTO64 external,RpcSsEnableAllocate, 
PROTO64 external,RpcSsFree, :QWORD
PROTO64 external,RpcSsGetContextBinding, :QWORD,:QWORD
PROTO64 external,RpcSsGetThreadHandle, 
PROTO64 external,RpcSsSetClientAllocFree, :QWORD,:QWORD
PROTO64 external,RpcSsSetThreadHandle, :QWORD
PROTO64 external,RpcSsSwapClientAllocFree, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcStringBindingComposeA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcStringBindingComposeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcStringBindingParseA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcStringBindingParseW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcStringFreeA, :QWORD
PROTO64 external,RpcStringFreeW, :QWORD
PROTO64 external,RpcTestCancel, 
PROTO64 external,RpcUserFree, :QWORD,:QWORD
PROTO64 external,TowerConstruct, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TowerExplode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UuidCompare, :QWORD,:QWORD,:QWORD
PROTO64 external,UuidCreate, :QWORD
PROTO64 external,UuidCreateNil, :QWORD
PROTO64 external,UuidCreateSequential, :QWORD
PROTO64 external,UuidEqual, :QWORD,:QWORD,:QWORD
PROTO64 external,UuidFromStringA, :QWORD,:QWORD
PROTO64 external,UuidFromStringW, :QWORD,:QWORD
PROTO64 external,UuidHash, :QWORD,:QWORD
PROTO64 external,UuidIsNil, :QWORD,:QWORD
PROTO64 external,UuidToStringA, :QWORD,:QWORD
PROTO64 external,UuidToStringW, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rpcrt4.inc
echo -----------------------------------------
ENDIF

