IFNDEF ADVPACK_INC
ADVPACK_INC equ <1>

PROTO64 external,AddDelBackupEntryA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddDelBackupEntryW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AdvInstallFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AdvInstallFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CloseINFEngine, :QWORD
PROTO64 external,DelNodeA, :QWORD,:QWORD
PROTO64 external,DelNodeRunDLL32W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DelNodeW, :QWORD,:QWORD
PROTO64 external,ExecuteCabA, :QWORD,:QWORD,:QWORD
PROTO64 external,ExecuteCabW, :QWORD,:QWORD,:QWORD
PROTO64 external,ExtractFilesA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExtractFilesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FileSaveMarkNotExistA, :QWORD,:QWORD,:QWORD
PROTO64 external,FileSaveMarkNotExistW, :QWORD,:QWORD,:QWORD
PROTO64 external,FileSaveRestoreOnINFA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FileSaveRestoreOnINFW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FileSaveRestoreW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVersionFromFileA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVersionFromFileExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVersionFromFileExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVersionFromFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsNTAdmin, :QWORD,:QWORD
PROTO64 external,LaunchINFSection, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LaunchINFSectionExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LaunchINFSectionW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NeedReboot, :QWORD
PROTO64 external,NeedRebootInit, 
PROTO64 external,OpenINFEngineA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenINFEngineW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RebootCheckOnInstallA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RebootCheckOnInstallW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegInstallA, :QWORD,:QWORD,:QWORD
PROTO64 external,RegInstallW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegRestoreAllA, :QWORD,:QWORD,:QWORD
PROTO64 external,RegRestoreAllW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegSaveRestoreA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegSaveRestoreOnINFA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegSaveRestoreOnINFW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegSaveRestoreW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RunSetupCommandA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RunSetupCommandW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetPerUserSecValuesA, :QWORD
PROTO64 external,SetPerUserSecValuesW, :QWORD
PROTO64 external,TranslateInfStringA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TranslateInfStringExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TranslateInfStringExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TranslateInfStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UserInstStubWrapperA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UserInstStubWrapperW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UserUnInstStubWrapperA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UserUnInstStubWrapperW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file advpack.inc
echo -----------------------------------------
ENDIF

