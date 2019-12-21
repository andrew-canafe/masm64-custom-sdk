IFNDEF KTMW32_INC
KTMW32_INC equ <1>

PROTO64 external,CommitComplete, :QWORD,:QWORD
PROTO64 external,CommitEnlistment, :QWORD,:QWORD
PROTO64 external,CommitTransaction, :QWORD
PROTO64 external,CommitTransactionAsync, :QWORD
PROTO64 external,CreateEnlistment, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateResourceManager, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateTransaction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateTransactionManager, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCurrentClockTransactionManager, :QWORD,:QWORD
PROTO64 external,GetEnlistmentId, :QWORD,:QWORD
PROTO64 external,GetEnlistmentRecoveryInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNotificationResourceManager, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNotificationResourceManagerAsync, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetTransactionId, :QWORD,:QWORD
PROTO64 external,GetTransactionInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetTransactionManagerId, :QWORD,:QWORD
PROTO64 external,OpenEnlistment, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenResourceManager, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenTransaction, :QWORD,:QWORD
PROTO64 external,OpenTransactionManager, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenTransactionManagerById, :QWORD,:QWORD,:QWORD
PROTO64 external,PrePrepareComplete, :QWORD,:QWORD
PROTO64 external,PrePrepareEnlistment, :QWORD,:QWORD
PROTO64 external,PrepareComplete, :QWORD,:QWORD
PROTO64 external,PrepareEnlistment, :QWORD,:QWORD
PROTO64 external,PrivCreateTransaction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PrivIsLogWritableTransactionManager, :QWORD
PROTO64 external,PrivPropagationComplete, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PrivPropagationFailed, :QWORD,:QWORD
PROTO64 external,PrivRegisterProtocolAddressInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadOnlyEnlistment, :QWORD,:QWORD
PROTO64 external,RecoverEnlistment, :QWORD,:QWORD
PROTO64 external,RecoverResourceManager, :QWORD
PROTO64 external,RecoverTransactionManager, :QWORD
PROTO64 external,RenameTransactionManager, :QWORD,:QWORD
PROTO64 external,RollbackComplete, :QWORD,:QWORD
PROTO64 external,RollbackEnlistment, :QWORD,:QWORD
PROTO64 external,RollbackTransaction, :QWORD
PROTO64 external,RollbackTransactionAsync, :QWORD
PROTO64 external,RollforwardTransactionManager, :QWORD,:QWORD
PROTO64 external,SetEnlistmentRecoveryInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,SetResourceManagerCompletionPort, :QWORD,:QWORD,:QWORD
PROTO64 external,SetTransactionInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SinglePhaseReject, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ktmw32.inc
echo -----------------------------------------
ENDIF

