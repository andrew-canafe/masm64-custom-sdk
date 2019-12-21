IFNDEF AVRT_INC
AVRT_INC equ <1>

PROTO64 external,AvCreateTaskIndex, :QWORD,:QWORD,:QWORD
PROTO64 external,AvQuerySystemResponsiveness, :QWORD,:QWORD
PROTO64 external,AvQueryTaskIndexValue, :QWORD,:QWORD
PROTO64 external,AvRevertMmThreadCharacteristics, :QWORD
PROTO64 external,AvRtCreateThreadOrderingGroup, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AvRtCreateThreadOrderingGroupExA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AvRtCreateThreadOrderingGroupExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AvRtDeleteThreadOrderingGroup, :QWORD
PROTO64 external,AvRtJoinThreadOrderingGroup, :QWORD,:QWORD,:QWORD
PROTO64 external,AvRtLeaveThreadOrderingGroup, :QWORD
PROTO64 external,AvRtWaitOnThreadOrderingGroup, :QWORD
PROTO64 external,AvSetMmMaxThreadCharacteristicsA, :QWORD,:QWORD,:QWORD
PROTO64 external,AvSetMmMaxThreadCharacteristicsW, :QWORD,:QWORD,:QWORD
PROTO64 external,AvSetMmThreadCharacteristicsA, :QWORD,:QWORD
PROTO64 external,AvSetMmThreadCharacteristicsW, :QWORD,:QWORD
PROTO64 external,AvSetMmThreadPriority, :QWORD,:QWORD
PROTO64 external,AvSetMultimediaMode, :QWORD,:QWORD
PROTO64 external,AvTaskIndexYield, :QWORD,:QWORD
PROTO64 external,AvTaskIndexYieldCancel, :QWORD
PROTO64 external,AvThreadOpenTaskIndex, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file avrt.inc
echo -----------------------------------------
ENDIF

