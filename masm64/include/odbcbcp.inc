IFNDEF ODBCBCP_INC
ODBCBCP_INC equ <1>

PROTO64 external,LibMain, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLCloseEnumServers, :QWORD
PROTO64 external,SQLGetNextEnumeration, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLInitEnumServers, :QWORD,:QWORD
PROTO64 external,SQLLinkedCatalogsA, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLLinkedCatalogsW, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLLinkedServers, :QWORD
PROTO64 external,bcp_batch, :QWORD
PROTO64 external,bcp_bind, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,bcp_colfmt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,bcp_collen, :QWORD,:QWORD,:QWORD
PROTO64 external,bcp_colptr, :QWORD,:QWORD,:QWORD
PROTO64 external,bcp_columns, :QWORD,:QWORD
PROTO64 external,bcp_control, :QWORD,:QWORD,:QWORD
PROTO64 external,bcp_done, :QWORD
PROTO64 external,bcp_exec, :QWORD,:QWORD
PROTO64 external,bcp_getcolfmt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,bcp_initA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,bcp_initW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,bcp_moretext, :QWORD,:QWORD,:QWORD
PROTO64 external,bcp_readfmtA, :QWORD,:QWORD
PROTO64 external,bcp_readfmtW, :QWORD,:QWORD
PROTO64 external,bcp_sendrow, :QWORD
PROTO64 external,bcp_setcolfmt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,bcp_writefmtA, :QWORD,:QWORD
PROTO64 external,bcp_writefmtW, :QWORD,:QWORD
PROTO64 external,dbprtypeA, :QWORD
PROTO64 external,dbprtypeW, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file odbcbcp.inc
echo -----------------------------------------
ENDIF

