IFNDEF AUDIOBASEPROCESSINGOBJECT_INC
AUDIOBASEPROCESSINGOBJECT_INC equ <1>

PROTO64 external,EnumerateAPOs, :QWORD,:QWORD
PROTO64 external,GetAPOProperties, :QWORD,:QWORD
PROTO64 external,HRESULT_FROM_WIN32, :QWORD
PROTO64 external,IsEqualGUID, :QWORD,:QWORD
PROTO64 external,RegisterAPO, :QWORD
PROTO64 external,RegisterAPONotification, :QWORD
PROTO64 external,UnregisterAPO, :QWORD
PROTO64 external,UnregisterAPONotification, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file audiobaseprocessingobject.inc
echo -----------------------------------------
ENDIF

