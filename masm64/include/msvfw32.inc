IFNDEF MSVFW32_INC
MSVFW32_INC equ <1>

PROTO64 external,DrawDibBegin, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawDibChangePalette, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawDibClose, :QWORD
PROTO64 external,DrawDibDraw, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawDibEnd, :QWORD
PROTO64 external,DrawDibGetBuffer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawDibGetPalette, :QWORD
PROTO64 external,DrawDibOpen, 
PROTO64 external,DrawDibProfileDisplay, :QWORD
PROTO64 external,DrawDibRealize, :QWORD,:QWORD,:QWORD
PROTO64 external,DrawDibSetPalette, :QWORD,:QWORD
PROTO64 external,DrawDibStart, :QWORD,:QWORD
PROTO64 external,DrawDibStop, :QWORD
PROTO64 external,DrawDibTime, :QWORD,:QWORD
PROTO64 external,GetOpenFileNamePreviewA, :QWORD
PROTO64 external,GetOpenFileNamePreviewW, :QWORD
PROTO64 external,GetSaveFileNamePreviewA, :QWORD
PROTO64 external,GetSaveFileNamePreviewW, :QWORD
PROTO64 external,ICClose, :QWORD
PROTO64 external,ICCompressorChoose, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICCompressorFree, :QWORD
PROTO64 external,ICGetDisplayFormat, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICGetInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,ICImageCompress, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICImageDecompress, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,ICInstall, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICLocate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICMThunk32, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICOpen, :QWORD,:QWORD,:QWORD
PROTO64 external,ICOpenFunction, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICRemove, :QWORD,:QWORD,:QWORD
PROTO64 external,ICSendMessage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICSeqCompressFrame, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ICSeqCompressFrameEnd, :QWORD
PROTO64 external,ICSeqCompressFrameStart, :QWORD,:QWORD
PROTO64 external,StretchDIB, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VideoForWindowsVersion, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msvfw32.inc
echo -----------------------------------------
ENDIF

