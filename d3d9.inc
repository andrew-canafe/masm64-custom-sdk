IFNDEF D3D9_INC
D3D9_INC equ <1>

PROTO64 external,D3DPERF_BeginEvent, :QWORD,:QWORD
PROTO64 external,D3DPERF_EndEvent, 
PROTO64 external,D3DPERF_GetStatus, 
PROTO64 external,D3DPERF_QueryRepeatFrame, 
PROTO64 external,D3DPERF_SetMarker, :QWORD,:QWORD
PROTO64 external,D3DPERF_SetOptions, :QWORD
PROTO64 external,D3DPERF_SetRegion, :QWORD,:QWORD
PROTO64 external,Direct3DCreate9, :QWORD
PROTO64 external,Direct3DCreate9Ex, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file d3d9.inc
echo -----------------------------------------
ENDIF

