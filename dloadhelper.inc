IFNDEF DLOADHELPER_INC
DLOADHELPER_INC equ <1>

PROTO64 external,HRESULT_FROM_WIN32, :QWORD
PROTO64 external,__HrLoadAllImportsForDll, :QWORD
PROTO64 external,__delayLoadHelper2, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dloadhelper.inc
echo -----------------------------------------
ENDIF

