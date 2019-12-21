IFNDEF USP10_INC
USP10_INC equ <1>

PROTO64 external,ScriptApplyDigitSubstitution, :QWORD,:QWORD,:QWORD
PROTO64 external,ScriptApplyLogicalWidth, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptBreak, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptCPtoX, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptCacheGetHeight, :QWORD,:QWORD,:QWORD
PROTO64 external,ScriptFreeCache, :QWORD
PROTO64 external,ScriptGetCMap, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptGetFontAlternateGlyphs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptGetFontFeatureTags, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptGetFontLanguageTags, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptGetFontProperties, :QWORD,:QWORD,:QWORD
PROTO64 external,ScriptGetFontScriptTags, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptGetGlyphABCWidth, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptGetLogicalWidths, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptGetProperties, :QWORD,:QWORD
PROTO64 external,ScriptIsComplex, :QWORD,:QWORD,:QWORD
PROTO64 external,ScriptItemize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptItemizeOpenType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptJustify, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptLayout, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptPlace, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptPlaceOpenType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptPositionSingleGlyph, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptRecordDigitSubstitution, :QWORD,:QWORD
PROTO64 external,ScriptShape, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptShapeOpenType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptStringAnalyse, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptStringCPtoX, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptStringFree, :QWORD
PROTO64 external,ScriptStringGetLogicalWidths, :QWORD,:QWORD
PROTO64 external,ScriptStringGetOrder, :QWORD,:QWORD
PROTO64 external,ScriptStringOut, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptStringValidate, :QWORD
PROTO64 external,ScriptStringXtoCP, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptString_pLogAttr, :QWORD
PROTO64 external,ScriptString_pSize, :QWORD
PROTO64 external,ScriptString_pcOutChars, :QWORD
PROTO64 external,ScriptSubstituteSingleGlyph, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptTextOut, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScriptXtoCP, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file usp10.inc
echo -----------------------------------------
ENDIF

