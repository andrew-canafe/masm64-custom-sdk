IFNDEF FILEEXTD_INC
FILEEXTD_INC equ <1>

PROTO64 external,BaseFiberStart, 
PROTO64 external,BaseInitializeFiberContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BaseSetLastNTError, :QWORD
PROTO64 external,BasepAdjustStackPointer, :QWORD
PROTO64 external,CalloutOnFiberStackInternal, :QWORD,:QWORD,:QWORD
PROTO64 external,GetCurrentFiber, 
PROTO64 external,GetTickCountStub, 
PROTO64 external,InterlockedCompareExchange, :QWORD,:QWORD,:QWORD
PROTO64 external,InterlockedDecrement, :QWORD
PROTO64 external,InterlockedExchange, :QWORD,:QWORD
PROTO64 external,InterlockedExchangeAdd, :QWORD,:QWORD
PROTO64 external,InterlockedIncrement, :QWORD
PROTO64 external,MulDiv, :QWORD,:QWORD,:QWORD
PROTO64 external,NtCurrentTeb, 
PROTO64 external,SetFileInformationByHandle, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SwitchToFiberContext, :QWORD
PROTO64 external,Win32Rename, :QWORD,:QWORD,:QWORD
PROTO64 external,_BaseFiberStart, 
PROTO64 external,_InterlockedCompareExchange, :QWORD,:QWORD,:QWORD
PROTO64 external,_ResourceCallEnumLangRoutine, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_ResourceCallEnumNameRoutine, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,_ResourceCallEnumTypeRoutine, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,fileext_NtCreateFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,fileext_NtQueryDirectoryFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,fileext_NtQueryInformationFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,fileext_NtSetInformationFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,fileextd_RtlNtStatusToDosError, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file fileextd.inc
echo -----------------------------------------
ENDIF

