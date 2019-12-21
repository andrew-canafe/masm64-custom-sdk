IFNDEF LOADPERF_INC
LOADPERF_INC equ <1>

PROTO64 external,BackupPerfRegistryToFileW, :QWORD,:QWORD
PROTO64 external,InstallPerfDllA, :QWORD,:QWORD,:QWORD
PROTO64 external,InstallPerfDllW, :QWORD,:QWORD,:QWORD
PROTO64 external,LoadPerfCounterTextStringsA, :QWORD,:QWORD
PROTO64 external,LoadPerfCounterTextStringsW, :QWORD,:QWORD
PROTO64 external,LpAcquireInstallationMutex, 
PROTO64 external,LpReleaseInstallationMutex, 
PROTO64 external,RestorePerfRegistryFromFileW, :QWORD,:QWORD
PROTO64 external,SetServiceAsTrustedA, :QWORD,:QWORD
PROTO64 external,SetServiceAsTrustedW, :QWORD,:QWORD
PROTO64 external,UnloadPerfCounterTextStringsA, :QWORD,:QWORD
PROTO64 external,UnloadPerfCounterTextStringsW, :QWORD,:QWORD
PROTO64 external,UpdatePerfNameFilesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UpdatePerfNameFilesW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file loadperf.inc
echo -----------------------------------------
ENDIF

