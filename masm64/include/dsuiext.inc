IFNDEF DSUIEXT_INC
DSUIEXT_INC equ <1>

PROTO64 external,CheckDsPolicy, :QWORD,:QWORD
PROTO64 external,DsBrowseForContainerA, :QWORD
PROTO64 external,DsBrowseForContainerW, :QWORD
PROTO64 external,DsGetFriendlyClassName, :QWORD,:QWORD,:QWORD
PROTO64 external,DsGetIcon, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FormatDirectoryName, :QWORD,:QWORD,:QWORD
PROTO64 external,GetArrayContents, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDisplayNameFromADsPath, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetStringElementA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetStringElementW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LocalAllocStringA2W, :QWORD,:QWORD
PROTO64 external,LocalAllocStringA, :QWORD,:QWORD
PROTO64 external,LocalAllocStringLenA, :QWORD,:QWORD
PROTO64 external,LocalAllocStringLenW, :QWORD,:QWORD
PROTO64 external,LocalAllocStringW2A, :QWORD,:QWORD
PROTO64 external,LocalAllocStringW, :QWORD,:QWORD
PROTO64 external,LocalFreeStringA, :QWORD
PROTO64 external,LocalFreeStringW, :QWORD
PROTO64 external,LocalQueryStringA, :QWORD,:QWORD,:QWORD
PROTO64 external,LocalQueryStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,ObjectClassFromSearchColumn, :QWORD,:QWORD
PROTO64 external,PutStringElementA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PutStringElementW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ShowDirectoryUI, 
PROTO64 external,StringDPA_AppendStringA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringDPA_AppendStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,StringDPA_DeleteString, :QWORD,:QWORD
PROTO64 external,StringDPA_Destroy, :QWORD
PROTO64 external,StringDPA_InsertStringA, :QWORD,:QWORD,:QWORD
PROTO64 external,StringDPA_InsertStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,StringFromSearchColumn, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dsuiext.inc
echo -----------------------------------------
ENDIF

