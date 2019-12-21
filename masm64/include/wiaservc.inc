IFNDEF WIASERVC_INC
WIASERVC_INC equ <1>

PROTO64 external,wiasCreateChildAppItem, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasCreateDrvItem, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasCreateLogInstance, :QWORD,:QWORD
PROTO64 external,wiasCreatePropContext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasDownSampleBuffer, :QWORD,:QWORD
PROTO64 external,wiasFreePropContext, :QWORD
PROTO64 external,wiasGetChangedValueFloat, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasGetChangedValueGuid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasGetChangedValueLong, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasGetChangedValueStr, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasGetChildrenContexts, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasGetContextFromName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasGetDrvItem, :QWORD,:QWORD
PROTO64 external,wiasGetImageInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasGetItemType, :QWORD,:QWORD
PROTO64 external,wiasGetPropertyAttributes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasGetRootItem, :QWORD,:QWORD
PROTO64 external,wiasIsPropChanged, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasParseEndorserString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasPrintDebugHResult, :QWORD,:QWORD
PROTO64 external,wiasQueueEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasReadMultiple, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasReadPropBin, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasReadPropFloat, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasReadPropGuid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasReadPropLong, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasReadPropStr, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSendEndOfPage, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetItemPropAttribs, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetItemPropNames, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetPropChanged, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetPropertyAttributes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetValidFlag, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetValidListFloat, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetValidListGuid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetValidListLong, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetValidListStr, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetValidRangeFloat, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasSetValidRangeLong, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasUpdateScanRect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasUpdateValidFormat, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasValidateItemProperties, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasWriteBufToFile, :QWORD,:QWORD
PROTO64 external,wiasWriteMultiple, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasWritePageBufToFile, :QWORD
PROTO64 external,wiasWritePageBufToStream, :QWORD,:QWORD
PROTO64 external,wiasWritePropBin, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasWritePropFloat, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasWritePropGuid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,wiasWritePropLong, :QWORD,:QWORD,:QWORD
PROTO64 external,wiasWritePropStr, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wiaservc.inc
echo -----------------------------------------
ENDIF

