IFNDEF NTDSETUP_INC
NTDSETUP_INC equ <1>

PROTO64 external,AdamFetchDemotionInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AdamGetCrossRefs, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeDemotionInfo, :QWORD
PROTO64 external,NtdsAdamValidateInst, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtdsAdamValidateServiceAccount, :QWORD,:QWORD
PROTO64 external,NtdsAdamVerifyBind, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtdsCheckMachineAccountFlags, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtdsDemote, :QWORD,:QWORD
PROTO64 external,NtdsFreeDnsRRInfo, :QWORD
PROTO64 external,NtdsGetDefaultDnsName, :QWORD,:QWORD
PROTO64 external,NtdsInstall, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtdsInstallCancel, 
PROTO64 external,NtdsInstallReplicateFull, :QWORD,:QWORD,:QWORD
PROTO64 external,NtdsInstallShutdown, 
PROTO64 external,NtdsInstallUndo, 
PROTO64 external,NtdsPrepareForDemotion, :QWORD,:QWORD
PROTO64 external,NtdsPrepareForDemotionUndo, :QWORD
PROTO64 external,NtdsPrepareForDsUpgrade, :QWORD,:QWORD
PROTO64 external,NtdsSetReplicaMachineAccount, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NtdspConfigRegistry, :QWORD,:QWORD
PROTO64 external,NtdspDNStoRFC1779Name, :QWORD,:QWORD,:QWORD
PROTO64 external,NtdspFindSite, :QWORD,:QWORD
PROTO64 external,NtdspValidateInstallParameters, :QWORD
PROTO64 external,NtdspVerifyDsEnvironment, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntdsetup.inc
echo -----------------------------------------
ENDIF

