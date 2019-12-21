IFNDEF WEVTAPI_INC
WEVTAPI_INC equ <1>

PROTO64 external,EvtArchiveExportedLog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtCancel, :QWORD
PROTO64 external,EvtClearLog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtClose, :QWORD
PROTO64 external,EvtCreateBookmark, :QWORD
PROTO64 external,EvtCreateRenderContext, :QWORD,:QWORD,:QWORD
PROTO64 external,EvtExportLog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtFormatMessage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtGetChannelConfigProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtGetEventInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtGetEventMetadataProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtGetExtendedStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,EvtGetLogInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtGetObjectArrayProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtGetObjectArraySize, :QWORD,:QWORD
PROTO64 external,EvtGetPublisherMetadataProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtGetQueryInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtIntAssertConfig, :QWORD,:QWORD,:QWORD
PROTO64 external,EvtIntCreateBinXMLFromCustomXML, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtIntCreateLocalLogfile, :QWORD,:QWORD
PROTO64 external,EvtIntGetClassicLogDisplayName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtIntRenderResourceEventTemplate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtIntReportAuthzEventAndSourceAsync, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtIntReportEventAndSourceAsync, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtIntRetractConfig, :QWORD,:QWORD,:QWORD
PROTO64 external,EvtIntWriteXmlEventToLocalLogfile, :QWORD,:QWORD,:QWORD
PROTO64 external,EvtNext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtNextChannelPath, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtNextEventMetadata, :QWORD,:QWORD
PROTO64 external,EvtNextPublisherId, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtOpenChannelConfig, :QWORD,:QWORD,:QWORD
PROTO64 external,EvtOpenChannelEnum, :QWORD,:QWORD
PROTO64 external,EvtOpenEventMetadataEnum, :QWORD,:QWORD
PROTO64 external,EvtOpenLog, :QWORD,:QWORD,:QWORD
PROTO64 external,EvtOpenPublisherEnum, :QWORD,:QWORD
PROTO64 external,EvtOpenPublisherMetadata, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtOpenSession, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtQuery, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtRender, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtSaveChannelConfig, :QWORD,:QWORD
PROTO64 external,EvtSeek, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtSetChannelConfigProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtSubscribe, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EvtUpdateBookmark, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wevtapi.inc
echo -----------------------------------------
ENDIF

