IFNDEF DNSRSLVR_INC
DNSRSLVR_INC equ <1>

PROTO64 external,LoadGPExtension, :QWORD
PROTO64 external,Reg_DoRegisterAdapter, :QWORD,:QWORD
PROTO64 external,ServiceMain, :QWORD,:QWORD
PROTO64 external,SvchostPushServiceGlobals, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dnsrslvr.inc
echo -----------------------------------------
ENDIF

