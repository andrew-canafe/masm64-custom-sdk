IFNDEF SENSORSUTILS_INC
SENSORSUTILS_INC equ <1>

PROTO64 external,CollectionsListAllocateBufferAndSerialize, :QWORD,:QWORD,:QWORD
PROTO64 external,CollectionsListCopyAndMarshall, :QWORD,:QWORD
PROTO64 external,CollectionsListDeserializeFromBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,CollectionsListGetFillableCount, :QWORD
PROTO64 external,CollectionsListGetMarshalledSize, :QWORD
PROTO64 external,CollectionsListGetMarshalledSizeWithoutSerialization, :QWORD
PROTO64 external,CollectionsListGetSerializedSize, :QWORD
PROTO64 external,CollectionsListMarshall, :QWORD
PROTO64 external,CollectionsListSerializeToBuffer, :QWORD,:QWORD,:QWORD
PROTO64 external,CollectionsListSortSubscribedActivitiesByConfidence, :QWORD,:QWORD
PROTO64 external,CollectionsListUpdateMarshalledPointer, :QWORD
PROTO64 external,ConvertAccelerometerDataToCollection, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertCollectionToAccelerometerData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertCollectionToGyroscopeData, :QWORD,:QWORD
PROTO64 external,ConvertCollectionToLightSensorData, :QWORD,:QWORD
PROTO64 external,ConvertCollectionToMagnetometerData, :QWORD,:QWORD,:QWORD
PROTO64 external,ConvertCollectionToOrientationData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertCollectionToProximitySensorData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertGyroscopeDataToCollection, :QWORD,:QWORD,:QWORD
PROTO64 external,ConvertLightSensorDataToCollection, :QWORD,:QWORD
PROTO64 external,ConvertMagnetometerDataToCollection, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertOrientationDataToCollection, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertProximitySensorDataToCollection, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertSimpleOrientationDataToCollection, :QWORD,:QWORD,:QWORD
PROTO64 external,EvaluateActivityThresholds, :QWORD,:QWORD,:QWORD
PROTO64 external,GetPerformanceTime, :QWORD
PROTO64 external,InitPropVariantFromFloat, :QWORD,:QWORD
PROTO64 external,IsCollectionListSame, :QWORD,:QWORD
PROTO64 external,IsKeyPresentInCollectionList, :QWORD,:QWORD
PROTO64 external,IsKeyPresentInPropertyList, :QWORD,:QWORD
PROTO64 external,MapActivityConfidenceToState, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetBool, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetDouble, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetFileTime, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetFloat, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetGuid, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetInt32, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetInt64, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetNthInt64, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetNthUlong, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetNthUshort, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetPropVariant, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetUlong, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeyGetUshort, :QWORD,:QWORD,:QWORD
PROTO64 external,PropKeyFindKeySetPropVariant, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PropVariantGetInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PropertiesListCopy, :QWORD,:QWORD
PROTO64 external,PropertiesListGetFillableCount, :QWORD
PROTO64 external,SensorCollectionGetAt, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SerializationBufferAllocate, :QWORD,:QWORD
PROTO64 external,SerializationBufferFree, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sensorsutils.inc
echo -----------------------------------------
ENDIF

