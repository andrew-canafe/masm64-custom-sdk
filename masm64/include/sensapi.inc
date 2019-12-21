IFNDEF SENSAPI_INC
SENSAPI_INC equ <1>

PROTO64 external,IsDestinationReachableA, :QWORD,:QWORD
PROTO64 external,IsDestinationReachableW, :QWORD,:QWORD
PROTO64 external,IsNetworkAlive, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sensapi.inc
echo -----------------------------------------
ENDIF

