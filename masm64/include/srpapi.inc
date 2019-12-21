IFNDEF SRPAPI_INC
SRPAPI_INC equ <1>

PROTO64 external,AiEvaluatePlugin, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AppIDDecodeAttributeString, :QWORD,:QWORD
PROTO64 external,AppIDEncodeAttributeString, :QWORD,:QWORD,:QWORD
PROTO64 external,AppIDFreeAttributeString, :QWORD
PROTO64 external,SrpClearEnterpriseIdForUIEnforcement, 
PROTO64 external,SrpCloseThreadNetworkContext, :QWORD
PROTO64 external,SrpCreateThreadNetworkContext, :QWORD,:QWORD
PROTO64 external,SrpDoesPolicyAllowAppExecution, :QWORD,:QWORD
PROTO64 external,SrpGetAllowedEnterprises, :QWORD,:QWORD,:QWORD
PROTO64 external,SrpGetEnterpriseIdForUIEnforcement, :QWORD
PROTO64 external,SrpGetEnterpriseIdForUIEnforcementFromProcess, :QWORD,:QWORD
PROTO64 external,SrpGetProcessFQBNAttributeValue, :QWORD,:QWORD
PROTO64 external,SrpGetProcessPathAttributeValue, :QWORD,:QWORD
PROTO64 external,SrpGetProcessSha256AttributeValue, :QWORD,:QWORD
PROTO64 external,SrpInheritEnterpriseContext, :QWORD,:QWORD
PROTO64 external,SrpIsAllowed, :QWORD
PROTO64 external,SrpRestoreEnterpriseContext, :QWORD
PROTO64 external,SrpSetEnterpriseIdForUIEnforcement, :QWORD
PROTO64 external,SrpSetTokenEnterpriseId, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file srpapi.inc
echo -----------------------------------------
ENDIF

