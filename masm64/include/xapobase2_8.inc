IFNDEF XAPOBASE2_8_INC
XAPOBASE2_8_INC equ <1>

PROTO64 external,MemoryBarrier, 
PROTO64 external,_InlineInterlockedCompareExchangePointer, :QWORD,:QWORD,:QWORD
PROTO64 external,_InlineInterlockedExchangePointer, :QWORD,:QWORD
PROTO64 external,floorf, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file xapobase2_8.inc
echo -----------------------------------------
ENDIF

