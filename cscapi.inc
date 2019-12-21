IFNDEF CSCAPI_INC
CSCAPI_INC equ <1>

PROTO64 external,CscSearchApiGetInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,OfflineFilesEnable, :QWORD,:QWORD
PROTO64 external,OfflineFilesGetShareCachingMode, :QWORD,:QWORD
PROTO64 external,OfflineFilesQueryStatus, :QWORD,:QWORD
PROTO64 external,OfflineFilesQueryStatusEx, :QWORD,:QWORD,:QWORD
PROTO64 external,OfflineFilesStart, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cscapi.inc
echo -----------------------------------------
ENDIF

