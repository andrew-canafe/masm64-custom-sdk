IFNDEF PRNTVPT_INC
PRNTVPT_INC equ <1>

PROTO64 external,BindPTProviderThunk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertDevModeToPrintTicketThunk2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertDevModeToPrintTicketThunk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertPrintTicketToDevModeThunk2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertPrintTicketToDevModeThunk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceDefaultPrintTicketThunk, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDeviceNamespacesThunk, :QWORD,:QWORD,:QWORD
PROTO64 external,GetPrintCapabilitiesThunk2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPrintCapabilitiesThunk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetSchemaVersionThunk, :QWORD
PROTO64 external,MergeAndValidatePrintTicketThunk2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MergeAndValidatePrintTicketThunk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PTCloseProvider, :QWORD
PROTO64 external,PTConvertDevModeToPrintTicket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PTConvertPrintTicketToDevMode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PTGetPrintCapabilities, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PTMergeAndValidatePrintTicket, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PTOpenProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,PTOpenProviderEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PTQuerySchemaVersionSupport, :QWORD,:QWORD
PROTO64 external,PTReleaseMemory, :QWORD
PROTO64 external,UnbindPTProviderThunk, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file prntvpt.inc
echo -----------------------------------------
ENDIF

