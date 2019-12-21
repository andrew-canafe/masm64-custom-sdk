IFNDEF WOW32_INC
WOW32_INC equ <1>

PROTO64 external,CopyDropFilesFrom16, :QWORD
PROTO64 external,CopyDropFilesFrom32, :QWORD
PROTO64 external,GetCommHandle, :QWORD
PROTO64 external,GetCommShadowMSR, :QWORD
PROTO64 external,W32Dispatch, 
PROTO64 external,W32HungAppNotifyThread, :QWORD
PROTO64 external,W32Init, :QWORD
PROTO64 external,WOW32DriverCallback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WOW32ResolveHandle, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WOW32ResolveMemory, :QWORD
PROTO64 external,WOWCallback16, :QWORD,:QWORD
PROTO64 external,WOWCallback16Ex, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WOWDirectedYield16, :QWORD
PROTO64 external,WOWFreeMetafile, :QWORD
PROTO64 external,WOWGetVDMPointer, :QWORD,:QWORD,:QWORD
PROTO64 external,WOWGetVDMPointerFix, :QWORD,:QWORD,:QWORD
PROTO64 external,WOWGetVDMPointerUnfix, :QWORD
PROTO64 external,WOWGlobalAlloc16, :QWORD,:QWORD
PROTO64 external,WOWGlobalAllocLock16, :QWORD,:QWORD,:QWORD
PROTO64 external,WOWGlobalFree16, :QWORD
PROTO64 external,WOWGlobalLock16, :QWORD
PROTO64 external,WOWGlobalLockSize16, :QWORD,:QWORD
PROTO64 external,WOWGlobalUnlock16, :QWORD
PROTO64 external,WOWGlobalUnlockFree16, :QWORD
PROTO64 external,WOWHandle16, :QWORD,:QWORD
PROTO64 external,WOWHandle32, :QWORD,:QWORD
PROTO64 external,WOWUseMciavi16, 
PROTO64 external,WOWYield16, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wow32.inc
echo -----------------------------------------
ENDIF

