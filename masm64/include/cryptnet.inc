IFNDEF CRYPTNET_INC
CRYPTNET_INC equ <1>

PROTO64 external,CryptGetObjectUrl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptInstallCancelRetrieval, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptRetrieveObjectByUrlA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptRetrieveObjectByUrlW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptUninstallCancelRetrieval, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cryptnet.inc
echo -----------------------------------------
ENDIF

