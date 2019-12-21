IFNDEF GLU32_INC
GLU32_INC equ <1>

PROTO64 external,gluBeginCurve, :QWORD
PROTO64 external,gluBeginPolygon, :QWORD
PROTO64 external,gluBeginSurface, :QWORD
PROTO64 external,gluBeginTrim, :QWORD
PROTO64 external,gluBuild1DMipmaps, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluBuild2DMipmaps, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluCylinder, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluDeleteNurbsRenderer, :QWORD
PROTO64 external,gluDeleteQuadric, :QWORD
PROTO64 external,gluDeleteTess, :QWORD
PROTO64 external,gluDisk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluEndCurve, :QWORD
PROTO64 external,gluEndPolygon, :QWORD
PROTO64 external,gluEndSurface, :QWORD
PROTO64 external,gluEndTrim, :QWORD
PROTO64 external,gluErrorString, :QWORD
PROTO64 external,gluErrorUnicodeStringEXT, :QWORD
PROTO64 external,gluGetNurbsProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,gluGetString, :QWORD
PROTO64 external,gluGetTessProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,gluLoadSamplingMatrices, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluLookAt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluNewNurbsRenderer, 
PROTO64 external,gluNewQuadric, 
PROTO64 external,gluNewTess, 
PROTO64 external,gluNextContour, :QWORD,:QWORD
PROTO64 external,gluNurbsCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,gluNurbsCurve, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluNurbsProperty, :QWORD,:QWORD,:QWORD
PROTO64 external,gluNurbsSurface, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluOrtho2D, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluPartialDisk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluPerspective, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluPickMatrix, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluProject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluPwlCurve, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluQuadricCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,gluQuadricDrawStyle, :QWORD,:QWORD
PROTO64 external,gluQuadricNormals, :QWORD,:QWORD
PROTO64 external,gluQuadricOrientation, :QWORD,:QWORD
PROTO64 external,gluQuadricTexture, :QWORD,:QWORD
PROTO64 external,gluScaleImage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluSphere, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluTessBeginContour, :QWORD
PROTO64 external,gluTessBeginPolygon, :QWORD,:QWORD
PROTO64 external,gluTessCallback, :QWORD,:QWORD,:QWORD
PROTO64 external,gluTessEndContour, :QWORD
PROTO64 external,gluTessEndPolygon, :QWORD
PROTO64 external,gluTessNormal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluTessProperty, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,gluTessVertex, :QWORD,:QWORD,:QWORD
PROTO64 external,gluUnProject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file glu32.inc
echo -----------------------------------------
ENDIF

