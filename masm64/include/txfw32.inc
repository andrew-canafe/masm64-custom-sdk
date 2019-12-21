IFNDEF TXFW32_INC
TXFW32_INC equ <1>

PROTO64 external,TxfGetThreadMiniVersionForCreate, :QWORD
PROTO64 external,TxfLogCreateFileReadContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TxfLogCreateRangeReadContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TxfLogDestroyReadContext, :QWORD
PROTO64 external,TxfLogReadRecords, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TxfLogRecordGetFileName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TxfLogRecordGetGenericType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TxfReadMetadataInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TxfSetThreadMiniVersionForCreate, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file txfw32.inc
echo -----------------------------------------
ENDIF

