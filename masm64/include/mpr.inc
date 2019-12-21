IFNDEF MPR_INC
MPR_INC equ <1>

PROTO64 external,MultinetGetConnectionPerformanceA, :QWORD,:QWORD
PROTO64 external,MultinetGetConnectionPerformanceW, :QWORD,:QWORD
PROTO64 external,WNetAddConnection2A, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetAddConnection2W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetAddConnection3A, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetAddConnection3W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetAddConnectionA, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetAddConnectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetCancelConnection2A, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetCancelConnection2W, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetCancelConnectionA, :QWORD,:QWORD
PROTO64 external,WNetCancelConnectionW, :QWORD,:QWORD
PROTO64 external,WNetCloseEnum, :QWORD
PROTO64 external,WNetConnectionDialog1A, :QWORD
PROTO64 external,WNetConnectionDialog1W, :QWORD
PROTO64 external,WNetConnectionDialog, :QWORD,:QWORD
PROTO64 external,WNetDisconnectDialog1A, :QWORD
PROTO64 external,WNetDisconnectDialog1W, :QWORD
PROTO64 external,WNetDisconnectDialog, :QWORD,:QWORD
PROTO64 external,WNetEnumResourceA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetEnumResourceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetConnectionA, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetConnectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetLastErrorA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetLastErrorW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetNetworkInformationA, :QWORD,:QWORD
PROTO64 external,WNetGetNetworkInformationW, :QWORD,:QWORD
PROTO64 external,WNetGetProviderNameA, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetProviderNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetResourceInformationA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetResourceInformationW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetResourceParentA, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetResourceParentW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetUniversalNameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetUniversalNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetUserA, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetUserW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetOpenEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetOpenEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetSetLastErrorA, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetSetLastErrorW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetUseConnectionA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetUseConnectionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mpr.inc
echo -----------------------------------------
ENDIF

