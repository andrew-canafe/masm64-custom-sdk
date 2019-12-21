IFNDEF DWMAPI_INC
DWMAPI_INC equ <1>

PROTO64 external,DwmAttachMilContent, :QWORD
PROTO64 external,DwmDefWindowProc, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DwmDetachMilContent, :QWORD
PROTO64 external,DwmEnableBlurBehindWindow, :QWORD,:QWORD
PROTO64 external,DwmEnableComposition, :QWORD
PROTO64 external,DwmEnableMMCSS, :QWORD
PROTO64 external,DwmExtendFrameIntoClientArea, :QWORD,:QWORD
PROTO64 external,DwmFlush, 
PROTO64 external,DwmGetColorizationColor, :QWORD,:QWORD
PROTO64 external,DwmGetCompositionTimingInfo, :QWORD,:QWORD
PROTO64 external,DwmGetGraphicsStreamClient, :QWORD,:QWORD
PROTO64 external,DwmGetGraphicsStreamTransformHint, :QWORD,:QWORD
PROTO64 external,DwmGetTransportAttributes, :QWORD,:QWORD,:QWORD
PROTO64 external,DwmGetWindowAttribute, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DwmInvalidateIconicBitmaps, :QWORD
PROTO64 external,DwmIsCompositionEnabled, :QWORD
PROTO64 external,DwmModifyPreviousDxFrameDuration, :QWORD,:QWORD,:QWORD
PROTO64 external,DwmQueryThumbnailSourceSize, :QWORD,:QWORD
PROTO64 external,DwmRegisterThumbnail, :QWORD,:QWORD,:QWORD
PROTO64 external,DwmRenderGesture, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DwmSetDxFrameDuration, :QWORD,:QWORD
PROTO64 external,DwmSetIconicLivePreviewBitmap, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DwmSetIconicThumbnail, :QWORD,:QWORD,:QWORD
PROTO64 external,DwmSetPresentParameters, :QWORD,:QWORD
PROTO64 external,DwmSetWindowAttribute, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DwmShowContact, :QWORD,:QWORD
PROTO64 external,DwmTetherContact, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DwmTransitionOwnedWindow, :QWORD,:QWORD
PROTO64 external,DwmUnregisterThumbnail, :QWORD
PROTO64 external,DwmUpdateThumbnailProperties, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dwmapi.inc
echo -----------------------------------------
ENDIF

