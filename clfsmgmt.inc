IFNDEF CLFSMGMT_INC
CLFSMGMT_INC equ <1>

PROTO64 external,ClfsLsnContainer, :QWORD
PROTO64 external,ClfsLsnCreate, :QWORD,:QWORD,:QWORD
PROTO64 external,ClfsLsnGreater, :QWORD,:QWORD
PROTO64 external,ClfsMgmtDeregisterManagedClient, :QWORD
PROTO64 external,ClfsMgmtHandleLogFileFull, :QWORD
PROTO64 external,ClfsMgmtInstallPolicy, :QWORD,:QWORD,:QWORD
PROTO64 external,ClfsMgmtQueryPolicy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClfsMgmtRegisterManagedClient, :QWORD,:QWORD,:QWORD
PROTO64 external,ClfsMgmtRemovePolicy, :QWORD,:QWORD
PROTO64 external,ClfsMgmtSetLogFileSize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClfsMgmtSetLogFileSizeAsClient, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClfsMgmtTailAdvanceFailure, :QWORD,:QWORD
PROTO64 external,ExInitializeFastMutex, :QWORD
PROTO64 external,ExInitializeWorkItem, :QWORD,:QWORD,:QWORD
PROTO64 external,FatalListEntryError, :QWORD,:QWORD,:QWORD
PROTO64 external,InitializeListHead, :QWORD
PROTO64 external,InsertHeadList, :QWORD,:QWORD
PROTO64 external,InsertTailList, :QWORD,:QWORD
PROTO64 external,IoGetCurrentIrpStackLocation, :QWORD
PROTO64 external,IsListEmpty, :QWORD
PROTO64 external,KeGetCurrentThread, 
PROTO64 external,PsGetCurrentThread, 
PROTO64 external,RemoveEntryList, :QWORD
PROTO64 external,RemoveHeadList, :QWORD
PROTO64 external,RtlFailFast, :QWORD
PROTO64 external,_ObReferenceObjectByHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file clfsmgmt.inc
echo -----------------------------------------
ENDIF

