IFNDEF VERSION_INC
VERSION_INC equ <1>

PROTO64 external,GetFileVersionInfoA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFileVersionInfoExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFileVersionInfoSizeA, :QWORD,:QWORD
PROTO64 external,GetFileVersionInfoSizeExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetFileVersionInfoSizeW, :QWORD,:QWORD
PROTO64 external,GetFileVersionInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerFindFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerFindFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerInstallFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerInstallFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerQueryValueA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerQueryValueW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file version.inc
echo -----------------------------------------
ENDIF

