IFNDEF MSV1_0_INC
MSV1_0_INC equ <1>

PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,LsaApCallPackage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaApCallPackagePassthrough, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaApCallPackageUntrusted, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaApInitializePackage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LsaApLogonTerminated, :QWORD
PROTO64 external,LsaApLogonUserEx2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Msv1_0ExportSubAuthenticationRoutine, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Msv1_0SubAuthenticationPresent, :QWORD
PROTO64 external,MsvGetLogonAttemptCount, 
PROTO64 external,MsvSamLogoff, :QWORD,:QWORD,:QWORD
PROTO64 external,MsvSamValidate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MsvValidateTarget, :QWORD,:QWORD,:QWORD
PROTO64 external,SpInitialize, :QWORD,:QWORD,:QWORD
PROTO64 external,SpInstanceInit, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msv1_0.inc
echo -----------------------------------------
ENDIF

