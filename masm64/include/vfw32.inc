IFNDEF VFW32_INC
VFW32_INC equ <1>

PROTO64 external,AVIBuildFilterA, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIBuildFilterW, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIClearClipboard, 
PROTO64 external,AVIFileAddRef, :QWORD
PROTO64 external,AVIFileCreateStreamA, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIFileCreateStreamW, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIFileEndRecord, :QWORD
PROTO64 external,AVIFileExit, 
PROTO64 external,AVIFileGetStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIFileInfoA, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIFileInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIFileInit, 
PROTO64 external,AVIFileOpenA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIFileOpenW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIFileReadData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIFileRelease, :QWORD
PROTO64 external,AVIFileWriteData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIGetFromClipboard, :QWORD
PROTO64 external,AVIMakeCompressedStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIMakeFileFromStreams, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIMakeStreamFromClipboard, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIPutFileOnClipboard, :QWORD
PROTO64 external,AVISaveOptions, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVISaveOptionsFree, :QWORD,:QWORD
PROTO64 external,AVISaveVA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVISaveVW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamAddRef, :QWORD
PROTO64 external,AVIStreamBeginStreaming, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamCreate, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamEndStreaming, :QWORD
PROTO64 external,AVIStreamFindSample, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamGetFrame, :QWORD,:QWORD
PROTO64 external,AVIStreamGetFrameClose, :QWORD
PROTO64 external,AVIStreamGetFrameOpen, :QWORD,:QWORD
PROTO64 external,AVIStreamInfoA, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamLength, :QWORD
PROTO64 external,AVIStreamOpenFromFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamOpenFromFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamRead, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamReadData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamReadFormat, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamRelease, :QWORD
PROTO64 external,AVIStreamSampleToTime, :QWORD,:QWORD
PROTO64 external,AVIStreamSetFormat, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamStart, :QWORD
PROTO64 external,AVIStreamTimeToSample, :QWORD,:QWORD
PROTO64 external,AVIStreamWrite, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AVIStreamWriteData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AppCleanup, :QWORD
PROTO64 external,CreateEditableStream, :QWORD,:QWORD
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
PROTO64 external,EditStreamClone, :QWORD,:QWORD
PROTO64 external,EditStreamCopy, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EditStreamCut, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EditStreamPaste, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EditStreamSetInfoA, :QWORD,:QWORD,:QWORD
PROTO64 external,EditStreamSetInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,EditStreamSetNameA, :QWORD,:QWORD
PROTO64 external,EditStreamSetNameW, :QWORD,:QWORD
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
PROTO64 external,capCreateCaptureWindowA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,capCreateCaptureWindowW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,capGetDriverDescriptionA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,capGetDriverDescriptionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,videoThunk32, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file vfw32.inc
echo -----------------------------------------
ENDIF

