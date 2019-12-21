IFNDEF RTWORKQ_INC
RTWORKQ_INC equ <1>

PROTO64 external,RtwqAddPeriodicCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,RtwqAllocateSerialWorkQueue, :QWORD,:QWORD
PROTO64 external,RtwqAllocateWorkQueue, :QWORD,:QWORD
PROTO64 external,RtwqBeginRegisterWorkQueueWithMMCSS, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtwqBeginUnregisterWorkQueueWithMMCSS, :QWORD,:QWORD,:QWORD
PROTO64 external,RtwqCancelDeadline, :QWORD
PROTO64 external,RtwqCancelWorkItem, :QWORD,:QWORD
PROTO64 external,RtwqCreateAsyncResult, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtwqEndRegisterWorkQueueWithMMCSS, :QWORD,:QWORD
PROTO64 external,RtwqEndUnregisterWorkQueueWithMMCSS, :QWORD
PROTO64 external,RtwqGetWorkQueueMMCSSClass, :QWORD,:QWORD,:QWORD
PROTO64 external,RtwqGetWorkQueueMMCSSPriority, :QWORD,:QWORD
PROTO64 external,RtwqGetWorkQueueMMCSSTaskId, :QWORD,:QWORD
PROTO64 external,RtwqInvokeCallback, :QWORD
PROTO64 external,RtwqJoinWorkQueue, :QWORD,:QWORD,:QWORD
PROTO64 external,RtwqLockPlatform, 
PROTO64 external,RtwqLockSharedWorkQueue, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtwqLockWorkQueue, :QWORD
PROTO64 external,RtwqPutWaitingWorkItem, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtwqPutWorkItem, :QWORD,:QWORD,:QWORD
PROTO64 external,RtwqRegisterPlatformEvents, :QWORD
PROTO64 external,RtwqRegisterPlatformWithMMCSS, :QWORD,:QWORD,:QWORD
PROTO64 external,RtwqRemovePeriodicCallback, :QWORD
PROTO64 external,RtwqScheduleWorkItem, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtwqSetDeadline, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RtwqSetLongRunning, :QWORD,:QWORD
PROTO64 external,RtwqShutdown, 
PROTO64 external,RtwqStartup, 
PROTO64 external,RtwqUnjoinWorkQueue, :QWORD,:QWORD
PROTO64 external,RtwqUnlockPlatform, 
PROTO64 external,RtwqUnlockWorkQueue, :QWORD
PROTO64 external,RtwqUnregisterPlatformEvents, :QWORD
PROTO64 external,RtwqUnregisterPlatformFromMMCSS, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rtworkq.inc
echo -----------------------------------------
ENDIF

