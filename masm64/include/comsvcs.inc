IFNDEF COMSVCS_INC
COMSVCS_INC equ <1>

PROTO64 external,CoCreateActivity, :QWORD,:QWORD,:QWORD
PROTO64 external,CoEnterServiceDomain, :QWORD
PROTO64 external,CoLeaveServiceDomain, :QWORD
PROTO64 external,CoLoadServices, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ComSvcsExceptionFilter, :QWORD,:QWORD,:QWORD
PROTO64 external,ComSvcsLogError, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateActivityInMTA, :QWORD,:QWORD
PROTO64 external,DispManGetContext, :QWORD,:QWORD
PROTO64 external,DllUnregisterServerWeReallyMeanIt, 
PROTO64 external,GetMTAThreadPoolMetrics, :QWORD
PROTO64 external,GetManagedExtensions, :QWORD
PROTO64 external,GetTrkSvrObject, :QWORD,:QWORD
PROTO64 external,MTSCreateActivity, :QWORD,:QWORD
PROTO64 external,MiniDumpW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file comsvcs.inc
echo -----------------------------------------
ENDIF

