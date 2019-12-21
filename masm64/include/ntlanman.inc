IFNDEF NTLANMAN_INC
NTLANMAN_INC equ <1>

PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,I_SystemFocusDialog, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPAddConnection3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPAddConnection, :QWORD,:QWORD,:QWORD
PROTO64 external,NPCancelConnection, :QWORD,:QWORD
PROTO64 external,NPCloseEnum, :QWORD
PROTO64 external,NPFormatNetworkName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetCaps, :QWORD
PROTO64 external,NPGetConnection3, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetConnectionPerformance, :QWORD,:QWORD
PROTO64 external,NPGetResourceInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetResourceParent, :QWORD,:QWORD,:QWORD
PROTO64 external,NPGetUser, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryAppInstanceVersion, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterAppInstance, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterAppInstanceVersion, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ResetAllAppInstanceVersions, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntlanman.inc
echo -----------------------------------------
ENDIF

