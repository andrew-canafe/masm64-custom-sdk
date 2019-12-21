IFNDEF WSDAPI_INC
WSDAPI_INC equ <1>

PROTO64 external,WSDAllocateLinkedMemory, :QWORD,:QWORD
PROTO64 external,WSDAttachLinkedMemory, :QWORD,:QWORD
PROTO64 external,WSDCompareEndpoints, :QWORD,:QWORD
PROTO64 external,WSDCopyEndpoint, :QWORD,:QWORD
PROTO64 external,WSDCreateDeviceHost2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateDeviceHost, :QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateDeviceHostAdvanced, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateDeviceProxy2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateDeviceProxy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateDeviceProxyAdvanced, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateDiscoveryProvider2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateDiscoveryProvider, :QWORD,:QWORD
PROTO64 external,WSDCreateDiscoveryPublisher2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateDiscoveryPublisher, :QWORD,:QWORD
PROTO64 external,WSDCreateHttpAddress, :QWORD
PROTO64 external,WSDCreateHttpMessageParameters, :QWORD
PROTO64 external,WSDCreateHttpTransport, :QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateMetadataAgent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDCreateOutboundAttachment, :QWORD
PROTO64 external,WSDCreateUdpAddress, :QWORD
PROTO64 external,WSDCreateUdpMessageParameters, :QWORD
PROTO64 external,WSDCreateUdpTransport, :QWORD
PROTO64 external,WSDDetachLinkedMemory, :QWORD
PROTO64 external,WSDFreeLinkedMemory, :QWORD
PROTO64 external,WSDGenerateFault, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDGenerateFaultEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDGenerateRandomDelay, :QWORD,:QWORD
PROTO64 external,WSDGetConfigurationOption, :QWORD,:QWORD,:QWORD
PROTO64 external,WSDProcessFault, :QWORD,:QWORD,:QWORD
PROTO64 external,WSDSetConfigurationOption, :QWORD,:QWORD,:QWORD
PROTO64 external,WSDUriDecode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDUriEncode, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSDXMLAddChild, :QWORD,:QWORD
PROTO64 external,WSDXMLAddSibling, :QWORD,:QWORD
PROTO64 external,WSDXMLBuildAnyForSingleElement, :QWORD,:QWORD,:QWORD
PROTO64 external,WSDXMLCleanupElement, :QWORD
PROTO64 external,WSDXMLCreateContext, :QWORD
PROTO64 external,WSDXMLGetNameFromBuiltinNamespace, :QWORD,:QWORD,:QWORD
PROTO64 external,WSDXMLGetValueFromAny, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wsdapi.inc
echo -----------------------------------------
ENDIF

