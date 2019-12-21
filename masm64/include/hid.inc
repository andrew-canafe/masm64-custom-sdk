IFNDEF HID_INC
HID_INC equ <1>

PROTO64 external,HidD_FlushQueue, :QWORD
PROTO64 external,HidD_FreePreparsedData, :QWORD
PROTO64 external,HidD_GetAttributes, :QWORD,:QWORD
PROTO64 external,HidD_GetConfiguration, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_GetFeature, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_GetHidGuid, :QWORD
PROTO64 external,HidD_GetIndexedString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidD_GetInputReport, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_GetManufacturerString, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_GetMsGenreDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_GetNumInputBuffers, :QWORD,:QWORD
PROTO64 external,HidD_GetPhysicalDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_GetPreparsedData, :QWORD,:QWORD
PROTO64 external,HidD_GetProductString, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_GetSerialNumberString, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_Hello, :QWORD,:QWORD
PROTO64 external,HidD_SetConfiguration, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_SetFeature, :QWORD,:QWORD,:QWORD
PROTO64 external,HidD_SetNumInputBuffers, :QWORD,:QWORD
PROTO64 external,HidD_SetOutputReport, :QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetButtonCaps, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetCaps, :QWORD,:QWORD
PROTO64 external,HidP_GetData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetExtendedAttributes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetLinkCollectionNodes, :QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetScaledUsageValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetSpecificButtonCaps, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetSpecificValueCaps, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetUsageValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetUsageValueArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetUsages, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetUsagesEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_GetValueCaps, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_InitializeReportForID, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_MaxDataListLength, :QWORD,:QWORD
PROTO64 external,HidP_MaxUsageListLength, :QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetScaledUsageValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetUsageValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetUsageValueArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_SetUsages, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_TranslateUsagesToI8042ScanCodes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_UnsetUsages, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HidP_UsageListDifference, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file hid.inc
echo -----------------------------------------
ENDIF

