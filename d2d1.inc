IFNDEF D2D1_INC
D2D1_INC equ <1>

PROTO64 external,D2D1ComputeMaximumScaleFactor, :QWORD
PROTO64 external,D2D1ConvertColorSpace, :QWORD,:QWORD,:QWORD
PROTO64 external,D2D1CreateDevice, :QWORD,:QWORD,:QWORD
PROTO64 external,D2D1CreateDeviceContext, :QWORD,:QWORD,:QWORD
PROTO64 external,D2D1CreateFactory, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D2D1GetGradientMeshInteriorPointsFromCoonsPatch, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D2D1InvertMatrix, :QWORD
PROTO64 external,D2D1IsMatrixInvertible, :QWORD
PROTO64 external,D2D1MakeRotateMatrix, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D2D1MakeSkewMatrix, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,D2D1SinCos, :QWORD,:QWORD,:QWORD
PROTO64 external,D2D1Tan, :QWORD
PROTO64 external,D2D1Vec3Length, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file d2d1.inc
echo -----------------------------------------
ENDIF

