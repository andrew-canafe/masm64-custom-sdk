IFNDEF QWAVE_INC
QWAVE_INC equ <1>

PROTO64 external,QDLHPathDiagnostics, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QDLHStartDiagnosingPath, :QWORD,:QWORD,:QWORD
PROTO64 external,QOSAddSocketToFlow, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QOSCancel, :QWORD,:QWORD
PROTO64 external,QOSCloseHandle, :QWORD
PROTO64 external,QOSCreateHandle, :QWORD,:QWORD
PROTO64 external,QOSEnumerateFlows, :QWORD,:QWORD,:QWORD
PROTO64 external,QOSNotifyFlow, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QOSQueryFlow, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QOSRemoveSocketFromFlow, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QOSSetFlow, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QOSStartTrackingClient, :QWORD,:QWORD,:QWORD
PROTO64 external,QOSStopTrackingClient, :QWORD,:QWORD,:QWORD
PROTO64 external,ServiceMain, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file qwave.inc
echo -----------------------------------------
ENDIF

