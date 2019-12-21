IFNDEF KSPROXY_INC
KSPROXY_INC equ <1>

PROTO64 external,KsGetMediaType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KsGetMediaTypeCount, :QWORD,:QWORD,:QWORD
PROTO64 external,KsGetMultiplePinFactoryItems, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KsOpenDefaultDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,KsResolveRequiredAttributes, :QWORD,:QWORD
PROTO64 external,KsSynchronousDeviceControl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ksproxy.inc
echo -----------------------------------------
ENDIF

