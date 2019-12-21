IFNDEF SRCLIENT_INC
SRCLIENT_INC equ <1>

PROTO64 external,DisableSR, :QWORD
PROTO64 external,DisableSRInternal, :QWORD,:QWORD
PROTO64 external,EnableSR, :QWORD
PROTO64 external,EnableSREx, :QWORD,:QWORD
PROTO64 external,EnableSRInternal, :QWORD,:QWORD
PROTO64 external,HRESULT_FROM_WIN32, :QWORD
PROTO64 external,SRNewSystemId, 
PROTO64 external,SRRemoveRestorePoint, :QWORD
PROTO64 external,SRSetRestorePointA, :QWORD,:QWORD
PROTO64 external,SRSetRestorePointInternal, :QWORD,:QWORD,:QWORD
PROTO64 external,SRSetRestorePointW, :QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file srclient.inc
echo -----------------------------------------
ENDIF

