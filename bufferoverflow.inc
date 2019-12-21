IFNDEF BUFFEROVERFLOW_INC
BUFFEROVERFLOW_INC equ <1>

PROTO64 external,NtGetTickCount, 
PROTO64 external,ReadAcquire, :QWORD
PROTO64 external,ReadNoFence, :QWORD
PROTO64 external,ReadULongAcquire, :QWORD
PROTO64 external,ReadULongNoFence, :QWORD
PROTO64 external,_DllMainCRTStartupForGS2, :QWORD,:QWORD,:QWORD
PROTO64 external,_DllMainCRTStartupForGS, :QWORD,:QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,guard_check_icall, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file bufferoverflow.inc
echo -----------------------------------------
ENDIF

