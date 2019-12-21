IFNDEF WINDOWS.NETWORKING_INC
WINDOWS.NETWORKING_INC equ <1>

PROTO64 external,SetSocketMediaStreamingMode, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file windows.networking.inc
echo -----------------------------------------
ENDIF

