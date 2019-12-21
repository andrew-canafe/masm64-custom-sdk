IFNDEF TDH_INC
TDH_INC equ <1>

PROTO64 external,TdhAggregatePayloadFilters, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhCleanupPayloadEventFilterDescriptor, :QWORD
PROTO64 external,TdhCloseDecodingHandle, :QWORD
PROTO64 external,TdhCreatePayloadFilter, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhDeletePayloadFilter, :QWORD
PROTO64 external,TdhEnumerateManifestProviderEvents, :QWORD,:QWORD,:QWORD
PROTO64 external,TdhEnumerateProviderFieldInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhEnumerateProviderFilters, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhEnumerateProviders, :QWORD,:QWORD
PROTO64 external,TdhFormatProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhGetDecodingParameter, :QWORD,:QWORD
PROTO64 external,TdhGetEventInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhGetEventMapInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhGetManifestEventInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhGetProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhGetPropertySize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhGetWppMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhGetWppProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhLoadManifest, :QWORD
PROTO64 external,TdhLoadManifestFromBinary, :QWORD
PROTO64 external,TdhOpenDecodingHandle, :QWORD
PROTO64 external,TdhQueryProviderFieldInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TdhSetDecodingParameter, :QWORD,:QWORD
PROTO64 external,TdhUnloadManifest, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file tdh.inc
echo -----------------------------------------
ENDIF

