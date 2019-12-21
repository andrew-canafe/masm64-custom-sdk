IFNDEF SAS_INC
SAS_INC equ <1>

PROTO64 external,SendSAS, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sas.inc
echo -----------------------------------------
ENDIF

