IFNDEF FXSUTILITY_INC
FXSUTILITY_INC equ <1>

PROTO64 external,CanSendToFaxRecipient, 
PROTO64 external,SendToFaxRecipient, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file fxsutility.inc
echo -----------------------------------------
ENDIF

