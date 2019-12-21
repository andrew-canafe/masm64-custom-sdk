IFNDEF NTSTC_LIBCMT_INC
NTSTC_LIBCMT_INC equ <1>

PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntstc_libcmt.inc
echo -----------------------------------------
ENDIF

