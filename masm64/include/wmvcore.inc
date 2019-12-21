IFNDEF WMVCORE_INC
WMVCORE_INC equ <1>

PROTO64 external,WMCreateBackupRestorer, :QWORD,:QWORD
PROTO64 external,WMCreateEditor, :QWORD
PROTO64 external,WMCreateIndexer, :QWORD
PROTO64 external,WMCreateProfileManager, :QWORD
PROTO64 external,WMCreateReader, :QWORD,:QWORD,:QWORD
PROTO64 external,WMCreateReaderPriv, :QWORD
PROTO64 external,WMCreateSyncReader, :QWORD,:QWORD,:QWORD
PROTO64 external,WMCreateWriter, :QWORD,:QWORD
PROTO64 external,WMCreateWriterFileSink, :QWORD
PROTO64 external,WMCreateWriterNetworkSink, :QWORD
PROTO64 external,WMCreateWriterPriv, :QWORD
PROTO64 external,WMCreateWriterPushSink, :QWORD
PROTO64 external,WMIsContentProtected, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wmvcore.inc
echo -----------------------------------------
ENDIF

