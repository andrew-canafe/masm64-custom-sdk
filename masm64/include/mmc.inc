IFNDEF MMC_INC
MMC_INC equ <1>

PROTO64 external,MMCAfxPropPageCallback, :QWORD,:QWORD
PROTO64 external,MMCFreeNotifyHandle, :QWORD
PROTO64 external,MMCIsMTNodeValid, :QWORD,:QWORD
PROTO64 external,MMCPropPageCallback, :QWORD
PROTO64 external,MMCPropertyChangeNotify, :QWORD,:QWORD
PROTO64 external,MMCPropertyHelp, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mmc.inc
echo -----------------------------------------
ENDIF

