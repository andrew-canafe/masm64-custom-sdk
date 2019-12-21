IFNDEF WIAUTIL_INC
WIAUTIL_INC equ <1>

PROTO64 external,HRESULT_FROM_WIN32, :QWORD
PROTO64 external,IsEqualGUID, :QWORD,:QWORD
PROTO64 external,PropVariantInit, :QWORD
PROTO64 external,StringCbCopyA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCbCopyW, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCopyA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringCchVPrintfA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD
PROTO64 external,wiauDbgHelper, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiauDbgInit, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wiautil.inc
echo -----------------------------------------
ENDIF

