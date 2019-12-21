IFNDEF UMPDDDI_INC
UMPDDDI_INC equ <1>

PROTO64 external,BRUSHOBJ_hGetColorTransform, :QWORD
PROTO64 external,BRUSHOBJ_pvAllocRbrush, :QWORD,:QWORD
PROTO64 external,BRUSHOBJ_pvGetRbrush, :QWORD
PROTO64 external,BRUSHOBJ_ulGetBrushColor, :QWORD
PROTO64 external,CLIPOBJ_bEnum, :QWORD,:QWORD,:QWORD
PROTO64 external,CLIPOBJ_cEnumStart, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CLIPOBJ_ppoGetPath, :QWORD
PROTO64 external,EngAcquireSemaphore, :QWORD
PROTO64 external,EngAlphaBlend, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngAssociateSurface, :QWORD,:QWORD,:QWORD
PROTO64 external,EngBitBlt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngCheckAbort, :QWORD
PROTO64 external,EngComputeGlyphSet, :QWORD,:QWORD,:QWORD
PROTO64 external,EngCopyBits, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngCreateBitmap, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngCreateClip, 
PROTO64 external,EngCreateDeviceBitmap, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngCreateDeviceSurface, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngCreatePalette, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngCreateSemaphore, 
PROTO64 external,EngDeleteClip, :QWORD
PROTO64 external,EngDeletePalette, :QWORD
PROTO64 external,EngDeletePath, :QWORD
PROTO64 external,EngDeleteSemaphore, :QWORD
PROTO64 external,EngDeleteSurface, :QWORD
PROTO64 external,EngEraseSurface, :QWORD,:QWORD,:QWORD
PROTO64 external,EngFillPath, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngFindResource, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngFreeModule, :QWORD
PROTO64 external,EngGetCurrentCodePage, :QWORD,:QWORD
PROTO64 external,EngGetDriverName, :QWORD
PROTO64 external,EngGetPrinterDataFileName, :QWORD
PROTO64 external,EngGradientFill, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngLineTo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngLoadModule, :QWORD
PROTO64 external,EngLockSurface, :QWORD
PROTO64 external,EngMarkBandingSurface, :QWORD
PROTO64 external,EngMultiByteToUnicodeN, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngMultiByteToWideChar, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngPaint, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngPlgBlt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngQueryEMFInfo, :QWORD,:QWORD
PROTO64 external,EngQueryLocalTime, :QWORD
PROTO64 external,EngReleaseSemaphore, :QWORD
PROTO64 external,EngStretchBlt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngStretchBltROP, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngStrokeAndFillPath, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngStrokePath, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngTextOut, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngTransparentBlt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngUnicodeToMultiByteN, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EngUnlockSurface, :QWORD
PROTO64 external,EngWideCharToMultiByte, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FONTOBJ_cGetAllGlyphHandles, :QWORD,:QWORD
PROTO64 external,FONTOBJ_cGetGlyphs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FONTOBJ_pQueryGlyphAttrs, :QWORD,:QWORD
PROTO64 external,FONTOBJ_pfdg, :QWORD
PROTO64 external,FONTOBJ_pifi, :QWORD
PROTO64 external,FONTOBJ_pvTrueTypeFontFile, :QWORD,:QWORD
PROTO64 external,FONTOBJ_pxoGetXform, :QWORD
PROTO64 external,FONTOBJ_vGetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,HT_Get8BPPFormatPalette, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HT_Get8BPPMaskPalette, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PATHOBJ_bEnum, :QWORD,:QWORD
PROTO64 external,PATHOBJ_bEnumClipLines, :QWORD,:QWORD,:QWORD
PROTO64 external,PATHOBJ_vEnumStart, :QWORD
PROTO64 external,PATHOBJ_vEnumStartClipLines, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PATHOBJ_vGetBounds, :QWORD,:QWORD
PROTO64 external,STROBJ_bEnum, :QWORD,:QWORD,:QWORD
PROTO64 external,STROBJ_bEnumPositionsOnly, :QWORD,:QWORD,:QWORD
PROTO64 external,STROBJ_bGetAdvanceWidths, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,STROBJ_dwGetCodePage, :QWORD
PROTO64 external,STROBJ_vEnumStart, :QWORD
PROTO64 external,XFORMOBJ_bApplyXform, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,XFORMOBJ_iGetXform, :QWORD,:QWORD
PROTO64 external,XLATEOBJ_cGetPalette, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,XLATEOBJ_hGetColorTransform, :QWORD
PROTO64 external,XLATEOBJ_iXlate, :QWORD,:QWORD
PROTO64 external,XLATEOBJ_piVector, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file umpdddi.inc
echo -----------------------------------------
ENDIF

