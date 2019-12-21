IFNDEF OEMLICENSE_INC
OEMLICENSE_INC equ <1>

PROTO64 external,AddDemoAppLicense, :QWORD,:QWORD
PROTO64 external,RemoveDemoAppLicense, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file oemlicense.inc
echo -----------------------------------------
ENDIF

