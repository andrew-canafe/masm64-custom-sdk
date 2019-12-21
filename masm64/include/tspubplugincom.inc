IFNDEF TSPUBPLUGINCOM_INC
TSPUBPLUGINCOM_INC equ <1>

PROTO64 external,BSTR_UserFree, :QWORD,:QWORD
PROTO64 external,BSTR_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,BSTR_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,BSTR_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,CStdStubBuffer2_Connect, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer2_CountRefs, :QWORD
PROTO64 external,CStdStubBuffer2_Disconnect, :QWORD
PROTO64 external,CStdStubBuffer2_QueryInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,CStdStubBuffer2_Release, :QWORD
PROTO64 external,CStdStubBuffer_AddRef, :QWORD
PROTO64 external,CStdStubBuffer_Connect, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer_CountRefs, :QWORD
PROTO64 external,CStdStubBuffer_DebugServerQueryInterface, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer_DebugServerRelease, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer_Disconnect, :QWORD
PROTO64 external,CStdStubBuffer_Invoke, :QWORD,:QWORD,:QWORD
PROTO64 external,CStdStubBuffer_IsIIDSupported, :QWORD,:QWORD
PROTO64 external,CStdStubBuffer_QueryInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,CStdStubBuffer_Release, :QWORD
PROTO64 external,DllCanUnloadNow, 
PROTO64 external,DllGetClassObject, :QWORD,:QWORD,:QWORD
PROTO64 external,GetProxyDllInfo, :QWORD,:QWORD
PROTO64 external,IUnknown_AddRef_Proxy, :QWORD
PROTO64 external,IUnknown_QueryInterface_Proxy, :QWORD,:QWORD,:QWORD
PROTO64 external,IUnknown_Release_Proxy, :QWORD
PROTO64 external,NdrCStdStubBuffer2_Release, :QWORD,:QWORD
PROTO64 external,NdrCStdStubBuffer_Release, :QWORD,:QWORD
PROTO64 external,NdrOleAllocate, :QWORD
PROTO64 external,NdrOleFree, :QWORD
PROTO64 external,NdrProxyForwardingFunction3, 
PROTO64 external,NdrProxyForwardingFunction4, 
PROTO64 external,NdrProxyForwardingFunction5, 
PROTO64 external,NdrProxyForwardingFunction6, 
PROTO64 external,NdrProxyForwardingFunction7, 
PROTO64 external,NdrProxyForwardingFunction8, 
PROTO64 external,NdrStubCall2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdrStubForwardingFunction, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ObjectStublessClient10, 
PROTO64 external,ObjectStublessClient11, 
PROTO64 external,ObjectStublessClient12, 
PROTO64 external,ObjectStublessClient3, 
PROTO64 external,ObjectStublessClient4, 
PROTO64 external,ObjectStublessClient5, 
PROTO64 external,ObjectStublessClient6, 
PROTO64 external,ObjectStublessClient7, 
PROTO64 external,ObjectStublessClient8, 
PROTO64 external,ObjectStublessClient9, 
PROTO64 external,_tspubplugin2com_IID_Lookup, :QWORD,:QWORD
PROTO64 external,_tspubplugincom_IID_Lookup, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tspubplugincom.inc
echo -----------------------------------------
ENDIF

