IFNDEF VIRTDISK_INC
VIRTDISK_INC equ <1>

PROTO64 external,AddVirtualDiskParent, :QWORD,:QWORD
PROTO64 external,AttachVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BreakMirrorVirtualDisk, :QWORD
PROTO64 external,CompactVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteSnapshotVhdSet, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteVirtualDiskMetadata, :QWORD,:QWORD
PROTO64 external,DetachVirtualDisk, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumerateVirtualDiskMetadata, :QWORD,:QWORD,:QWORD
PROTO64 external,ExpandVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAllAttachedVirtualDiskPhysicalPaths, :QWORD,:QWORD
PROTO64 external,GetStorageDependencyInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVirtualDiskInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVirtualDiskMetadata, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetVirtualDiskOperationProgress, :QWORD,:QWORD,:QWORD
PROTO64 external,GetVirtualDiskPhysicalPath, :QWORD,:QWORD,:QWORD
PROTO64 external,MergeVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MirrorVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ModifyVhdSet, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,QueryChangesVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResizeVirtualDisk, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetVirtualDiskInformation, :QWORD,:QWORD
PROTO64 external,SetVirtualDiskMetadata, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TakeSnapshotVhdSet, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file virtdisk.inc
echo -----------------------------------------
ENDIF

