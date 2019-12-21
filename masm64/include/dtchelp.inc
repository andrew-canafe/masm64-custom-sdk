IFNDEF DTCHELP_INC
DTCHELP_INC equ <1>

PROTO64 external,HRESULT_FROM_WIN32, :QWORD
PROTO64 external,_InlineInterlockedCompareExchangePointer, :QWORD,:QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dtchelp.inc
echo -----------------------------------------
ENDIF

