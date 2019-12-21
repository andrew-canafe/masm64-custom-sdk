IFNDEF RUNTIMEOBJECT_INC
RUNTIMEOBJECT_INC equ <1>

PROTO64 external,GetRestrictedErrorInfo, :QWORD
PROTO64 external,HSTRING_UserFree, :QWORD,:QWORD
PROTO64 external,HSTRING_UserMarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,HSTRING_UserSize, :QWORD,:QWORD,:QWORD
PROTO64 external,HSTRING_UserUnmarshal, :QWORD,:QWORD,:QWORD
PROTO64 external,IsErrorPropagationEnabled, 
PROTO64 external,RoActivateInstance, :QWORD,:QWORD
PROTO64 external,RoCaptureErrorContext, :QWORD
PROTO64 external,RoClearError, 
PROTO64 external,RoFailFastWithErrorContext, :QWORD
PROTO64 external,RoFreeParameterizedTypeExtra, :QWORD
PROTO64 external,RoGetActivatableClassRegistration, :QWORD,:QWORD
PROTO64 external,RoGetActivationFactory, :QWORD,:QWORD,:QWORD
PROTO64 external,RoGetApartmentIdentifier, :QWORD
PROTO64 external,RoGetBufferMarshaler, :QWORD
PROTO64 external,RoGetErrorReportingFlags, :QWORD
PROTO64 external,RoGetMatchingRestrictedErrorInfo, :QWORD,:QWORD
PROTO64 external,RoGetMetaDataFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RoGetParameterizedTypeInstanceIID, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RoGetServerActivatableClasses, :QWORD,:QWORD,:QWORD
PROTO64 external,RoInitialize, :QWORD
PROTO64 external,RoInspectCapturedStackBackTrace, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RoInspectThreadErrorInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RoOriginateError, :QWORD,:QWORD
PROTO64 external,RoOriginateErrorW, :QWORD,:QWORD,:QWORD
PROTO64 external,RoOriginateLanguageException, :QWORD,:QWORD,:QWORD
PROTO64 external,RoParameterizedTypeExtraGetTypeSignature, :QWORD
PROTO64 external,RoParseTypeName, :QWORD,:QWORD,:QWORD
PROTO64 external,RoRegisterActivationFactories, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RoRegisterForApartmentShutdown, :QWORD,:QWORD,:QWORD
PROTO64 external,RoReportFailedDelegate, :QWORD,:QWORD
PROTO64 external,RoReportUnhandledError, :QWORD
PROTO64 external,RoResolveNamespace, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RoResolveRestrictedErrorInfoReference, :QWORD,:QWORD
PROTO64 external,RoRevokeActivationFactories, :QWORD
PROTO64 external,RoSetErrorReportingFlags, :QWORD
PROTO64 external,RoTransformError, :QWORD,:QWORD,:QWORD
PROTO64 external,RoTransformErrorW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RoUninitialize, 
PROTO64 external,RoUnregisterForApartmentShutdown, :QWORD
PROTO64 external,SetRestrictedErrorInfo, :QWORD
PROTO64 external,WindowsCompareStringOrdinal, :QWORD,:QWORD,:QWORD
PROTO64 external,WindowsConcatString, :QWORD,:QWORD,:QWORD
PROTO64 external,WindowsCreateString, :QWORD,:QWORD,:QWORD
PROTO64 external,WindowsCreateStringReference, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WindowsDeleteString, :QWORD
PROTO64 external,WindowsDeleteStringBuffer, :QWORD
PROTO64 external,WindowsDuplicateString, :QWORD,:QWORD
PROTO64 external,WindowsGetStringLen, :QWORD
PROTO64 external,WindowsGetStringRawBuffer, :QWORD,:QWORD
PROTO64 external,WindowsInspectString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WindowsIsStringEmpty, :QWORD
PROTO64 external,WindowsPreallocateStringBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,WindowsPromoteStringBuffer, :QWORD,:QWORD
PROTO64 external,WindowsReplaceString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WindowsStringHasEmbeddedNull, :QWORD,:QWORD
PROTO64 external,WindowsSubstring, :QWORD,:QWORD,:QWORD
PROTO64 external,WindowsSubstringWithSpecifiedLength, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WindowsTrimStringEnd, :QWORD,:QWORD,:QWORD
PROTO64 external,WindowsTrimStringStart, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file runtimeobject.inc
echo -----------------------------------------
ENDIF

