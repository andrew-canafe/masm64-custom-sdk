IFNDEF WDSBP_INC
WDSBP_INC equ <1>

PROTO64 external,WdsBpAddOption, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsBpCloseHandle, :QWORD
PROTO64 external,WdsBpGetOptionBuffer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsBpInitialize, :QWORD,:QWORD
PROTO64 external,WdsBpParseInitialize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsBpParseInitializev6, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WdsBpQueryOption, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wdsbp.inc
echo -----------------------------------------
ENDIF

