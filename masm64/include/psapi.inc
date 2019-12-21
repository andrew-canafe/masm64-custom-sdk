IFNDEF PSAPI_INC
PSAPI_INC equ <1>

PROTO64 external,EmptyWorkingSet, :QWORD
PROTO64 external,EnumDeviceDrivers, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumPageFilesA, :QWORD,:QWORD
PROTO64 external,EnumPageFilesW, :QWORD,:QWORD
PROTO64 external,EnumProcessModules, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumProcessModulesEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumProcesses, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceDriverBaseNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceDriverBaseNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceDriverFileNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceDriverFileNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetMappedFileNameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMappedFileNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetModuleBaseNameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetModuleBaseNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetModuleFileNameExA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetModuleFileNameExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetModuleInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPerformanceInfo, :QWORD,:QWORD
PROTO64 external,GetProcessImageFileNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetProcessImageFileNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetProcessMemoryInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,GetWsChanges, :QWORD,:QWORD,:QWORD
PROTO64 external,GetWsChangesEx, :QWORD,:QWORD,:QWORD
PROTO64 external,InitializeProcessForWsWatch, :QWORD
PROTO64 external,QueryWorkingSet, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryWorkingSetEx, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file psapi.inc
echo -----------------------------------------
ENDIF

