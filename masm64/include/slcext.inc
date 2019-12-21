IFNDEF SLCEXT_INC
SLCEXT_INC equ <1>

PROTO64 external,SLAcquireGenuineTicket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SLActivateProduct, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SLGetPackageProductKey, :QWORD,:QWORD,:QWORD
PROTO64 external,SLGetPackageProperties, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SLGetPackageToken, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SLGetReferralInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SLGetServerStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SLInstallPackage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SLUninstallPackage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file slcext.inc
echo -----------------------------------------
ENDIF

