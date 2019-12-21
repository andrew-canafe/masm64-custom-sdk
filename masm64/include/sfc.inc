IFNDEF SFC_INC
SFC_INC equ <1>

PROTO64 external,SRSetRestorePointA, :QWORD,:QWORD
PROTO64 external,SRSetRestorePointW, :QWORD,:QWORD
PROTO64 external,SfcClose, :QWORD
PROTO64 external,SfcConnectToServer, :QWORD
PROTO64 external,SfcFileException, :QWORD,:QWORD,:QWORD
PROTO64 external,SfcGetNextProtectedFile, :QWORD,:QWORD
PROTO64 external,SfcInitProt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SfcInitiateScan, :QWORD,:QWORD
PROTO64 external,SfcInstallProtectedFiles, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SfcIsFileProtected, :QWORD,:QWORD
PROTO64 external,SfcIsKeyProtected, :QWORD,:QWORD,:QWORD
PROTO64 external,SfcTerminateWatcherThread, 
PROTO64 external,SfpDeleteCatalog, :QWORD,:QWORD
PROTO64 external,SfpInstallCatalog, :QWORD,:QWORD,:QWORD
PROTO64 external,SfpVerifyFile, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sfc.inc
echo -----------------------------------------
ENDIF

