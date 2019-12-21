IFNDEF AUX_ULIB_INC
AUX_ULIB_INC equ <1>

PROTO64 external,AuxUlibInitialize, 
PROTO64 external,AuxUlibIsDLLSynchronizationHeld, :QWORD
PROTO64 external,AuxUlibSetSystemFileCacheSize, :QWORD,:QWORD,:QWORD
PROTO64 external,Win9xCheckDllSynchronization, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file aux_ulib.inc
echo -----------------------------------------
ENDIF

