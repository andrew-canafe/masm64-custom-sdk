IFNDEF DRTPROV_INC
DRTPROV_INC equ <1>

PROTO64 external,DrtCreateDerivedKey, :QWORD,:QWORD
PROTO64 external,DrtCreateDerivedKeySecurityProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,DrtCreateDnsBootstrapResolver, :QWORD,:QWORD,:QWORD
PROTO64 external,DrtCreateNullSecurityProvider, :QWORD
PROTO64 external,DrtCreatePnrpBootstrapResolver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrtDeleteDerivedKeySecurityProvider, :QWORD
PROTO64 external,DrtDeleteDnsBootstrapResolver, :QWORD
PROTO64 external,DrtDeleteNullSecurityProvider, :QWORD
PROTO64 external,DrtDeletePnrpBootstrapResolver, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file drtprov.inc
echo -----------------------------------------
ENDIF

