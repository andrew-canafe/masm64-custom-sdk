IFNDEF STRSAFE_INC
STRSAFE_INC equ <1>

PROTO64 external,StringCopyWorkerA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringCopyWorkerW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringExHandleFillBehindNullA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringExHandleFillBehindNullW, :QWORD,:QWORD,:QWORD
PROTO64 external,StringExHandleOtherFlagsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringExHandleOtherFlagsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringExValidateDestA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringExValidateDestAndLengthA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringExValidateDestAndLengthW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringExValidateDestW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringExValidateSrcA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringExValidateSrcW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringLengthWorkerA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringLengthWorkerW, :QWORD,:QWORD,:QWORD
PROTO64 external,StringVPrintfWorkerA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringVPrintfWorkerW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringVPrintf_lWorkerA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringVPrintf_lWorkerW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringValidateDestA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringValidateDestAndLengthA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringValidateDestAndLengthW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringValidateDestW, :QWORD,:QWORD,:QWORD
PROTO64 external,_StringVPrintf_lWorkerA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file strsafe.inc
echo -----------------------------------------
ENDIF

