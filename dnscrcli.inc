IFNDEF DNSCRCLI_INC
DNSCRCLI_INC equ <1>

PROTO64 external,DNS_RPC_HANDLE_bind, :QWORD
PROTO64 external,DNS_RPC_HANDLE_unbind, :QWORD,:QWORD
PROTO64 external,MIDL_user_allocate, :QWORD
PROTO64 external,MIDL_user_free, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dnscrcli.inc
echo -----------------------------------------
ENDIF

