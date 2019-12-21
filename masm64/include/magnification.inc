IFNDEF MAGNIFICATION_INC
MAGNIFICATION_INC equ <1>

PROTO64 external,MagGetColorEffect, :QWORD,:QWORD
PROTO64 external,MagGetFullscreenColorEffect, :QWORD
PROTO64 external,MagGetFullscreenTransform, :QWORD,:QWORD,:QWORD
PROTO64 external,MagGetImageScalingCallback, :QWORD
PROTO64 external,MagGetInputTransform, :QWORD,:QWORD,:QWORD
PROTO64 external,MagGetWindowFilterList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MagGetWindowSource, :QWORD,:QWORD
PROTO64 external,MagGetWindowTransform, :QWORD,:QWORD
PROTO64 external,MagInitialize, 
PROTO64 external,MagSetColorEffect, :QWORD,:QWORD
PROTO64 external,MagSetFullscreenColorEffect, :QWORD
PROTO64 external,MagSetFullscreenTransform, :QWORD,:QWORD,:QWORD
PROTO64 external,MagSetImageScalingCallback, :QWORD,:QWORD
PROTO64 external,MagSetInputTransform, :QWORD,:QWORD,:QWORD
PROTO64 external,MagSetWindowFilterList, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MagSetWindowSource, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MagSetWindowTransform, :QWORD,:QWORD
PROTO64 external,MagShowSystemCursor, :QWORD
PROTO64 external,MagUninitialize, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file magnification.inc
echo -----------------------------------------
ENDIF

