IFNDEF SCARDDLG_INC
SCARDDLG_INC equ <1>

PROTO64 external,GetOpenCardNameA, :QWORD
PROTO64 external,GetOpenCardNameW, :QWORD
PROTO64 external,SCardDlgExtendedError, 
PROTO64 external,SCardUIDlgSelectCardA, :QWORD
PROTO64 external,SCardUIDlgSelectCardW, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file scarddlg.inc
echo -----------------------------------------
ENDIF

