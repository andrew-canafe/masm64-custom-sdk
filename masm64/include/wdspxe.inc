IFNDEF WDSPXE_INC
WDSPXE_INC equ <1>

PROTO64 external,PxeAsyncRecvDone, :QWORD,:QWORD
PROTO64 external,PxeDhcpAppendOption, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpAppendOptionRaw, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpGetOptionValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpGetVendorOptionValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpInitialize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpIsValid, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpv6AppendOption, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpv6AppendOptionRaw, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpv6CreateRelayRepl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpv6GetOptionValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpv6GetVendorOptionValue, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpv6Initialize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpv6IsValid, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeDhcpv6ParseRelayForw, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeGetServerInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,PxeGetServerInfoEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxePacketAllocate, :QWORD,:QWORD,:QWORD
PROTO64 external,PxePacketFree, :QWORD,:QWORD,:QWORD
PROTO64 external,PxeProviderEnumClose, :QWORD
PROTO64 external,PxeProviderEnumFirst, :QWORD
PROTO64 external,PxeProviderEnumNext, :QWORD,:QWORD
PROTO64 external,PxeProviderFreeInfo, :QWORD
PROTO64 external,PxeProviderQueryIndex, :QWORD,:QWORD
PROTO64 external,PxeProviderRegister, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeProviderSetAttribute, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeProviderUnRegister, :QWORD
PROTO64 external,PxeRegisterCallback, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeSendReply, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PxeTraceV, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wdspxe.inc
echo -----------------------------------------
ENDIF

