IFNDEF TBS_INC
TBS_INC equ <1>

PROTO64 external,GetDeviceID, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceIDString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceIDWithTimeout, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Tbsi_Context_Create, :QWORD,:QWORD
PROTO64 external,Tbsi_Create_Windows_Key, :QWORD
PROTO64 external,Tbsi_FilterLog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Tbsi_GetDeviceInfo, :QWORD,:QWORD
PROTO64 external,Tbsi_Get_OwnerAuth, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Tbsi_Get_TCG_Log, :QWORD,:QWORD,:QWORD
PROTO64 external,Tbsi_Physical_Presence_Command, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Tbsi_Revoke_Attestation, 
PROTO64 external,Tbsi_ShaHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Tbsip_Cancel_Commands, :QWORD
PROTO64 external,Tbsip_Context_Close, :QWORD
PROTO64 external,Tbsip_Submit_Command, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Tbsip_Submit_Command_NonBlocking, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Tbsip_TestMorBit, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tbs.inc
echo -----------------------------------------
ENDIF

