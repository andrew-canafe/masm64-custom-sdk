IFNDEF OLESVR32_INC
OLESVR32_INC equ <1>

PROTO64 external,DeleteClientInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,DocWndProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumForTerminate, :QWORD,:QWORD,:QWORD
PROTO64 external,FindItemWnd, :QWORD,:QWORD
PROTO64 external,ItemCallBack, :QWORD,:QWORD,:QWORD
PROTO64 external,ItemWndProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleBlockServer, :QWORD
PROTO64 external,OleQueryServerVersion, 
PROTO64 external,OleRegisterServer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleRegisterServerDoc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleRenameServerDoc, :QWORD,:QWORD
PROTO64 external,OleRevertServerDoc, :QWORD
PROTO64 external,OleRevokeObject, :QWORD
PROTO64 external,OleRevokeServer, :QWORD
PROTO64 external,OleRevokeServerDoc, :QWORD
PROTO64 external,OleSavedServerDoc, :QWORD
PROTO64 external,OleUnblockServer, :QWORD,:QWORD
PROTO64 external,SendDataMsg, :QWORD,:QWORD,:QWORD
PROTO64 external,SendRenameMsg, :QWORD,:QWORD,:QWORD
PROTO64 external,SrvrWndProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TerminateClients, :QWORD,:QWORD,:QWORD
PROTO64 external,TerminateDocClients, :QWORD,:QWORD,:QWORD
PROTO64 external,WEP, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file olesvr32.inc
echo -----------------------------------------
ENDIF

