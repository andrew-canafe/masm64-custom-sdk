IFNDEF RPCUTIL_INC
RPCUTIL_INC equ <1>

PROTO64 external,MIDL_user_allocate, :QWORD
PROTO64 external,MIDL_user_free, :QWORD
PROTO64 external,MIDL_user_reallocate, :QWORD,:QWORD
PROTO64 external,RpcpAddInterface, :QWORD,:QWORD
PROTO64 external,RpcpBindRpc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RpcpDeleteInterface, :QWORD
PROTO64 external,RpcpInitRpcServer, 
PROTO64 external,RpcpStartRpcServer, :QWORD,:QWORD
PROTO64 external,RpcpStopRpcServer, :QWORD
PROTO64 external,RpcpStopRpcServerEx, :QWORD
PROTO64 external,RpcpUnbindRpc, :QWORD
PROTO64 external,RtlStringCbCatW, :QWORD,:QWORD,:QWORD
PROTO64 external,RtlStringCbCopyW, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rpcutil.inc
echo -----------------------------------------
ENDIF

