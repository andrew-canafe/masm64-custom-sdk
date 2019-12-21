IFNDEF BASESRV_INC
BASESRV_INC equ <1>

PROTO64 external,BaseGetProcessCrtlRoutine, :QWORD,:QWORD
PROTO64 external,BaseSetProcessCreateNotify, :QWORD
PROTO64 external,BaseSrvNlsLogon, :QWORD
PROTO64 external,BaseSrvNlsUpdateRegistryCache, :QWORD,:QWORD
PROTO64 external,BaseSrvRegisterSxS, :QWORD
PROTO64 external,ServerDllInitialization, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file basesrv.inc
echo -----------------------------------------
ENDIF

