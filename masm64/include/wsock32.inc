IFNDEF WSOCK32_INC
WSOCK32_INC equ <1>

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
PROTO64 external,GetTypeByNameA, :QWORD,:QWORD
PROTO64 external,GetTypeByNameW, :QWORD,:QWORD
PROTO64 external,MigrateWinsockConfiguration, :QWORD,:QWORD,:QWORD
PROTO64 external,NPLoadNameSpaces, :QWORD,:QWORD,:QWORD
PROTO64 external,SetServiceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetServiceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TransmitFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WEP, 
PROTO64 external,WSAAsyncGetHostByAddr, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetHostByName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetProtoByName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetProtoByNumber, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetServByName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncGetServByPort, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSAAsyncSelect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSACancelAsyncRequest, :QWORD
PROTO64 external,WSACancelBlockingCall, 
PROTO64 external,WSACleanup, 
PROTO64 external,WSAGetLastError, 
PROTO64 external,WSAIsBlocking, 
PROTO64 external,WSARecvEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WSASetBlockingHook, :QWORD
PROTO64 external,WSASetLastError, :QWORD
PROTO64 external,WSAStartup, :QWORD,:QWORD
PROTO64 external,WSAUnhookBlockingHook, 
PROTO64 external,__WSAFDIsSet, :QWORD,:QWORD
PROTO64 external,accept, :QWORD,:QWORD,:QWORD
PROTO64 external,bind, :QWORD,:QWORD,:QWORD
PROTO64 external,closesocket, :QWORD
PROTO64 external,connect, :QWORD,:QWORD,:QWORD
PROTO64 external,dn_expand, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gethostbyaddr, :QWORD,:QWORD,:QWORD
PROTO64 external,gethostbyname, :QWORD
PROTO64 external,gethostname, :QWORD,:QWORD
PROTO64 external,getnetbyname, :QWORD
PROTO64 external,getpeername, :QWORD,:QWORD,:QWORD
PROTO64 external,getprotobyname, :QWORD
PROTO64 external,getprotobynumber, :QWORD
PROTO64 external,getservbyname, :QWORD,:QWORD
PROTO64 external,getservbyport, :QWORD,:QWORD
PROTO64 external,getsockname, :QWORD,:QWORD,:QWORD
PROTO64 external,getsockopt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,htonl, :QWORD
PROTO64 external,htons, :QWORD
PROTO64 external,inet_addr, :QWORD
PROTO64 external,inet_network, :QWORD
PROTO64 external,inet_ntoa, :QWORD
PROTO64 external,ioctlsocket, :QWORD,:QWORD,:QWORD
PROTO64 external,listen, :QWORD,:QWORD
PROTO64 external,ntohl, :QWORD
PROTO64 external,ntohs, :QWORD
PROTO64 external,rcmd, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,recv, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,recvfrom, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,rexec, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,rresvport, :QWORD
PROTO64 external,s_perror, :QWORD,:QWORD
PROTO64 external,select, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,send, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,sendto, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,sethostname, :QWORD,:QWORD
PROTO64 external,setsockopt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,shutdown, :QWORD,:QWORD
PROTO64 external,socket, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wsock32.inc
echo -----------------------------------------
ENDIF

