IFNDEF SCRNSAVE_INC
SCRNSAVE_INC equ <1>

PROTO64 external,DefScreenSaverProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DummyEntry, 
PROTO64 external,LoadPwdDLL, 
PROTO64 external,RealScreenSaverProc, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ScreenSaverChangePassword, :QWORD
PROTO64 external,UnloadPwdDLL, 
PROTO64 external,WinMain, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinMainN, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file scrnsave.inc
echo -----------------------------------------
ENDIF

