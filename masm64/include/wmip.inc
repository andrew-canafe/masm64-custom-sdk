IFNDEF WMIP_INC
WMIP_INC equ <1>

PROTO64 external,CloseTrace, :QWORD,:QWORD
PROTO64 external,ControlTraceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ControlTraceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateTraceInstanceId, :QWORD,:QWORD
PROTO64 external,EnableTrace, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetTraceEnableFlags, :QWORD,:QWORD
PROTO64 external,GetTraceEnableLevel, :QWORD,:QWORD
PROTO64 external,GetTraceLoggerHandle, :QWORD
PROTO64 external,OpenTraceA, :QWORD
PROTO64 external,OpenTraceW, :QWORD
PROTO64 external,ProcessTrace, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryAllTracesA, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryAllTracesW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterTraceGuidsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterTraceGuidsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RemoveTraceCallback, :QWORD
PROTO64 external,SetTraceCallback, :QWORD,:QWORD
PROTO64 external,StartTraceA, :QWORD,:QWORD,:QWORD
PROTO64 external,StartTraceW, :QWORD,:QWORD,:QWORD
PROTO64 external,TraceEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,TraceEventInstance, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UnregisterTraceGuids, :QWORD,:QWORD
PROTO64 external,WmiCloseBlock, :QWORD
PROTO64 external,WmiDevInstToInstanceNameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiDevInstToInstanceNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiEnumerateGuids, :QWORD,:QWORD
PROTO64 external,WmiExecuteMethodA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiExecuteMethodW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiFileHandleToInstanceNameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiFileHandleToInstanceNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiFreeBuffer, :QWORD
PROTO64 external,WmiMofEnumerateResourcesA, :QWORD,:QWORD,:QWORD
PROTO64 external,WmiMofEnumerateResourcesW, :QWORD,:QWORD,:QWORD
PROTO64 external,WmiNotificationRegistrationA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiNotificationRegistrationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiOpenBlock, :QWORD,:QWORD,:QWORD
PROTO64 external,WmiQueryAllDataA, :QWORD,:QWORD,:QWORD
PROTO64 external,WmiQueryAllDataW, :QWORD,:QWORD,:QWORD
PROTO64 external,WmiQueryGuidInformation, :QWORD,:QWORD
PROTO64 external,WmiQuerySingleInstanceA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiQuerySingleInstanceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiSetSingleInstanceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiSetSingleInstanceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiSetSingleItemA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WmiSetSingleItemW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wmip.inc
echo -----------------------------------------
ENDIF

