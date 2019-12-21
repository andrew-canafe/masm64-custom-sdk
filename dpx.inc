IFNDEF DPX_INC
DPX_INC equ <1>

PROTO64 external,DpxFreeMemory, :QWORD
PROTO64 external,DpxNewJob, :QWORD,:QWORD
PROTO64 external,DpxNewJobEx, :QWORD,:QWORD,:QWORD
PROTO64 external,DpxRestoreJob, :QWORD,:QWORD
PROTO64 external,DpxRestoreJobEx, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dpx.inc
echo -----------------------------------------
ENDIF

