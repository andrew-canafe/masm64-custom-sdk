IFNDEF RSTRTMGR_INC
RSTRTMGR_INC equ <1>

PROTO64 external,RmAddFilter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RmCancelCurrentTask, :QWORD
PROTO64 external,RmEndSession, :QWORD
PROTO64 external,RmGetFilterList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RmGetList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RmJoinSession, :QWORD,:QWORD
PROTO64 external,RmRegisterResources, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RmRemoveFilter, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RmReserveHeap, :QWORD
PROTO64 external,RmRestart, :QWORD,:QWORD,:QWORD
PROTO64 external,RmShutdown, :QWORD,:QWORD,:QWORD
PROTO64 external,RmStartSession, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rstrtmgr.inc
echo -----------------------------------------
ENDIF

