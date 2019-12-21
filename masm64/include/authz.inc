IFNDEF AUTHZ_INC
AUTHZ_INC equ <1>

PROTO64 external,AuthzAccessCheck, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzAddSidsToContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzCachedAccessCheck, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzEnumerateSecurityEventSources, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzEvaluateSacl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzFreeAuditEvent, :QWORD
PROTO64 external,AuthzFreeCentralAccessPolicyCache, 
PROTO64 external,AuthzFreeContext, :QWORD
PROTO64 external,AuthzFreeHandle, :QWORD
PROTO64 external,AuthzFreeResourceManager, :QWORD
PROTO64 external,AuthzGetInformationFromContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzInitializeCompoundContext, :QWORD,:QWORD,:QWORD
PROTO64 external,AuthzInitializeContextFromAuthzContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzInitializeContextFromSid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzInitializeContextFromToken, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzInitializeRemoteAccessCheck, :QWORD
PROTO64 external,AuthzInitializeRemoteResourceManager, :QWORD,:QWORD
PROTO64 external,AuthzInitializeResourceManager, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzInitializeResourceManagerEx, :QWORD,:QWORD,:QWORD
PROTO64 external,AuthzInstallSecurityEventSource, :QWORD,:QWORD
PROTO64 external,AuthzModifyClaims, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzModifySecurityAttributes, :QWORD,:QWORD,:QWORD
PROTO64 external,AuthzModifySids, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzOpenObjectAudit, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzRegisterCapChangeNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,AuthzRegisterSecurityEventSource, :QWORD,:QWORD,:QWORD
PROTO64 external,AuthzReportSecurityEventFromParams, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzSetAppContainerInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AuthzShutdownRemoteAccessCheck, 
PROTO64 external,AuthzUninstallSecurityEventSource, :QWORD,:QWORD
PROTO64 external,AuthzUnregisterCapChangeNotification, :QWORD
PROTO64 external,AuthzUnregisterSecurityEventSource, :QWORD,:QWORD
PROTO64 external,AuthziLogAuditEvent, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file authz.inc
echo -----------------------------------------
ENDIF

