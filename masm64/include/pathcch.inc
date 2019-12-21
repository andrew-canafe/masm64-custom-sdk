IFNDEF PATHCCH_INC
PATHCCH_INC equ <1>

PROTO64 external,PathAllocCanonicalize, :QWORD,:QWORD,:QWORD
PROTO64 external,PathAllocCombine, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCchAddBackslash, :QWORD,:QWORD
PROTO64 external,PathCchAddBackslashEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCchAddExtension, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCchAppend, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCchAppendEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCchCanonicalize, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCchCanonicalizeEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCchCombine, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCchCombineEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCchFindExtension, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCchIsRoot, :QWORD
PROTO64 external,PathCchRemoveBackslash, :QWORD,:QWORD
PROTO64 external,PathCchRemoveBackslashEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PathCchRemoveExtension, :QWORD,:QWORD
PROTO64 external,PathCchRemoveFileSpec, :QWORD,:QWORD
PROTO64 external,PathCchRenameExtension, :QWORD,:QWORD,:QWORD
PROTO64 external,PathCchSkipRoot, :QWORD,:QWORD
PROTO64 external,PathCchStripPrefix, :QWORD,:QWORD
PROTO64 external,PathCchStripToRoot, :QWORD,:QWORD
PROTO64 external,PathIsUNCEx, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file pathcch.inc
echo -----------------------------------------
ENDIF

