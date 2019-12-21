IFNDEF DRT_INC
DRT_INC equ <1>

PROTO64 external,DrtClose, :QWORD
PROTO64 external,DrtContinueSearch, :QWORD
PROTO64 external,DrtEndSearch, :QWORD
PROTO64 external,DrtGetEventData, :QWORD,:QWORD,:QWORD
PROTO64 external,DrtGetEventDataSize, :QWORD,:QWORD
PROTO64 external,DrtGetInstanceName, :QWORD,:QWORD,:QWORD
PROTO64 external,DrtGetInstanceNameSize, :QWORD,:QWORD
PROTO64 external,DrtGetSearchPath, :QWORD,:QWORD,:QWORD
PROTO64 external,DrtGetSearchPathSize, :QWORD,:QWORD
PROTO64 external,DrtGetSearchResult, :QWORD,:QWORD,:QWORD
PROTO64 external,DrtGetSearchResultSize, :QWORD,:QWORD
PROTO64 external,DrtOpen, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrtRegisterKey, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrtStartSearch, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrtUnregisterKey, :QWORD
PROTO64 external,DrtUpdateKey, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file drt.inc
echo -----------------------------------------
ENDIF

