IFNDEF SISBKUP_INC
SISBKUP_INC equ <1>

PROTO64 external,SisCSFilesToBackupForLink, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SisCreateBackupStructure, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SisCreateRestoreStructure, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SisFreeAllocatedMemory, :QWORD
PROTO64 external,SisFreeBackupStructure, :QWORD
PROTO64 external,SisFreeRestoreStructure, :QWORD
PROTO64 external,SisRestoredCommonStoreFile, :QWORD,:QWORD
PROTO64 external,SisRestoredLink, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sisbkup.inc
echo -----------------------------------------
ENDIF

