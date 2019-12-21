IFNDEF DCIMAN32_INC
DCIMAN32_INC equ <1>

PROTO64 external,DCIBeginAccess, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DCICloseProvider, :QWORD
PROTO64 external,DCICreateOffscreen, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DCICreateOverlay, :QWORD,:QWORD,:QWORD
PROTO64 external,DCICreatePrimary, :QWORD,:QWORD
PROTO64 external,DCIDestroy, :QWORD
PROTO64 external,DCIDraw, :QWORD
PROTO64 external,DCIEndAccess, :QWORD
PROTO64 external,DCIEnum, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DCIOpenProvider, 
PROTO64 external,DCISetClipList, :QWORD,:QWORD
PROTO64 external,DCISetDestination, :QWORD,:QWORD,:QWORD
PROTO64 external,DCISetSrcDestClip, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDCRegionData, :QWORD,:QWORD,:QWORD
PROTO64 external,GetWindowRegionData, :QWORD,:QWORD,:QWORD
PROTO64 external,WinWatchClose, :QWORD
PROTO64 external,WinWatchDidStatusChange, :QWORD
PROTO64 external,WinWatchGetClipList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinWatchNotify, :QWORD,:QWORD,:QWORD
PROTO64 external,WinWatchOpen, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dciman32.inc
echo -----------------------------------------
ENDIF

