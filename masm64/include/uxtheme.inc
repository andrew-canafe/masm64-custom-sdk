IFNDEF UXTHEME_INC
UXTHEME_INC equ <1>

PROTO64 external,BeginBufferedAnimation, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BeginBufferedPaint, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BufferedPaintClear, :QWORD,:QWORD
PROTO64 external,BufferedPaintInit, 
PROTO64 external,BufferedPaintRenderAnimation, :QWORD,:QWORD
PROTO64 external,BufferedPaintSetAlpha, :QWORD,:QWORD,:QWORD
PROTO64 external,BufferedPaintStopAllAnimations, :QWORD
PROTO64 external,BufferedPaintUnInit, 
PROTO64 external,CloseThemeData, :QWORD
PROTO64 external,DrawThemeBackground, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawThemeBackgroundEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawThemeEdge, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawThemeIcon, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawThemeParentBackground, :QWORD,:QWORD,:QWORD
PROTO64 external,DrawThemeParentBackgroundEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawThemeText, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawThemeTextEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnableThemeDialogTexture, :QWORD,:QWORD
PROTO64 external,EnableTheming, :QWORD
PROTO64 external,EndBufferedAnimation, :QWORD,:QWORD
PROTO64 external,EndBufferedPaint, :QWORD,:QWORD
PROTO64 external,GetBufferedPaintBits, :QWORD,:QWORD,:QWORD
PROTO64 external,GetBufferedPaintDC, :QWORD
PROTO64 external,GetBufferedPaintTargetDC, :QWORD
PROTO64 external,GetBufferedPaintTargetRect, :QWORD,:QWORD
PROTO64 external,GetCurrentThemeName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeAnimationProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeAnimationTransform, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeAppProperties, 
PROTO64 external,GetThemeBackgroundContentRect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeBackgroundExtent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeBackgroundRegion, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeBitmap, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeBool, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeColor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeDocumentationProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeEnumValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeFilename, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeFont, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeInt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeIntList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeMargins, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeMetric, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemePartSize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemePosition, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemePropertyOrigin, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeRect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeStream, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeSysBool, :QWORD,:QWORD
PROTO64 external,GetThemeSysColor, :QWORD,:QWORD
PROTO64 external,GetThemeSysColorBrush, :QWORD,:QWORD
PROTO64 external,GetThemeSysFont, :QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeSysInt, :QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeSysSize, :QWORD,:QWORD
PROTO64 external,GetThemeSysString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeTextExtent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeTextMetrics, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeTimingFunction, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetThemeTransitionDuration, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetWindowTheme, :QWORD
PROTO64 external,HitTestThemeBackground, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsAppThemed, 
PROTO64 external,IsCompositionActive, 
PROTO64 external,IsThemeActive, 
PROTO64 external,IsThemeBackgroundPartiallyTransparent, :QWORD,:QWORD,:QWORD
PROTO64 external,IsThemeDialogTextureEnabled, :QWORD
PROTO64 external,IsThemePartDefined, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenThemeData, :QWORD,:QWORD
PROTO64 external,OpenThemeDataEx, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenThemeDataForDPI, :QWORD,:QWORD,:QWORD
PROTO64 external,SetThemeAppProperties, :QWORD
PROTO64 external,SetWindowTheme, :QWORD,:QWORD,:QWORD
PROTO64 external,SetWindowThemeAttribute, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ThemeInitApiHook, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file uxtheme.inc
echo -----------------------------------------
ENDIF

