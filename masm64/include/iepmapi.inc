IFNDEF IEPMAPI_INC
IEPMAPI_INC equ <1>

PROTO64 external,IECancelSaveFile, :QWORD
PROTO64 external,IEGetProtectedModeCookie, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IEGetWriteableFolderPath, :QWORD,:QWORD
PROTO64 external,IEGetWriteableLowHKCU, :QWORD
PROTO64 external,IEIsProtectedModeProcess, :QWORD
PROTO64 external,IEIsProtectedModeURL, :QWORD
PROTO64 external,IELaunchURL, :QWORD,:QWORD,:QWORD
PROTO64 external,IERefreshElevationPolicy, 
PROTO64 external,IERegCreateKeyEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IERegSetValueEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IERegisterWritableRegistryKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IERegisterWritableRegistryValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IESaveFile, :QWORD,:QWORD
PROTO64 external,IESetProtectedModeCookie, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IEShowOpenFileDialog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IEShowSaveFileDialog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IEUnregisterWritableRegistry, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file iepmapi.inc
echo -----------------------------------------
ENDIF

