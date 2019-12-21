IFNDEF OLE32_INC
OLE32_INC equ <1>

PROTO64 external,BindMoniker, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CLIPFORMAT_UserFree, :QWORD,:QWORD
PROTO64 external,CLIPFORMAT_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,CLIPFORMAT_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,CLIPFORMAT_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,CLSIDFromProgID, :QWORD,:QWORD
PROTO64 external,CLSIDFromProgIDEx, :QWORD,:QWORD
PROTO64 external,CLSIDFromString, :QWORD,:QWORD
PROTO64 external,CStdAsyncStubBuffer2_Connect, :QWORD,:QWORD
PROTO64 external,CStdAsyncStubBuffer2_Disconnect, :QWORD
PROTO64 external,CStdAsyncStubBuffer2_Release, :QWORD
PROTO64 external,CStdAsyncStubBuffer_AddRef, :QWORD
PROTO64 external,CStdAsyncStubBuffer_Connect, :QWORD,:QWORD
PROTO64 external,CStdAsyncStubBuffer_Disconnect, :QWORD
PROTO64 external,CStdAsyncStubBuffer_Invoke, :QWORD,:QWORD,:QWORD
PROTO64 external,CStdAsyncStubBuffer_QueryInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,CStdAsyncStubBuffer_Release, :QWORD
PROTO64 external,CStdStubBuffer2_Connect, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer2_CountRefs, :QWORD
PROTO64 external,CStdStubBuffer2_Disconnect, :QWORD
PROTO64 external,CStdStubBuffer2_QueryInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,CoAddRefServerProcess, 
PROTO64 external,CoAllowSetForegroundWindow, :QWORD,:QWORD
PROTO64 external,CoAllowUnmarshalerCLSID, :QWORD
PROTO64 external,CoBuildVersion, 
PROTO64 external,CoCancelCall, :QWORD,:QWORD
PROTO64 external,CoCopyProxy, :QWORD,:QWORD
PROTO64 external,CoCreateFreeThreadedMarshaler, :QWORD,:QWORD
PROTO64 external,CoCreateGuid, :QWORD
PROTO64 external,CoCreateInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoCreateInstanceEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoCreateInstanceFromApp, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoCreateObjectInContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoDeactivateObject, :QWORD,:QWORD
PROTO64 external,CoDecodeProxy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoDecrementMTAUsage, :QWORD
PROTO64 external,CoDisableCallCancellation, :QWORD
PROTO64 external,CoDisconnectContext, :QWORD
PROTO64 external,CoDisconnectObject, :QWORD,:QWORD
PROTO64 external,CoDosDateTimeToFileTime, :QWORD,:QWORD,:QWORD
PROTO64 external,CoEnableCallCancellation, :QWORD
PROTO64 external,CoFileTimeNow, :QWORD
PROTO64 external,CoFileTimeToDosDateTime, :QWORD,:QWORD,:QWORD
PROTO64 external,CoFreeAllLibraries, 
PROTO64 external,CoFreeLibrary, :QWORD
PROTO64 external,CoFreeUnusedLibraries, 
PROTO64 external,CoFreeUnusedLibrariesEx, :QWORD,:QWORD
PROTO64 external,CoGetApartmentID, :QWORD,:QWORD
PROTO64 external,CoGetApartmentType, :QWORD,:QWORD
PROTO64 external,CoGetCallContext, :QWORD,:QWORD
PROTO64 external,CoGetCallerTID, :QWORD
PROTO64 external,CoGetCancelObject, :QWORD,:QWORD,:QWORD
PROTO64 external,CoGetClassObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoGetClassVersion, :QWORD,:QWORD,:QWORD
PROTO64 external,CoGetComCatalog, :QWORD,:QWORD
PROTO64 external,CoGetContextToken, :QWORD
PROTO64 external,CoGetCurrentLogicalThreadId, :QWORD
PROTO64 external,CoGetCurrentProcess, 
PROTO64 external,CoGetDefaultContext, :QWORD,:QWORD,:QWORD
PROTO64 external,CoGetInstanceFromFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoGetInstanceFromIStorage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoGetInterceptor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoGetInterceptorFromTypeInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoGetInterfaceAndReleaseStream, :QWORD,:QWORD,:QWORD
PROTO64 external,CoGetMalloc, :QWORD,:QWORD
PROTO64 external,CoGetMarshalSizeMax, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoGetObject, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoGetObjectContext, :QWORD,:QWORD
PROTO64 external,CoGetPSClsid, :QWORD,:QWORD
PROTO64 external,CoGetProcessIdentifier, :QWORD
PROTO64 external,CoGetStandardMarshal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoGetStdMarshalEx, :QWORD,:QWORD,:QWORD
PROTO64 external,CoGetSystemSecurityPermissions, :QWORD,:QWORD
PROTO64 external,CoGetTreatAsClass, :QWORD,:QWORD
PROTO64 external,CoHandlePriorityEventsFromMessagePump, 
PROTO64 external,CoImpersonateClient, 
PROTO64 external,CoIncrementMTAUsage, :QWORD
PROTO64 external,CoInitialize, :QWORD
PROTO64 external,CoInitializeEx, :QWORD,:QWORD
PROTO64 external,CoInitializeSecurity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInitializeWOW, :QWORD,:QWORD
PROTO64 external,CoInstall, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInvalidateRemoteMachineBindings, :QWORD
PROTO64 external,CoIsHandlerConnected, :QWORD
PROTO64 external,CoIsOle1Class, :QWORD
PROTO64 external,CoLoadLibrary, :QWORD,:QWORD
PROTO64 external,CoLockObjectExternal, :QWORD,:QWORD,:QWORD
PROTO64 external,CoMarshalHresult, :QWORD,:QWORD
PROTO64 external,CoMarshalInterThreadInterfaceInStream, :QWORD,:QWORD,:QWORD
PROTO64 external,CoMarshalInterface, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoQueryAuthenticationServices, :QWORD,:QWORD
PROTO64 external,CoQueryClientBlanket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoQueryProxyBlanket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoQueryReleaseObject, :QWORD
PROTO64 external,CoReactivateObject, :QWORD,:QWORD
PROTO64 external,CoRegisterActivationFilter, :QWORD
PROTO64 external,CoRegisterChannelHook, :QWORD,:QWORD
PROTO64 external,CoRegisterClassObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoRegisterInitializeSpy, :QWORD,:QWORD
PROTO64 external,CoRegisterMallocSpy, :QWORD
PROTO64 external,CoRegisterMessageFilter, :QWORD,:QWORD
PROTO64 external,CoRegisterPSClsid, :QWORD,:QWORD
PROTO64 external,CoRegisterSurrogate, :QWORD
PROTO64 external,CoRegisterSurrogateEx, :QWORD,:QWORD
PROTO64 external,CoReleaseMarshalData, :QWORD
PROTO64 external,CoReleaseServerProcess, 
PROTO64 external,CoResumeClassObjects, 
PROTO64 external,CoRetireServer, :QWORD
PROTO64 external,CoRevertToSelf, 
PROTO64 external,CoRevokeClassObject, :QWORD
PROTO64 external,CoRevokeInitializeSpy, :QWORD,:QWORD
PROTO64 external,CoRevokeMallocSpy, 
PROTO64 external,CoSetCancelObject, :QWORD
PROTO64 external,CoSetMessageDispatcher, :QWORD
PROTO64 external,CoSetProxyBlanket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoSuspendClassObjects, 
PROTO64 external,CoSwitchCallContext, :QWORD,:QWORD
PROTO64 external,CoTaskMemAlloc, :QWORD
PROTO64 external,CoTaskMemFree, :QWORD
PROTO64 external,CoTaskMemRealloc, :QWORD,:QWORD
PROTO64 external,CoTestCancel, 
PROTO64 external,CoTreatAsClass, :QWORD,:QWORD
PROTO64 external,CoUninitialize, 
PROTO64 external,CoUnloadingWOW, :QWORD
PROTO64 external,CoUnmarshalHresult, :QWORD,:QWORD
PROTO64 external,CoUnmarshalInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,CoWaitForMultipleHandles, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoWaitForMultipleObjects, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ComPs_NdrDllCanUnloadNow, :QWORD
PROTO64 external,ComPs_NdrDllGetClassObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ComPs_NdrDllRegisterProxy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ComPs_NdrDllUnregisterProxy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateAntiMoniker, :QWORD
PROTO64 external,CreateBindCtx, :QWORD,:QWORD
PROTO64 external,CreateClassMoniker, :QWORD,:QWORD
PROTO64 external,CreateDataAdviseHolder, :QWORD
PROTO64 external,CreateDataCache, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateFileMoniker, :QWORD,:QWORD
PROTO64 external,CreateGenericComposite, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateILockBytesOnHGlobal, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateItemMoniker, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateObjrefMoniker, :QWORD,:QWORD
PROTO64 external,CreateOleAdviseHolder, :QWORD
PROTO64 external,CreatePointerMoniker, :QWORD,:QWORD
PROTO64 external,CreateStdProgressIndicator, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateStreamOnHGlobal, :QWORD,:QWORD,:QWORD
PROTO64 external,DcomChannelSetHResult, :QWORD,:QWORD,:QWORD
PROTO64 external,DllDebugObjectRPCHook, :QWORD,:QWORD
PROTO64 external,DllGetClassObjectWOW, :QWORD,:QWORD,:QWORD
PROTO64 external,DoDragDrop, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnableHookObject, :QWORD,:QWORD
PROTO64 external,FmtIdToPropStgName, :QWORD,:QWORD
PROTO64 external,FreePropVariantArray, :QWORD,:QWORD
PROTO64 external,GetActiveObjectExt, :QWORD,:QWORD,:QWORD
PROTO64 external,GetClassFile, :QWORD,:QWORD
PROTO64 external,GetConvertStg, :QWORD
PROTO64 external,GetDocumentBitStg, :QWORD
PROTO64 external,GetHGlobalFromILockBytes, :QWORD,:QWORD
PROTO64 external,GetHGlobalFromStream, :QWORD,:QWORD
PROTO64 external,GetHookInterface, :QWORD
PROTO64 external,GetRunningObjectTable, :QWORD,:QWORD
PROTO64 external,HACCEL_UserFree, :QWORD,:QWORD
PROTO64 external,HACCEL_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HACCEL_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HACCEL_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HBITMAP_UserFree, :QWORD,:QWORD
PROTO64 external,HBITMAP_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HBITMAP_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HBITMAP_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HBRUSH_UserFree, :QWORD,:QWORD
PROTO64 external,HBRUSH_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HBRUSH_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HBRUSH_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HDC_UserFree, :QWORD,:QWORD
PROTO64 external,HDC_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HDC_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HDC_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HENHMETAFILE_UserFree, :QWORD,:QWORD
PROTO64 external,HENHMETAFILE_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HENHMETAFILE_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HENHMETAFILE_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HGLOBAL_UserFree, :QWORD,:QWORD
PROTO64 external,HGLOBAL_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HGLOBAL_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HGLOBAL_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HICON_UserFree, :QWORD,:QWORD
PROTO64 external,HICON_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HICON_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HICON_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HMENU_UserFree, :QWORD,:QWORD
PROTO64 external,HMENU_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HMENU_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HMENU_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HMETAFILEPICT_UserFree, :QWORD,:QWORD
PROTO64 external,HMETAFILEPICT_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HMETAFILEPICT_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HMETAFILEPICT_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HMETAFILE_UserFree, :QWORD,:QWORD
PROTO64 external,HMETAFILE_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HMETAFILE_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HMETAFILE_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HMONITOR_UserFree, :QWORD,:QWORD
PROTO64 external,HMONITOR_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HMONITOR_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HMONITOR_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HPALETTE_UserFree, :QWORD,:QWORD
PROTO64 external,HPALETTE_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HPALETTE_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HPALETTE_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HWND_UserFree, :QWORD,:QWORD
PROTO64 external,HWND_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HWND_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HWND_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HkOleRegisterObject, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IIDFromString, :QWORD,:QWORD
PROTO64 external,IsAccelerator, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsEqualGUID, :QWORD,:QWORD
PROTO64 external,MkParseDisplayName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MonikerCommonPrefixWith, :QWORD,:QWORD,:QWORD
PROTO64 external,MonikerRelativePathTo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrProxyForwardingFunction10, 
PROTO64 external,NdrProxyForwardingFunction11, 
PROTO64 external,NdrProxyForwardingFunction12, 
PROTO64 external,NdrProxyForwardingFunction13, 
PROTO64 external,NdrProxyForwardingFunction14, 
PROTO64 external,NdrProxyForwardingFunction15, 
PROTO64 external,NdrProxyForwardingFunction16, 
PROTO64 external,NdrProxyForwardingFunction17, 
PROTO64 external,NdrProxyForwardingFunction18, 
PROTO64 external,NdrProxyForwardingFunction19, 
PROTO64 external,NdrProxyForwardingFunction20, 
PROTO64 external,NdrProxyForwardingFunction21, 
PROTO64 external,NdrProxyForwardingFunction22, 
PROTO64 external,NdrProxyForwardingFunction23, 
PROTO64 external,NdrProxyForwardingFunction24, 
PROTO64 external,NdrProxyForwardingFunction25, 
PROTO64 external,NdrProxyForwardingFunction26, 
PROTO64 external,NdrProxyForwardingFunction27, 
PROTO64 external,NdrProxyForwardingFunction28, 
PROTO64 external,NdrProxyForwardingFunction29, 
PROTO64 external,NdrProxyForwardingFunction30, 
PROTO64 external,NdrProxyForwardingFunction31, 
PROTO64 external,NdrProxyForwardingFunction32, 
PROTO64 external,NdrProxyForwardingFunction3, 
PROTO64 external,NdrProxyForwardingFunction4, 
PROTO64 external,NdrProxyForwardingFunction5, 
PROTO64 external,NdrProxyForwardingFunction6, 
PROTO64 external,NdrProxyForwardingFunction7, 
PROTO64 external,NdrProxyForwardingFunction8, 
PROTO64 external,NdrProxyForwardingFunction9, 
PROTO64 external,ObjectStublessClient10, 
PROTO64 external,ObjectStublessClient11, 
PROTO64 external,ObjectStublessClient12, 
PROTO64 external,ObjectStublessClient13, 
PROTO64 external,ObjectStublessClient14, 
PROTO64 external,ObjectStublessClient15, 
PROTO64 external,ObjectStublessClient16, 
PROTO64 external,ObjectStublessClient17, 
PROTO64 external,ObjectStublessClient18, 
PROTO64 external,ObjectStublessClient19, 
PROTO64 external,ObjectStublessClient20, 
PROTO64 external,ObjectStublessClient21, 
PROTO64 external,ObjectStublessClient22, 
PROTO64 external,ObjectStublessClient23, 
PROTO64 external,ObjectStublessClient24, 
PROTO64 external,ObjectStublessClient25, 
PROTO64 external,ObjectStublessClient26, 
PROTO64 external,ObjectStublessClient27, 
PROTO64 external,ObjectStublessClient28, 
PROTO64 external,ObjectStublessClient29, 
PROTO64 external,ObjectStublessClient30, 
PROTO64 external,ObjectStublessClient31, 
PROTO64 external,ObjectStublessClient32, 
PROTO64 external,ObjectStublessClient3, 
PROTO64 external,ObjectStublessClient4, 
PROTO64 external,ObjectStublessClient5, 
PROTO64 external,ObjectStublessClient6, 
PROTO64 external,ObjectStublessClient7, 
PROTO64 external,ObjectStublessClient8, 
PROTO64 external,ObjectStublessClient9, 
PROTO64 external,Ole32DllGetClassObject, :QWORD,:QWORD,:QWORD
PROTO64 external,OleBuildVersion, 
PROTO64 external,OleConvertIStorageToOLESTREAM, :QWORD,:QWORD
PROTO64 external,OleConvertIStorageToOLESTREAMEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleConvertOLESTREAMToIStorage, :QWORD,:QWORD,:QWORD
PROTO64 external,OleConvertOLESTREAMToIStorageEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateDefaultHandler, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateEmbeddingHelper, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateFontIndirectExt, :QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateFromData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateFromDataEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateFromFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateFromFileEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateLink, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateLinkEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateLinkFromData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateLinkFromDataEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateLinkToFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateLinkToFileEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreateMenuDescriptor, :QWORD,:QWORD
PROTO64 external,OleCreatePictureIndirectExt, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleCreatePropertyFrameIndirectExt, :QWORD
PROTO64 external,OleCreateStaticFromData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleDestroyMenuDescriptor, :QWORD
PROTO64 external,OleDoAutoConvert, :QWORD,:QWORD
PROTO64 external,OleDraw, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleDuplicateData, :QWORD,:QWORD,:QWORD
PROTO64 external,OleFlushClipboard, 
PROTO64 external,OleGetAutoConvert, :QWORD,:QWORD
PROTO64 external,OleGetClipboard, :QWORD
PROTO64 external,OleGetIconOfClass, :QWORD,:QWORD,:QWORD
PROTO64 external,OleGetIconOfFile, :QWORD,:QWORD
PROTO64 external,OleIconToCursorExt, :QWORD,:QWORD
PROTO64 external,OleInitialize, :QWORD
PROTO64 external,OleInitializeWOW, :QWORD,:QWORD
PROTO64 external,OleIsCurrentClipboard, :QWORD
PROTO64 external,OleIsRunning, :QWORD
PROTO64 external,OleLoad, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleLoadFromStream, :QWORD,:QWORD,:QWORD
PROTO64 external,OleLoadPictureExt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleLoadPictureFileExt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleLoadPicturePathExt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleLockRunning, :QWORD,:QWORD,:QWORD
PROTO64 external,OleMetafilePictFromIconAndLabel, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleNoteObjectVisible, :QWORD,:QWORD
PROTO64 external,OleQueryCreateFromData, :QWORD
PROTO64 external,OleQueryLinkFromData, :QWORD
PROTO64 external,OleRegEnumFormatEtc, :QWORD,:QWORD,:QWORD
PROTO64 external,OleRegEnumVerbs, :QWORD,:QWORD
PROTO64 external,OleRegGetMiscStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,OleRegGetUserType, :QWORD,:QWORD,:QWORD
PROTO64 external,OleRun, :QWORD
PROTO64 external,OleSave, :QWORD,:QWORD,:QWORD
PROTO64 external,OleSavePictureFileExt, :QWORD,:QWORD
PROTO64 external,OleSaveToStream, :QWORD,:QWORD
PROTO64 external,OleSetAutoConvert, :QWORD,:QWORD
PROTO64 external,OleSetClipboard, :QWORD
PROTO64 external,OleSetContainedObject, :QWORD,:QWORD
PROTO64 external,OleSetMenuDescriptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleTranslateAccelerator, :QWORD,:QWORD,:QWORD
PROTO64 external,OleTranslateColorExt, :QWORD,:QWORD,:QWORD
PROTO64 external,OleUninitialize, 
PROTO64 external,OpenOrCreateStream, :QWORD,:QWORD,:QWORD
PROTO64 external,ProgIDFromCLSID, :QWORD,:QWORD
PROTO64 external,PropStgNameToFmtId, :QWORD,:QWORD
PROTO64 external,PropVariantClear, :QWORD
PROTO64 external,PropVariantCopy, :QWORD,:QWORD
PROTO64 external,ReadClassStg, :QWORD,:QWORD
PROTO64 external,ReadClassStm, :QWORD,:QWORD
PROTO64 external,ReadFmtUserTypeStg, :QWORD,:QWORD,:QWORD
PROTO64 external,ReadOleStg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadStringStream, :QWORD,:QWORD
PROTO64 external,RegisterActiveObjectExt, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterDragDrop, :QWORD,:QWORD
PROTO64 external,ReleaseStgMedium, :QWORD
PROTO64 external,RevokeActiveObjectExt, :QWORD,:QWORD
PROTO64 external,RevokeDragDrop, :QWORD
PROTO64 external,RoGetAgileReference, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SNB_UserFree, :QWORD,:QWORD
PROTO64 external,SNB_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,SNB_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,SNB_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,STGMEDIUM_UserFree, :QWORD,:QWORD
PROTO64 external,STGMEDIUM_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,STGMEDIUM_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,STGMEDIUM_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,SetConvertStg, :QWORD,:QWORD
PROTO64 external,SetDocumentBitStg, :QWORD,:QWORD
PROTO64 external,StgConvertPropertyToVariant, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgConvertVariantToProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgCreateDocfile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgCreateDocfileOnILockBytes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgCreatePropSetStg, :QWORD,:QWORD,:QWORD
PROTO64 external,StgCreatePropStg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgCreateStorageEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgGetIFillLockBytesOnFile, :QWORD,:QWORD
PROTO64 external,StgGetIFillLockBytesOnILockBytes, :QWORD,:QWORD
PROTO64 external,StgIsStorageFile, :QWORD
PROTO64 external,StgIsStorageILockBytes, :QWORD
PROTO64 external,StgOpenAsyncDocfileOnIFillLockBytes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgOpenPropStg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgOpenStorage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgOpenStorageEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgOpenStorageOnILockBytes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgPropertyLengthAsVariant, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StgSetTimes, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringFromCLSID, :QWORD,:QWORD
PROTO64 external,StringFromGUID2, :QWORD,:QWORD,:QWORD
PROTO64 external,StringFromIID, :QWORD,:QWORD
PROTO64 external,UpdateDCOMSettings, 
PROTO64 external,UtConvertDvtd16toDvtd32, :QWORD,:QWORD,:QWORD
PROTO64 external,UtConvertDvtd32toDvtd16, :QWORD,:QWORD,:QWORD
PROTO64 external,UtGetDvtd16Info, :QWORD,:QWORD
PROTO64 external,UtGetDvtd32Info, :QWORD,:QWORD
PROTO64 external,WdtpInterfacePointer_UserFree, :QWORD
PROTO64 external,WdtpInterfacePointer_UserMarshal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdtpInterfacePointer_UserSize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdtpInterfacePointer_UserUnmarshal, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteClassStg, :QWORD,:QWORD
PROTO64 external,WriteClassStm, :QWORD,:QWORD
PROTO64 external,WriteFmtUserTypeStg, :QWORD,:QWORD,:QWORD
PROTO64 external,WriteOleStg, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteStringStream, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ole32.inc
echo -----------------------------------------
ENDIF

