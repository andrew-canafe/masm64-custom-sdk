IFNDEF NT_INC
NT_INC equ <1>

PROTO64 external,NtProcessStartup, :QWORD
PROTO64 external,NtProcessStartupW, :QWORD
PROTO64 external,NtProcessStartupW_AfterSecurityCookieInitialized, :QWORD
PROTO64 external,NtProcessStartup_AfterSecurityCookieInitialized, :QWORD
PROTO64 external,NtRecordEnvironmentPointers, :QWORD,:QWORD
PROTO64 external,NtStartupCountEnvironmentStrings, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nt.inc
echo -----------------------------------------
ENDIF

