IFNDEF TRAFFIC_INC
TRAFFIC_INC equ <1>

PROTO64 external,TcAddFilter, :QWORD,:QWORD,:QWORD
PROTO64 external,TcAddFlow, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcCloseInterface, :QWORD
PROTO64 external,TcDeleteFilter, :QWORD
PROTO64 external,TcDeleteFlow, :QWORD
PROTO64 external,TcDeregisterClient, :QWORD
PROTO64 external,TcEnumerateFlows, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcEnumerateInterfaces, :QWORD,:QWORD,:QWORD
PROTO64 external,TcGetFlowNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,TcGetFlowNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,TcGetInterfaceList, :QWORD,:QWORD,:QWORD
PROTO64 external,TcModifyFlow, :QWORD,:QWORD
PROTO64 external,TcOpenInterfaceA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcOpenInterfaceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcQueryFlowA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcQueryFlowW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcQueryInterface, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcRegisterClient, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcSetFlowA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcSetFlowW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcSetInterface, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TcSetSocketFlow, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file traffic.inc
echo -----------------------------------------
ENDIF

