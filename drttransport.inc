IFNDEF DRTTRANSPORT_INC
DRTTRANSPORT_INC equ <1>

PROTO64 external,DrtCreateIpv6UdpTransport, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrtDeleteIpv6UdpTransport, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file drttransport.inc
echo -----------------------------------------
ENDIF

