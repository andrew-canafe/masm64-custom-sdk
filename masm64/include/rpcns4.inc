IFNDEF RPCNS4_INC
RPCNS4_INC equ <1>

PROTO64 external,I_RpcNsGetBuffer, :QWORD
PROTO64 external,I_RpcNsNegotiateTransferSyntax, :QWORD
PROTO64 external,I_RpcNsRaiseException, :QWORD,:QWORD
PROTO64 external,I_RpcNsSendReceive, :QWORD,:QWORD
PROTO64 external,I_RpcReBindBuffer, :QWORD
PROTO64 external,RpcIfIdVectorFree, :QWORD
PROTO64 external,RpcNsBindingExportA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingExportPnPA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingExportPnPW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingExportW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingImportBeginA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingImportBeginW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingImportDone, :QWORD
PROTO64 external,RpcNsBindingImportNext, :QWORD,:QWORD
PROTO64 external,RpcNsBindingLookupBeginA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingLookupBeginW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingLookupDone, :QWORD
PROTO64 external,RpcNsBindingLookupNext, :QWORD,:QWORD
PROTO64 external,RpcNsBindingSelect, :QWORD,:QWORD
PROTO64 external,RpcNsBindingUnexportA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingUnexportPnPA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingUnexportPnPW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsBindingUnexportW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsEntryExpandNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsEntryExpandNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsEntryObjectInqBeginA, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsEntryObjectInqBeginW, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsEntryObjectInqDone, :QWORD
PROTO64 external,RpcNsEntryObjectInqNext, :QWORD,:QWORD
PROTO64 external,RpcNsGroupDeleteA, :QWORD,:QWORD
PROTO64 external,RpcNsGroupDeleteW, :QWORD,:QWORD
PROTO64 external,RpcNsGroupMbrAddA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsGroupMbrAddW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsGroupMbrInqBeginA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsGroupMbrInqBeginW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsGroupMbrInqDone, :QWORD
PROTO64 external,RpcNsGroupMbrInqNextA, :QWORD,:QWORD
PROTO64 external,RpcNsGroupMbrInqNextW, :QWORD,:QWORD
PROTO64 external,RpcNsGroupMbrRemoveA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsGroupMbrRemoveW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsMgmtBindingUnexportA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsMgmtBindingUnexportW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsMgmtEntryCreateA, :QWORD,:QWORD
PROTO64 external,RpcNsMgmtEntryCreateW, :QWORD,:QWORD
PROTO64 external,RpcNsMgmtEntryDeleteA, :QWORD,:QWORD
PROTO64 external,RpcNsMgmtEntryDeleteW, :QWORD,:QWORD
PROTO64 external,RpcNsMgmtEntryInqIfIdsA, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsMgmtEntryInqIfIdsW, :QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsMgmtHandleSetExpAge, :QWORD,:QWORD
PROTO64 external,RpcNsMgmtInqExpAge, :QWORD
PROTO64 external,RpcNsMgmtSetExpAge, :QWORD
PROTO64 external,RpcNsProfileDeleteA, :QWORD,:QWORD
PROTO64 external,RpcNsProfileDeleteW, :QWORD,:QWORD
PROTO64 external,RpcNsProfileEltAddA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsProfileEltAddW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsProfileEltInqBeginA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsProfileEltInqBeginW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsProfileEltInqDone, :QWORD
PROTO64 external,RpcNsProfileEltInqNextA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsProfileEltInqNextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsProfileEltRemoveA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcNsProfileEltRemoveW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rpcns4.inc
echo -----------------------------------------
ENDIF

