IFNDEF VDMDBG_INC
VDMDBG_INC equ <1>

PROTO64 external,VDMBreakThread, :QWORD,:QWORD
PROTO64 external,VDMDetectWOW, 
PROTO64 external,VDMEnumProcessWOW, :QWORD,:QWORD
PROTO64 external,VDMEnumTaskWOW, :QWORD,:QWORD,:QWORD
PROTO64 external,VDMEnumTaskWOWEx, :QWORD,:QWORD,:QWORD
PROTO64 external,VDMGetAddrExpression, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMGetContext, :QWORD,:QWORD,:QWORD
PROTO64 external,VDMGetDbgFlags, :QWORD
PROTO64 external,VDMGetModuleSelector, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMGetPointer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMGetSegmentInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMGetSegtablePointer, 
PROTO64 external,VDMGetSelectorModule, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMGetSymbol, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMGetThreadContext, :QWORD,:QWORD
PROTO64 external,VDMGetThreadSelectorEntry, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMGlobalFirst, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMGlobalNext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMIsModuleLoaded, :QWORD
PROTO64 external,VDMKillWOW, 
PROTO64 external,VDMModuleFirst, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMModuleNext, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDMProcessException, :QWORD
PROTO64 external,VDMSetContext, :QWORD,:QWORD,:QWORD
PROTO64 external,VDMSetDbgFlags, :QWORD,:QWORD
PROTO64 external,VDMSetThreadContext, :QWORD,:QWORD
PROTO64 external,VDMStartTaskInWOW, :QWORD,:QWORD,:QWORD
PROTO64 external,VDMTerminateTaskWOW, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file vdmdbg.inc
echo -----------------------------------------
ENDIF

