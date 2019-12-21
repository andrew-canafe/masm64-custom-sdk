IFNDEF UALAPI_INC
UALAPI_INC equ <1>

PROTO64 external,SumInstrumentationData, :QWORD
PROTO64 external,SumInstrumentationStart, :QWORD
PROTO64 external,SumInstrumentationStop, :QWORD
PROTO64 external,UalInstrument, :QWORD
PROTO64 external,UalRegisterProduct, :QWORD,:QWORD,:QWORD
PROTO64 external,UalStart, :QWORD
PROTO64 external,UalStop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ualapi.inc
echo -----------------------------------------
ENDIF

