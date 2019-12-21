IFNDEF MSACM32_INC
MSACM32_INC equ <1>

PROTO64 external,XRegThunkEntry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverAddA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverAddW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverClose, :QWORD,:QWORD
PROTO64 external,acmDriverDetailsA, :QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverDetailsW, :QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverEnum, :QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverID, :QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverOpen, :QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverPriority, :QWORD,:QWORD,:QWORD
PROTO64 external,acmDriverRemove, :QWORD,:QWORD
PROTO64 external,acmFilterChooseA, :QWORD
PROTO64 external,acmFilterChooseW, :QWORD
PROTO64 external,acmFilterDetailsA, :QWORD,:QWORD,:QWORD
PROTO64 external,acmFilterDetailsW, :QWORD,:QWORD,:QWORD
PROTO64 external,acmFilterEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmFilterEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmFilterTagDetailsA, :QWORD,:QWORD,:QWORD
PROTO64 external,acmFilterTagDetailsW, :QWORD,:QWORD,:QWORD
PROTO64 external,acmFilterTagEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmFilterTagEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatChooseA, :QWORD
PROTO64 external,acmFormatChooseW, :QWORD
PROTO64 external,acmFormatDetailsA, :QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatDetailsW, :QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatSuggest, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatTagDetailsA, :QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatTagDetailsW, :QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatTagEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmFormatTagEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmGetVersion, 
PROTO64 external,acmMessage32, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmMetrics, :QWORD,:QWORD,:QWORD
PROTO64 external,acmStreamClose, :QWORD,:QWORD
PROTO64 external,acmStreamConvert, :QWORD,:QWORD,:QWORD
PROTO64 external,acmStreamMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmStreamOpen, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmStreamPrepareHeader, :QWORD,:QWORD,:QWORD
PROTO64 external,acmStreamReset, :QWORD,:QWORD
PROTO64 external,acmStreamSize, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,acmStreamUnprepareHeader, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msacm32.inc
echo -----------------------------------------
ENDIF

