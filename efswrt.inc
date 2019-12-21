IFNDEF EFSWRT_INC
EFSWRT_INC equ <1>

PROTO64 external,DpmBufferFree, :QWORD
PROTO64 external,DpmProtectSecretToIdentity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DpmStreamClose, :QWORD
PROTO64 external,DpmStreamOpenToProtectToIdentity, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DpmStreamOpenToUnprotect, :QWORD,:QWORD,:QWORD
PROTO64 external,DpmStreamUpdate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DpmUnprotectSecret, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnterpriseDataCopyProtection, :QWORD,:QWORD,:QWORD
PROTO64 external,EnterpriseDataGetStatus, :QWORD,:QWORD
PROTO64 external,EnterpriseDataProtect, :QWORD,:QWORD,:QWORD
PROTO64 external,EnterpriseDataRevoke, :QWORD
PROTO64 external,FreeIdentityProtectorList, :QWORD
PROTO64 external,ProtectFileToIdentity, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryIdentityProtectors, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file efswrt.inc
echo -----------------------------------------
ENDIF

