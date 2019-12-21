IFNDEF VSSAPI_INC
VSSAPI_INC equ <1>

PROTO64 external,CreateVssBackupComponentsInternal, :QWORD
PROTO64 external,CreateVssExamineWriterMetadataInternal, :QWORD,:QWORD
PROTO64 external,CreateVssExpressWriterInternal, :QWORD
PROTO64 external,CreateWriter, :QWORD,:QWORD
PROTO64 external,CreateWriterEx, :QWORD,:QWORD
PROTO64 external,GetProviderMgmtInterfaceInternal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsVolumeSnapshottedInternal, :QWORD,:QWORD,:QWORD
PROTO64 external,ShouldBlockRevertInternal, :QWORD,:QWORD
PROTO64 external,VssFreeSnapshotPropertiesInternal, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file vssapi.inc
echo -----------------------------------------
ENDIF

