IFNDEF IASHLPR_INC
IASHLPR_INC equ <1>

PROTO64 external,AllocateAttributes, :QWORD,:QWORD
PROTO64 external,ConfigureIas, 
PROTO64 external,DoRequest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DoRequestAsync, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeAttributes, :QWORD,:QWORD
PROTO64 external,GetOptionIas, :QWORD,:QWORD
PROTO64 external,InitializeIas, :QWORD
PROTO64 external,MemAllocIas, :QWORD
PROTO64 external,MemFreeIas, :QWORD
PROTO64 external,MemReallocIas, :QWORD,:QWORD
PROTO64 external,SetOptionIas, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ShutdownIas, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file iashlpr.inc
echo -----------------------------------------
ENDIF

