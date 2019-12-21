IFNDEF SENS_INC
SENS_INC equ <1>

PROTO64 external,SensNotifyNetconEvent, :QWORD
PROTO64 external,SensNotifyRasEvent, :QWORD
PROTO64 external,SensNotifyWinlogonEvent, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file sens.inc
echo -----------------------------------------
ENDIF

