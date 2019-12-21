IFNDEF RPCPROXY_INC
RPCPROXY_INC equ <1>

PROTO64 external,GetExtensionVersion, :QWORD
PROTO64 external,GetFilterVersion, :QWORD
PROTO64 external,HttpExtensionProc, :QWORD
PROTO64 external,HttpFilterProc, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rpcproxy.inc
echo -----------------------------------------
ENDIF

