IFNDEF ICM32_INC
ICM32_INC equ <1>

PROTO64 external,CMCheckColors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMCheckColorsInGamut, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMCheckRGBs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMConvertColorNameToIndex, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMConvertIndexToColorName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMCreateDeviceLinkProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMCreateMultiProfileTransform, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMCreateProfile, :QWORD,:QWORD
PROTO64 external,CMCreateProfileW, :QWORD,:QWORD
PROTO64 external,CMCreateTransform, :QWORD,:QWORD,:QWORD
PROTO64 external,CMCreateTransformExt, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMCreateTransformExtW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMCreateTransformW, :QWORD,:QWORD,:QWORD
PROTO64 external,CMDeleteTransform, :QWORD
PROTO64 external,CMGetInfo, :QWORD
PROTO64 external,CMGetNamedProfileInfo, :QWORD,:QWORD
PROTO64 external,CMIsProfileValid, :QWORD,:QWORD
PROTO64 external,CMTranslateColors, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMTranslateRGB, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMTranslateRGBs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CMTranslateRGBsExt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file icm32.inc
echo -----------------------------------------
ENDIF

