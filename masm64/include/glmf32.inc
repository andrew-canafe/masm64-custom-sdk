IFNDEF GLMF32_INC
GLMF32_INC equ <1>

PROTO64 external,__glsParser_create, 
PROTO64 external,__glsParser_print, :QWORD
PROTO64 external,__glsString_appendChar, :QWORD,:QWORD
PROTO64 external,__glsString_assign, :QWORD,:QWORD
PROTO64 external,__glsString_init, :QWORD
PROTO64 external,glsAbortCall, :QWORD
PROTO64 external,glsAppRef, :QWORD,:QWORD,:QWORD
PROTO64 external,glsBeginCapture, :QWORD,:QWORD,:QWORD
PROTO64 external,glsBeginGLS, :QWORD,:QWORD
PROTO64 external,glsBeginObj, :QWORD
PROTO64 external,glsBinary, :QWORD
PROTO64 external,glsBlock, :QWORD
PROTO64 external,glsCallArray, :QWORD,:QWORD,:QWORD
PROTO64 external,glsCallArrayInContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glsCallStream, :QWORD
PROTO64 external,glsCaptureFlags, :QWORD,:QWORD
PROTO64 external,glsCaptureFunc, :QWORD,:QWORD
PROTO64 external,glsChannel, :QWORD,:QWORD
PROTO64 external,glsCharubz, :QWORD,:QWORD
PROTO64 external,glsCommandAPI, :QWORD
PROTO64 external,glsCommandFunc, :QWORD,:QWORD
PROTO64 external,glsCommandString, :QWORD
PROTO64 external,glsComment, :QWORD
PROTO64 external,glsContext, :QWORD
PROTO64 external,glsCopyStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glsDataPointer, :QWORD
PROTO64 external,glsDeleteContext, :QWORD
PROTO64 external,glsDeleteReadPrefix, :QWORD
PROTO64 external,glsDeleteStream, :QWORD
PROTO64 external,glsDisplayMapfv, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glsEndCapture, 
PROTO64 external,glsEndGLS, 
PROTO64 external,glsEndObj, 
PROTO64 external,glsEnumString, :QWORD,:QWORD
PROTO64 external,glsError, :QWORD,:QWORD
PROTO64 external,glsFlush, :QWORD
PROTO64 external,glsGLRC, :QWORD
PROTO64 external,glsGLRCLayer, :QWORD,:QWORD,:QWORD
PROTO64 external,glsGenContext, 
PROTO64 external,glsGetAllContexts, 
PROTO64 external,glsGetCaptureDispatchTable, :QWORD,:QWORD
PROTO64 external,glsGetCaptureExecTable, :QWORD,:QWORD
PROTO64 external,glsGetCaptureFlags, :QWORD
PROTO64 external,glsGetCommandAlignment, :QWORD,:QWORD,:QWORD
PROTO64 external,glsGetCommandAttrib, :QWORD
PROTO64 external,glsGetCommandFunc, :QWORD
PROTO64 external,glsGetConsti, :QWORD
PROTO64 external,glsGetConstiv, :QWORD
PROTO64 external,glsGetConstubz, :QWORD
PROTO64 external,glsGetContextFunc, :QWORD
PROTO64 external,glsGetContextListl, :QWORD,:QWORD
PROTO64 external,glsGetContextListubz, :QWORD,:QWORD
PROTO64 external,glsGetContextPointer, :QWORD
PROTO64 external,glsGetContexti, :QWORD
PROTO64 external,glsGetContextubz, :QWORD
PROTO64 external,glsGetCurrentContext, 
PROTO64 external,glsGetCurrentTime, :QWORD
PROTO64 external,glsGetError, :QWORD
PROTO64 external,glsGetGLRCi, :QWORD,:QWORD
PROTO64 external,glsGetHeaderf, :QWORD
PROTO64 external,glsGetHeaderfv, :QWORD,:QWORD
PROTO64 external,glsGetHeaderi, :QWORD
PROTO64 external,glsGetHeaderiv, :QWORD,:QWORD
PROTO64 external,glsGetHeaderubz, :QWORD
PROTO64 external,glsGetLayerf, :QWORD,:QWORD
PROTO64 external,glsGetLayeri, :QWORD,:QWORD
PROTO64 external,glsGetOpcodeCount, :QWORD
PROTO64 external,glsGetOpcodes, :QWORD
PROTO64 external,glsGetStreamAttrib, :QWORD
PROTO64 external,glsGetStreamCRC32, :QWORD
PROTO64 external,glsGetStreamReadName, :QWORD
PROTO64 external,glsGetStreamSize, :QWORD
PROTO64 external,glsGetStreamType, :QWORD
PROTO64 external,glsHeaderGLRCi, :QWORD,:QWORD,:QWORD
PROTO64 external,glsHeaderLayerf, :QWORD,:QWORD,:QWORD
PROTO64 external,glsHeaderLayeri, :QWORD,:QWORD,:QWORD
PROTO64 external,glsHeaderf, :QWORD,:QWORD
PROTO64 external,glsHeaderfv, :QWORD,:QWORD
PROTO64 external,glsHeaderi, :QWORD,:QWORD
PROTO64 external,glsHeaderiv, :QWORD,:QWORD
PROTO64 external,glsHeaderubz, :QWORD,:QWORD
PROTO64 external,glsIsContext, :QWORD
PROTO64 external,glsIsContextStream, :QWORD
PROTO64 external,glsIsExtensionSupported, :QWORD
PROTO64 external,glsIsUTF8String, :QWORD
PROTO64 external,glsLong, :QWORD,:QWORD
PROTO64 external,glsLongHigh, :QWORD,:QWORD
PROTO64 external,glsLongLow, :QWORD,:QWORD
PROTO64 external,glsNullCommandFunc, :QWORD
PROTO64 external,glsNumb, :QWORD,:QWORD
PROTO64 external,glsNumbv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumd, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumdv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumf, :QWORD,:QWORD
PROTO64 external,glsNumfv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumi, :QWORD,:QWORD
PROTO64 external,glsNumiv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNuml, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumlv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNums, :QWORD,:QWORD
PROTO64 external,glsNumsv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumub, :QWORD,:QWORD
PROTO64 external,glsNumubv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumui, :QWORD,:QWORD
PROTO64 external,glsNumuiv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumul, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumulv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsNumus, :QWORD,:QWORD
PROTO64 external,glsNumusv, :QWORD,:QWORD,:QWORD
PROTO64 external,glsPad, 
PROTO64 external,glsPixelSetup, 
PROTO64 external,glsPixelSetupGen, :QWORD
PROTO64 external,glsReadFunc, :QWORD
PROTO64 external,glsReadPrefix, :QWORD,:QWORD
PROTO64 external,glsRequireExtension, :QWORD
PROTO64 external,glsSwapBuffers, :QWORD
PROTO64 external,glsUCS1toUTF8z, :QWORD,:QWORD,:QWORD
PROTO64 external,glsUCS2toUTF8z, :QWORD,:QWORD,:QWORD
PROTO64 external,glsUCS4toUTF8, :QWORD,:QWORD
PROTO64 external,glsUCS4toUTF8z, :QWORD,:QWORD,:QWORD
PROTO64 external,glsUCStoUTF8z, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glsULong, :QWORD,:QWORD
PROTO64 external,glsULongHigh, :QWORD,:QWORD
PROTO64 external,glsULongLow, :QWORD,:QWORD
PROTO64 external,glsUTF8toUCS1z, :QWORD,:QWORD,:QWORD
PROTO64 external,glsUTF8toUCS2z, :QWORD,:QWORD,:QWORD
PROTO64 external,glsUTF8toUCS4, :QWORD,:QWORD
PROTO64 external,glsUTF8toUCS4z, :QWORD,:QWORD,:QWORD
PROTO64 external,glsUTF8toUCSz, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,glsUnreadFunc, :QWORD
PROTO64 external,glsUnsupportedCommand, 
PROTO64 external,glsUpdateCaptureExecTable, :QWORD,:QWORD
PROTO64 external,glsWriteFunc, :QWORD
PROTO64 external,glsWritePrefix, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file glmf32.inc
echo -----------------------------------------
ENDIF

