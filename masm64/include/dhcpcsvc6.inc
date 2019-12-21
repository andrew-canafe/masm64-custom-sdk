IFNDEF DHCPCSVC6_INC
DHCPCSVC6_INC equ <1>

PROTO64 external,Dhcpv6AcquireParameters, :QWORD
PROTO64 external,Dhcpv6CApiCleanup, 
PROTO64 external,Dhcpv6CApiInitialize, :QWORD
PROTO64 external,Dhcpv6CancelOperation, 
PROTO64 external,Dhcpv6EnableDhcp, :QWORD,:QWORD
PROTO64 external,Dhcpv6EnableTracing, :QWORD
PROTO64 external,Dhcpv6FreeLeaseInfo, :QWORD
PROTO64 external,Dhcpv6FreeLeaseInfoArray, :QWORD,:QWORD
PROTO64 external,Dhcpv6GetTraceArray, :QWORD
PROTO64 external,Dhcpv6GetUserClasses, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6IsEnabled, :QWORD,:QWORD
PROTO64 external,Dhcpv6QueryLeaseInfo, :QWORD,:QWORD
PROTO64 external,Dhcpv6QueryLeaseInfoArray, :QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6ReleaseParameters, :QWORD
PROTO64 external,Dhcpv6ReleasePrefix, :QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6ReleasePrefixEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6RenewPrefix, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6RenewPrefixEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6RequestParams, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6RequestPrefix, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6RequestPrefixEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Dhcpv6SetUserClass, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dhcpcsvc6.inc
echo -----------------------------------------
ENDIF

