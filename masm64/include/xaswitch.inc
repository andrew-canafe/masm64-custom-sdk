IFNDEF XASWITCH_INC
XASWITCH_INC equ <1>

PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file xaswitch.inc
echo -----------------------------------------
ENDIF

