IFNDEF SYNCHRONIZATION_INC
SYNCHRONIZATION_INC equ <1>

PROTO64 external,WaitOnAddress, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WakeByAddressAll, :QWORD
PROTO64 external,WakeByAddressSingle, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file synchronization.inc
echo -----------------------------------------
ENDIF

