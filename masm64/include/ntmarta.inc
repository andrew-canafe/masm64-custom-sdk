IFNDEF NTMARTA_INC
NTMARTA_INC equ <1>

PROTO64 external,AccConvertAccessMaskToActrlAccess, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccConvertAccessToSD, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccConvertAccessToSecurityDescriptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccConvertAclToAccess, :QWORD,:QWORD,:QWORD
PROTO64 external,AccConvertSDToAccess, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccFreeIndexArray, :QWORD,:QWORD,:QWORD
PROTO64 external,AccGetAccessForTrustee, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccGetExplicitEntries, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccGetInheritanceSource, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccLookupAccountName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccLookupAccountSid, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccLookupAccountTrustee, :QWORD,:QWORD,:QWORD
PROTO64 external,AccProvCancelOperation, :QWORD
PROTO64 external,AccProvGetAccessInfoPerObjectType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvGetAllRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvGetCapabilities, :QWORD,:QWORD
PROTO64 external,AccProvGetOperationResults, :QWORD,:QWORD,:QWORD
PROTO64 external,AccProvGetTrusteesAccess, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvGrantAccessRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvHandleGetAccessInfoPerObjectType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvHandleGetAllRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvHandleGetTrusteesAccess, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvHandleIsAccessAudited, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvHandleIsObjectAccessible, :QWORD,:QWORD
PROTO64 external,AccProvHandleRevokeAccessRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvHandleRevokeAuditRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvHandleSetAccessRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvIsAccessAudited, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvIsObjectAccessible, :QWORD,:QWORD
PROTO64 external,AccProvRevokeAccessRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvRevokeAuditRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccProvSetAccessRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccRewriteGetExplicitEntriesFromAcl, :QWORD,:QWORD,:QWORD
PROTO64 external,AccRewriteGetHandleRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccRewriteGetNamedRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccRewriteSetEntriesInAcl, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccRewriteSetHandleRights, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccRewriteSetNamedRights, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccSetEntriesInAList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccTreeResetNamedSecurityInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EventGuidToName, :QWORD,:QWORD,:QWORD
PROTO64 external,EventNameFree, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntmarta.inc
echo -----------------------------------------
ENDIF

