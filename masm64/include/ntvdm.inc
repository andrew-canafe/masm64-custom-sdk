IFNDEF NTVDM_INC
NTVDM_INC equ <1>

PROTO64 external,BlockWOWIdle, :QWORD
PROTO64 external,DBGNotifyDebugged, :QWORD
PROTO64 external,DBGNotifyNewTask, :QWORD,:QWORD
PROTO64 external,DBGNotifyRemoteThreadAddress, :QWORD,:QWORD
PROTO64 external,DispatchInterrupts, 
PROTO64 external,DpmiSetIncrementalAlloc, :QWORD
PROTO64 external,GetDOSAppName, :QWORD
PROTO64 external,IsCdRomFile, :QWORD
PROTO64 external,MGetVdmPointer, :QWORD,:QWORD,:QWORD
PROTO64 external,RedirectLongFileName, :QWORD,:QWORD,:QWORD
PROTO64 external,RedirectShortFileName, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterWOWIdle, 
PROTO64 external,ResumeTimerThread, 
PROTO64 external,SetShadowDescriptorEntries, :QWORD,:QWORD
PROTO64 external,ShortPathEnvVar, :QWORD
PROTO64 external,Sim32pGetVDMPointer, :QWORD,:QWORD
PROTO64 external,SoftPcEoi, :QWORD,:QWORD
PROTO64 external,SuspendTimerThread, 
PROTO64 external,VDDAllocMem, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDAllocateDosHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDAssociateNtHandle, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDDeInstallIOHook, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDDeInstallMemoryHook, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDDeInstallUserHook, :QWORD
PROTO64 external,VDDExcludeMem, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDFreeMem, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDIncludeMem, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDInstallIOHook, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDDInstallMemoryHook, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDDInstallUserHook, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDDQueryDMA, :QWORD,:QWORD,:QWORD
PROTO64 external,VDDReleaseDosHandle, :QWORD,:QWORD
PROTO64 external,VDDReleaseIrqLine, :QWORD,:QWORD
PROTO64 external,VDDRequestDMA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDDReserveIrqLine, :QWORD,:QWORD
PROTO64 external,VDDRetrieveNtHandle, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDDSetDMA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VDDSimulate16, 
PROTO64 external,VDDTerminateVDM, 
PROTO64 external,VdmDbgAttach, 
PROTO64 external,VdmGetParametersInfoError, 
PROTO64 external,VdmMapFlat, :QWORD,:QWORD,:QWORD
PROTO64 external,VdmParametersInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,VdmTraceEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,WOWSysErrorBox, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WaitIfIdle, 
PROTO64 external,call_ica_hw_interrupt, :QWORD,:QWORD,:QWORD
PROTO64 external,cmdCheckTemp, :QWORD
PROTO64 external,cmdCheckTempInit, 
PROTO64 external,cpu_createthread, :QWORD,:QWORD
PROTO64 external,demClientErrorEx, :QWORD,:QWORD,:QWORD
PROTO64 external,demFileDelete, :QWORD
PROTO64 external,demFileFindFirst, :QWORD,:QWORD,:QWORD
PROTO64 external,demFileFindNext, :QWORD
PROTO64 external,demGetFileTimeByHandle_WOW, :QWORD
PROTO64 external,demGetPhysicalDriveType, :QWORD
PROTO64 external,demIsShortPathName, :QWORD,:QWORD
PROTO64 external,demLFNCleanup, 
PROTO64 external,demLFNGetCurrentDirectory, :QWORD,:QWORD
PROTO64 external,demSetCurrentDirectoryGetDrive, :QWORD,:QWORD
PROTO64 external,demWOWLFNAllocateSearchHandle, :QWORD
PROTO64 external,demWOWLFNCloseSearchHandle, :QWORD
PROTO64 external,demWOWLFNEntry, :QWORD
PROTO64 external,demWOWLFNGetSearchHandle, :QWORD
PROTO64 external,demWOWLFNInit, :QWORD
PROTO64 external,getAF, 
PROTO64 external,getAH, 
PROTO64 external,getAL, 
PROTO64 external,getAX, 
PROTO64 external,getBH, 
PROTO64 external,getBL, 
PROTO64 external,getBP, 
PROTO64 external,getBX, 
PROTO64 external,getCF, 
PROTO64 external,getCH, 
PROTO64 external,getCL, 
PROTO64 external,getCS, 
PROTO64 external,getCX, 
PROTO64 external,getDF, 
PROTO64 external,getDH, 
PROTO64 external,getDI, 
PROTO64 external,getDL, 
PROTO64 external,getDS, 
PROTO64 external,getDX, 
PROTO64 external,getEAX, 
PROTO64 external,getEBP, 
PROTO64 external,getEBX, 
PROTO64 external,getECX, 
PROTO64 external,getEDI, 
PROTO64 external,getEDX, 
PROTO64 external,getEFLAGS, 
PROTO64 external,getEIP, 
PROTO64 external,getES, 
PROTO64 external,getESI, 
PROTO64 external,getESP, 
PROTO64 external,getFS, 
PROTO64 external,getGS, 
PROTO64 external,getIF, 
PROTO64 external,getIP, 
PROTO64 external,getIntelRegistersPointer, 
PROTO64 external,getMSW, 
PROTO64 external,getOF, 
PROTO64 external,getPF, 
PROTO64 external,getSF, 
PROTO64 external,getSI, 
PROTO64 external,getSP, 
PROTO64 external,getSS, 
PROTO64 external,getZF, 
PROTO64 external,host_CreateThread, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,host_ExitThread, :QWORD
PROTO64 external,host_com_close, :QWORD
PROTO64 external,host_direct_access_error, :QWORD
PROTO64 external,host_simulate, 
PROTO64 external,setAF, :QWORD
PROTO64 external,setAH, :QWORD
PROTO64 external,setAL, :QWORD
PROTO64 external,setAX, :QWORD
PROTO64 external,setBH, :QWORD
PROTO64 external,setBL, :QWORD
PROTO64 external,setBP, :QWORD
PROTO64 external,setBX, :QWORD
PROTO64 external,setCF, :QWORD
PROTO64 external,setCH, :QWORD
PROTO64 external,setCL, :QWORD
PROTO64 external,setCS, :QWORD
PROTO64 external,setCX, :QWORD
PROTO64 external,setDF, :QWORD
PROTO64 external,setDH, :QWORD
PROTO64 external,setDI, :QWORD
PROTO64 external,setDL, :QWORD
PROTO64 external,setDS, :QWORD
PROTO64 external,setDX, :QWORD
PROTO64 external,setEAX, :QWORD
PROTO64 external,setEBP, :QWORD
PROTO64 external,setEBX, :QWORD
PROTO64 external,setECX, :QWORD
PROTO64 external,setEDI, :QWORD
PROTO64 external,setEDX, :QWORD
PROTO64 external,setEFLAGS, :QWORD
PROTO64 external,setEIP, :QWORD
PROTO64 external,setES, :QWORD
PROTO64 external,setESI, :QWORD
PROTO64 external,setESP, :QWORD
PROTO64 external,setFS, :QWORD
PROTO64 external,setGS, :QWORD
PROTO64 external,setIF, :QWORD
PROTO64 external,setIP, :QWORD
PROTO64 external,setMSW, :QWORD
PROTO64 external,setOF, :QWORD
PROTO64 external,setPF, :QWORD
PROTO64 external,setSF, :QWORD
PROTO64 external,setSI, :QWORD
PROTO64 external,setSP, :QWORD
PROTO64 external,setSS, :QWORD
PROTO64 external,setZF, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntvdm.inc
echo -----------------------------------------
ENDIF

