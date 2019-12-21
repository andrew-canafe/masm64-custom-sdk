IFNDEF SCESRV_INC
SCESRV_INC equ <1>

PROTO64 external,ScesrvInitializeServer, :QWORD
PROTO64 external,ScesrvTerminateServer, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file scesrv.inc
echo -----------------------------------------
ENDIF

