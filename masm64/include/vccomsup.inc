IFNDEF VCCOMSUP_INC
VCCOMSUP_INC equ <1>

PROTO64 external,_CxxThrowException, :QWORD,:QWORD
PROTO64 external,_security_check_cookie, :QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file vccomsup.inc
echo -----------------------------------------
ENDIF

