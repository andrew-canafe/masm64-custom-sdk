IFNDEF IMM32_INC
IMM32_INC equ <1>

PROTO64 external,ImmAssociateContext, :QWORD,:QWORD
PROTO64 external,ImmAssociateContextEx, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmConfigureIMEA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmConfigureIMEW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmCreateContext, 
PROTO64 external,ImmCreateIMCC, :QWORD
PROTO64 external,ImmCreateSoftKeyboard, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmDestroyContext, :QWORD
PROTO64 external,ImmDestroyIMCC, :QWORD
PROTO64 external,ImmDestroySoftKeyboard, :QWORD
PROTO64 external,ImmDisableIME, :QWORD
PROTO64 external,ImmDisableLegacyIME, 
PROTO64 external,ImmDisableTextFrameService, :QWORD
PROTO64 external,ImmEnumInputContext, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmEnumRegisterWordA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmEnumRegisterWordW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmEscapeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmEscapeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGenerateMessage, :QWORD
PROTO64 external,ImmGetCandidateListA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetCandidateListCountA, :QWORD,:QWORD
PROTO64 external,ImmGetCandidateListCountW, :QWORD,:QWORD
PROTO64 external,ImmGetCandidateListW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetCandidateWindow, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetCompositionFontA, :QWORD,:QWORD
PROTO64 external,ImmGetCompositionFontW, :QWORD,:QWORD
PROTO64 external,ImmGetCompositionStringA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetCompositionStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetCompositionWindow, :QWORD,:QWORD
PROTO64 external,ImmGetContext, :QWORD
PROTO64 external,ImmGetConversionListA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetConversionListW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetConversionStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetDefaultIMEWnd, :QWORD
PROTO64 external,ImmGetDescriptionA, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetDescriptionW, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetGuideLineA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetGuideLineW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetHotKey, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetIMCCLockCount, :QWORD
PROTO64 external,ImmGetIMCCSize, :QWORD
PROTO64 external,ImmGetIMCLockCount, :QWORD
PROTO64 external,ImmGetIMEFileNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetIMEFileNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetImeMenuItemsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetImeMenuItemsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetOpenStatus, :QWORD
PROTO64 external,ImmGetProperty, :QWORD,:QWORD
PROTO64 external,ImmGetRegisterWordStyleA, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetRegisterWordStyleW, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmGetStatusWindowPos, :QWORD,:QWORD
PROTO64 external,ImmGetVirtualKey, :QWORD
PROTO64 external,ImmInstallIMEA, :QWORD,:QWORD
PROTO64 external,ImmInstallIMEW, :QWORD,:QWORD
PROTO64 external,ImmIsIME, :QWORD
PROTO64 external,ImmIsUIMessageA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmIsUIMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmLockIMC, :QWORD
PROTO64 external,ImmLockIMCC, :QWORD
PROTO64 external,ImmNotifyIME, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmReSizeIMCC, :QWORD,:QWORD
PROTO64 external,ImmRegisterWordA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmRegisterWordW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmReleaseContext, :QWORD,:QWORD
PROTO64 external,ImmRequestMessageA, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmRequestMessageW, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmSetCandidateWindow, :QWORD,:QWORD
PROTO64 external,ImmSetCompositionFontA, :QWORD,:QWORD
PROTO64 external,ImmSetCompositionFontW, :QWORD,:QWORD
PROTO64 external,ImmSetCompositionStringA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmSetCompositionStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmSetCompositionWindow, :QWORD,:QWORD
PROTO64 external,ImmSetConversionStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,ImmSetHotKey, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmSetOpenStatus, :QWORD,:QWORD
PROTO64 external,ImmSetStatusWindowPos, :QWORD,:QWORD
PROTO64 external,ImmShowSoftKeyboard, :QWORD,:QWORD
PROTO64 external,ImmSimulateHotKey, :QWORD,:QWORD
PROTO64 external,ImmUnlockIMC, :QWORD
PROTO64 external,ImmUnlockIMCC, :QWORD
PROTO64 external,ImmUnregisterWordA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImmUnregisterWordW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file imm32.inc
echo -----------------------------------------
ENDIF

