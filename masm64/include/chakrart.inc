IFNDEF CHAKRART_INC
CHAKRART_INC equ <1>

PROTO64 external,JsAddRef, :QWORD,:QWORD
PROTO64 external,JsBoolToBoolean, :QWORD,:QWORD
PROTO64 external,JsBooleanToBool, :QWORD,:QWORD
PROTO64 external,JsCallFunction, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsCollectGarbage, :QWORD
PROTO64 external,JsConstructObject, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsConvertValueToBoolean, :QWORD,:QWORD
PROTO64 external,JsConvertValueToNumber, :QWORD,:QWORD
PROTO64 external,JsConvertValueToObject, :QWORD,:QWORD
PROTO64 external,JsConvertValueToString, :QWORD,:QWORD
PROTO64 external,JsCreateArray, :QWORD,:QWORD
PROTO64 external,JsCreateArrayBuffer, :QWORD,:QWORD
PROTO64 external,JsCreateContext, :QWORD,:QWORD
PROTO64 external,JsCreateDataView, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsCreateError, :QWORD,:QWORD
PROTO64 external,JsCreateExternalObject, :QWORD,:QWORD,:QWORD
PROTO64 external,JsCreateExternalType, :QWORD,:QWORD
PROTO64 external,JsCreateFunction, :QWORD,:QWORD,:QWORD
PROTO64 external,JsCreateNamedFunction, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsCreateObject, :QWORD
PROTO64 external,JsCreateRangeError, :QWORD,:QWORD
PROTO64 external,JsCreateReferenceError, :QWORD,:QWORD
PROTO64 external,JsCreateRuntime, :QWORD,:QWORD,:QWORD
PROTO64 external,JsCreateSymbol, :QWORD,:QWORD
PROTO64 external,JsCreateSyntaxError, :QWORD,:QWORD
PROTO64 external,JsCreateTypeError, :QWORD,:QWORD
PROTO64 external,JsCreateTypedArray, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsCreateTypedExternalObject, :QWORD,:QWORD,:QWORD
PROTO64 external,JsCreateURIError, :QWORD,:QWORD
PROTO64 external,JsDefineProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsDeleteIndexedProperty, :QWORD,:QWORD
PROTO64 external,JsDeleteProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsDisableRuntimeExecution, :QWORD
PROTO64 external,JsDisposeRuntime, :QWORD
PROTO64 external,JsDoubleToNumber, :QWORD,:QWORD,:QWORD
PROTO64 external,JsEnableRuntimeExecution, :QWORD
PROTO64 external,JsEnumerateHeap, :QWORD
PROTO64 external,JsEquals, :QWORD,:QWORD,:QWORD
PROTO64 external,JsGetAndClearException, :QWORD
PROTO64 external,JsGetArrayBufferStorage, :QWORD,:QWORD,:QWORD
PROTO64 external,JsGetCurrentContext, :QWORD
PROTO64 external,JsGetDataViewStorage, :QWORD,:QWORD,:QWORD
PROTO64 external,JsGetDefaultTypeDescription, :QWORD
PROTO64 external,JsGetExtensionAllowed, :QWORD,:QWORD
PROTO64 external,JsGetExternalData, :QWORD,:QWORD
PROTO64 external,JsGetExternalType, :QWORD,:QWORD
PROTO64 external,JsGetFalseValue, :QWORD
PROTO64 external,JsGetGlobalObject, :QWORD
PROTO64 external,JsGetIndexedPropertiesExternalData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsGetIndexedProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,JsGetNullValue, :QWORD
PROTO64 external,JsGetOwnPropertyDescriptor, :QWORD,:QWORD,:QWORD
PROTO64 external,JsGetOwnPropertyNames, :QWORD,:QWORD
PROTO64 external,JsGetOwnPropertySymbols, :QWORD,:QWORD
PROTO64 external,JsGetProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,JsGetPropertyIdFromName, :QWORD,:QWORD
PROTO64 external,JsGetPropertyIdFromSymbol, :QWORD,:QWORD
PROTO64 external,JsGetPropertyIdType, :QWORD,:QWORD
PROTO64 external,JsGetPropertyNameFromId, :QWORD,:QWORD
PROTO64 external,JsGetPrototype, :QWORD,:QWORD
PROTO64 external,JsGetRuntime, :QWORD,:QWORD
PROTO64 external,JsGetRuntimeMemoryLimit, :QWORD,:QWORD
PROTO64 external,JsGetRuntimeMemoryUsage, :QWORD,:QWORD
PROTO64 external,JsGetStringLength, :QWORD,:QWORD
PROTO64 external,JsGetSymbolFromPropertyId, :QWORD,:QWORD
PROTO64 external,JsGetTrueValue, :QWORD
PROTO64 external,JsGetTypedArrayStorage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsGetUndefinedValue, :QWORD
PROTO64 external,JsGetValueType, :QWORD,:QWORD
PROTO64 external,JsHasException, :QWORD
PROTO64 external,JsHasExternalData, :QWORD,:QWORD
PROTO64 external,JsHasIndexedPropertiesExternalData, :QWORD,:QWORD
PROTO64 external,JsHasIndexedProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,JsHasProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,JsIdle, :QWORD
PROTO64 external,JsInspectableToObject, :QWORD,:QWORD
PROTO64 external,JsIntToNumber, :QWORD,:QWORD
PROTO64 external,JsIsEnumeratingHeap, :QWORD
PROTO64 external,JsIsRuntimeExecutionDisabled, :QWORD,:QWORD
PROTO64 external,JsNumberToDouble, :QWORD,:QWORD
PROTO64 external,JsNumberToInt, :QWORD,:QWORD
PROTO64 external,JsObjectToInspectable, :QWORD,:QWORD
PROTO64 external,JsParseScript, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsParseSerializedScript, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsPointerToString, :QWORD,:QWORD,:QWORD
PROTO64 external,JsPreventExtension, :QWORD
PROTO64 external,JsProjectWinRTNamespace, :QWORD
PROTO64 external,JsRelease, :QWORD,:QWORD
PROTO64 external,JsRunScript, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsRunSerializedScript, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsSerializeScript, :QWORD,:QWORD,:QWORD
PROTO64 external,JsSetCurrentContext, :QWORD
PROTO64 external,JsSetException, :QWORD
PROTO64 external,JsSetExternalData, :QWORD,:QWORD
PROTO64 external,JsSetIndexedPropertiesToExternalData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsSetIndexedProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,JsSetObjectBeforeCollectCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,JsSetProjectionEnqueueCallback, :QWORD,:QWORD
PROTO64 external,JsSetPromiseContinuationCallback, :QWORD,:QWORD
PROTO64 external,JsSetProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,JsSetPrototype, :QWORD,:QWORD
PROTO64 external,JsSetRuntimeBeforeCollectCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,JsSetRuntimeMemoryAllocationCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,JsSetRuntimeMemoryLimit, :QWORD,:QWORD
PROTO64 external,JsStartDebugging, 
PROTO64 external,JsStartProfiling, :QWORD,:QWORD,:QWORD
PROTO64 external,JsStopProfiling, :QWORD
PROTO64 external,JsStrictEquals, :QWORD,:QWORD,:QWORD
PROTO64 external,JsStringToPointer, :QWORD,:QWORD,:QWORD
PROTO64 external,JsValueToVariant, :QWORD,:QWORD
PROTO64 external,JsVarAddRef, :QWORD
PROTO64 external,JsVarRelease, :QWORD
PROTO64 external,JsVarToExtension, :QWORD,:QWORD
PROTO64 external,JsVariantToValue, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file chakrart.inc
echo -----------------------------------------
ENDIF

