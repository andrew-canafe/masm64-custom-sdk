IFNDEF WINUSB_INC
WINUSB_INC equ <1>

PROTO64 external,WinUsb_AbortPipe, :QWORD,:QWORD
PROTO64 external,WinUsb_AbortPipeAsync, :QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_ControlTransfer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_FlushPipe, :QWORD,:QWORD
PROTO64 external,WinUsb_Free, :QWORD
PROTO64 external,WinUsb_GetAdjustedFrameNumber, :QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_GetAssociatedInterface, :QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_GetCurrentAlternateSetting, :QWORD,:QWORD
PROTO64 external,WinUsb_GetCurrentFrameNumber, :QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_GetDescriptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_GetOverlappedResult, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_GetPipePolicy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_GetPowerPolicy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_Initialize, :QWORD,:QWORD
PROTO64 external,WinUsb_ParseConfigurationDescriptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_ParseDescriptors, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_QueryDeviceInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_QueryInterfaceSettings, :QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_QueryPipe, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_QueryPipeEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_ReadIsochPipe, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_ReadIsochPipeAsap, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_ReadPipe, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_RegisterIsochBuffer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_ResetPipe, :QWORD,:QWORD
PROTO64 external,WinUsb_ResetPipeAsync, :QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_SetCurrentAlternateSetting, :QWORD,:QWORD
PROTO64 external,WinUsb_SetCurrentAlternateSettingAsync, :QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_SetPipePolicy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_SetPowerPolicy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_UnregisterIsochBuffer, :QWORD
PROTO64 external,WinUsb_WriteIsochPipe, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_WriteIsochPipeAsap, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinUsb_WritePipe, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file winusb.inc
echo -----------------------------------------
ENDIF

