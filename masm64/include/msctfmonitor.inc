IFNDEF MSCTFMONITOR_INC
MSCTFMONITOR_INC equ <1>

PROTO64 external,DoMsCtfMonitor, :QWORD,:QWORD
PROTO64 external,InitLocalMsCtfMonitor, :QWORD
PROTO64 external,UninitLocalMsCtfMonitor, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msctfmonitor.inc
echo -----------------------------------------
ENDIF

