IFNDEF NINPUT_INC
NINPUT_INC equ <1>

PROTO64 external,AddPointerInteractionContext, :QWORD,:QWORD
PROTO64 external,BufferPointerPacketsInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateInteractionContext, :QWORD
PROTO64 external,DestroyInteractionContext, :QWORD
PROTO64 external,GetCrossSlideParameterInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,GetInertiaParameterInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,GetInteractionConfigurationInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,GetMouseWheelParameterInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,GetPropertyInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,GetStateInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,ProcessBufferedPacketsInteractionContext, :QWORD
PROTO64 external,ProcessInertiaInteractionContext, :QWORD
PROTO64 external,ProcessPointerFramesInteractionContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterOutputCallbackInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,RemovePointerInteractionContext, :QWORD,:QWORD
PROTO64 external,ResetInteractionContext, :QWORD
PROTO64 external,SetCrossSlideParametersInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,SetInertiaParameterInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,SetInteractionConfigurationInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,SetMouseWheelParameterInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,SetPivotInteractionContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetPropertyInteractionContext, :QWORD,:QWORD,:QWORD
PROTO64 external,StopInteractionContext, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ninput.inc
echo -----------------------------------------
ENDIF

