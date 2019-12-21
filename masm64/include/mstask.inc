IFNDEF MSTASK_INC
MSTASK_INC equ <1>

PROTO64 external,ConvertAtJobsToTasks, 
PROTO64 external,GetNetScheduleAccountInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,NetrJobAdd, :QWORD,:QWORD,:QWORD
PROTO64 external,NetrJobDel, :QWORD,:QWORD,:QWORD
PROTO64 external,NetrJobEnum, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NetrJobGetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,SAGetAccountInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SAGetNSAccountInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,SASetAccountInformation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SASetNSAccountInformation, :QWORD,:QWORD,:QWORD
PROTO64 external,SetNetScheduleAccountInformation, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mstask.inc
echo -----------------------------------------
ENDIF

