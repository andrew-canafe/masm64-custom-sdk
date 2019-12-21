IFNDEF NTSTC_MSVCRT_INC
NTSTC_MSVCRT_INC equ <1>

PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntstc_msvcrt.inc
echo -----------------------------------------
ENDIF

