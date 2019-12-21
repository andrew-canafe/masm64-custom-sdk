IFNDEF NDFAPI_INC
NDFAPI_INC equ <1>

PROTO64 external,NdfCancelIncident, :QWORD
PROTO64 external,NdfCloseIncident, :QWORD
PROTO64 external,NdfCreateConnectivityIncident, :QWORD
PROTO64 external,NdfCreateDNSIncident, :QWORD,:QWORD,:QWORD
PROTO64 external,NdfCreateGroupingIncident, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdfCreateInboundIncident, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdfCreateIncident, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdfCreateNetConnectionIncident, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdfCreatePnrpIncident, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdfCreateSharingIncident, :QWORD,:QWORD
PROTO64 external,NdfCreateWebIncident, :QWORD,:QWORD
PROTO64 external,NdfCreateWebIncidentEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdfCreateWinSockIncident, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdfDiagnoseIncident, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NdfExecuteDiagnosis, :QWORD,:QWORD
PROTO64 external,NdfGetTraceFile, :QWORD,:QWORD
PROTO64 external,NdfRepairIncident, :QWORD,:QWORD,:QWORD
PROTO64 external,NdfRepairIncidentEx, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ndfapi.inc
echo -----------------------------------------
ENDIF

