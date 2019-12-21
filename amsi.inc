IFNDEF AMSI_INC
AMSI_INC equ <1>

PROTO64 external,AmsiCloseSession, :QWORD,:QWORD
PROTO64 external,AmsiInitialize, :QWORD,:QWORD
PROTO64 external,AmsiOpenSession, :QWORD,:QWORD
PROTO64 external,AmsiScanBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AmsiScanString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AmsiUacInitialize, :QWORD
PROTO64 external,AmsiUacScan, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AmsiUacUninitialize, :QWORD
PROTO64 external,AmsiUninitialize, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file amsi.inc
echo -----------------------------------------
ENDIF

