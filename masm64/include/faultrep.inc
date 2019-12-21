IFNDEF FAULTREP_INC
FAULTREP_INC equ <1>

PROTO64 external,AddERExcludedApplicationA, :QWORD
PROTO64 external,AddERExcludedApplicationW, :QWORD
PROTO64 external,CancelHangReporting, :QWORD
PROTO64 external,ReportActivationHang, :QWORD,:QWORD,:QWORD
PROTO64 external,ReportFault, :QWORD,:QWORD
PROTO64 external,ReportHang, :QWORD,:QWORD
PROTO64 external,WerReportHang, :QWORD,:QWORD
PROTO64 external,WerpGetDebugger, :QWORD,:QWORD
PROTO64 external,WerpInitiateCrashReporting, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WerpLaunchAeDebug, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file faultrep.inc
echo -----------------------------------------
ENDIF

