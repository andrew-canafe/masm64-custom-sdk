IFNDEF SPORDER_INC
SPORDER_INC equ <1>

PROTO64 external,WSCWriteNameSpaceOrder, :QWORD,:QWORD
PROTO64 external,WSCWriteProviderOrder, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sporder.inc
echo -----------------------------------------
ENDIF

