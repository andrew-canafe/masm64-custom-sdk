IFNDEF MSPBASE_INC
MSPBASE_INC equ <1>

PROTO64 external,HRESULT_FROM_WIN32, :QWORD
PROTO64 external,MspBase_IsBadCodePtrNoSeh, :QWORD
PROTO64 external,MspBase_IsBadReadPtrNoSeh, :QWORD,:QWORD
PROTO64 external,MspBase_IsBadStringPtrANoSeh, :QWORD,:QWORD
PROTO64 external,MspBase_IsBadStringPtrWNoSeh, :QWORD,:QWORD
PROTO64 external,MspBase_IsBadWritePtrNoSeh, :QWORD,:QWORD
PROTO64 external,gfThreadProc, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mspbase.inc
echo -----------------------------------------
ENDIF

