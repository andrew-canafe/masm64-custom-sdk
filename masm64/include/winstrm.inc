IFNDEF WINSTRM_INC
WINSTRM_INC equ <1>

PROTO64 external,MapNtToPosixStatus, :QWORD
PROTO64 external,OpenStream, :QWORD
PROTO64 external,StringCbCopyA, :QWORD,:QWORD,:QWORD
PROTO64 external,WSA_perror, :QWORD,:QWORD
PROTO64 external,getmsg, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,poll, :QWORD,:QWORD,:QWORD
PROTO64 external,putmsg, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,s_ioctl, :QWORD,:QWORD,:QWORD
PROTO64 external,s_open, :QWORD,:QWORD,:QWORD
PROTO64 external,s_perror, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file winstrm.inc
echo -----------------------------------------
ENDIF

