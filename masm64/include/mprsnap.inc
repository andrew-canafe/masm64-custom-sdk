IFNDEF MPRSNAP_INC
MPRSNAP_INC equ <1>

PROTO64 external,MprConfigServerUnattendedInstall, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file mprsnap.inc
echo -----------------------------------------
ENDIF

