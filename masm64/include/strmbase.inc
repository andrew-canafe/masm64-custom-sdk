IFNDEF STRMBASE_INC
STRMBASE_INC equ <1>

PROTO64 external,AMGetWideString, :QWORD,:QWORD
PROTO64 external,AMovieDllRegisterServer2, :QWORD
PROTO64 external,AMovieDllRegisterServer, 
PROTO64 external,AMovieDllUnregisterServer, 
PROTO64 external,AMovieSetupRegisterFilter2, :QWORD,:QWORD,:QWORD
PROTO64 external,AMovieSetupRegisterFilter, :QWORD,:QWORD,:QWORD
PROTO64 external,AMovieSetupRegisterServer, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AMovieSetupUnregisterServer, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CheckMPEG1VideoInfoType, :QWORD
PROTO64 external,CheckMPEG2VideoInfoType, :QWORD
PROTO64 external,CheckVideoInfo2Type, :QWORD
PROTO64 external,CheckVideoInfoHeader2, :QWORD,:QWORD
PROTO64 external,CheckVideoInfoHeader, :QWORD,:QWORD
PROTO64 external,CheckVideoInfoType, :QWORD
PROTO64 external,CheckWaveFormatEx, :QWORD,:QWORD
PROTO64 external,CheckWaveFormatExType, :QWORD
PROTO64 external,ContainsPalette, :QWORD
PROTO64 external,ConvertVideoInfoToVideoInfo2, :QWORD
PROTO64 external,CreateAudioMediaType, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateMemoryAllocator, :QWORD
PROTO64 external,CreatePosPassThru, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectDrawCreateFromDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,DirectDrawCreateFromDeviceEx, :QWORD,:QWORD,:QWORD
PROTO64 external,DllCanUnloadNow, 
PROTO64 external,DllEntryPoint, :QWORD,:QWORD,:QWORD
PROTO64 external,DllGetClassObject, :QWORD,:QWORD,:QWORD
PROTO64 external,EliminateSubKey, :QWORD,:QWORD
PROTO64 external,FixupAudioMediaType, :QWORD,:QWORD
PROTO64 external,FixupVideoMediaType, :QWORD,:QWORD
PROTO64 external,FreeBSTR, :QWORD
PROTO64 external,GetBitCount, :QWORD
PROTO64 external,GetBitmapFormatSize, :QWORD
PROTO64 external,GetBitmapPalette, :QWORD
PROTO64 external,GetBitmapSize, :QWORD
PROTO64 external,GetBitmapSubtype, :QWORD
PROTO64 external,GetInterface, :QWORD,:QWORD
PROTO64 external,GetSubtypeNameA, :QWORD
PROTO64 external,GetSubtypeNameW, :QWORD
PROTO64 external,GetTrueColorType, :QWORD
PROTO64 external,HRESULT_FROM_WIN32, :QWORD
PROTO64 external,IsEqualGUID, :QWORD,:QWORD
PROTO64 external,MultiplyCheckOverflow, :QWORD,:QWORD,:QWORD
PROTO64 external,ReadInt, :QWORD,:QWORD
PROTO64 external,RegisterAllServers, :QWORD,:QWORD
PROTO64 external,SAFE_DIBSIZE, :QWORD,:QWORD
PROTO64 external,SAFE_DIBWIDTHBYTES, :QWORD,:QWORD
PROTO64 external,ValidateBitmapInfoHeader, :QWORD,:QWORD
PROTO64 external,ValidateMediaType, :QWORD,:QWORD
PROTO64 external,WriteBSTR, :QWORD,:QWORD
PROTO64 external,WriteInt, :QWORD,:QWORD
PROTO64 external,_DllEntryPoint, :QWORD,:QWORD,:QWORD
PROTO64 external,_InlineInterlockedExchangePointer, :QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD
PROTO64 external,memmoveInternal, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file strmbase.inc
echo -----------------------------------------
ENDIF

