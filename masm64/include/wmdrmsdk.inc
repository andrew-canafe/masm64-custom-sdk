IFNDEF WMDRMSDK_INC
WMDRMSDK_INC equ <1>

PROTO64 external,MFWMDRMOutputTrustAuthority_CreateInstance, :QWORD
PROTO64 external,WMDRMCreateProvider, :QWORD
PROTO64 external,WMDRMShutdown, 
PROTO64 external,WMDRMStartup, 
PROTO64 external,_WMDRMCreateProvider, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wmdrmsdk.inc
echo -----------------------------------------
ENDIF

