IFNDEF DAVCLNT_INC
DAVCLNT_INC equ <1>

PROTO64 external,DavCancelConnectionsToServer, :QWORD,:QWORD
PROTO64 external,DavFreeUsedDiskSpace, :QWORD
PROTO64 external,DavGetDiskSpaceUsage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DavGetTheLockOwnerOfTheFile, :QWORD,:QWORD,:QWORD
PROTO64 external,DavInvalidateCache, :QWORD
PROTO64 external,DavRegisterAuthCallback, :QWORD,:QWORD
PROTO64 external,DavSetCookieW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DavUnregisterAuthCallback, :QWORD
PROTO64 external,DllMain, :QWORD,:QWORD,:QWORD
PROTO64 external,NPAddConnection3, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPAddConnection, :QWORD,:QWORD,:QWORD
PROTO64 external,NPCancelConnection, :QWORD,:QWORD
PROTO64 external,NPCloseEnum, :QWORD
PROTO64 external,NPEnumResource, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPFormatNetworkName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetCaps, :QWORD
PROTO64 external,NPGetConnection, :QWORD,:QWORD,:QWORD
PROTO64 external,NPGetResourceInformation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetResourceParent, :QWORD,:QWORD,:QWORD
PROTO64 external,NPGetUniversalName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPGetUser, :QWORD,:QWORD,:QWORD
PROTO64 external,NPOpenEnum, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file davclnt.inc
echo -----------------------------------------
ENDIF

