IFNDEF MSWSOCK_INC
MSWSOCK_INC equ <1>

PROTO64 external,AcceptEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumProtocolsA, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumProtocolsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetAcceptExSockaddrs, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAddressByNameA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAddressByNameW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNameByTypeA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetNameByTypeW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetServiceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetServiceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetSocketErrorMessageW, :QWORD
PROTO64 external,GetTypeByNameA, :QWORD,:QWORD
PROTO64 external,GetTypeByNameW, :QWORD,:QWORD
PROTO64 external,MigrateWinsockConfiguration, :QWORD,:QWORD,:QWORD
PROTO64 external,MigrateWinsockConfigurationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NPLoadNameSpaces, :QWORD,:QWORD,:QWORD
PROTO64 external,SetServiceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetServiceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TransmitFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSARecvEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,dn_expand, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,getnetbyname, :QWORD
PROTO64 external,inet_network, :QWORD
PROTO64 external,rcmd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,rexec, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,rresvport, :QWORD
PROTO64 external,s_perror, :QWORD,:QWORD
PROTO64 external,sethostname, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mswsock.inc
echo -----------------------------------------
ENDIF

