IFNDEF WLANUI_INC
WLANUI_INC equ <1>

PROTO64 external,WLFreeProfile, :QWORD
PROTO64 external,WLFreeProfileXml, :QWORD
PROTO64 external,WlanUIEditProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wlanui.inc
echo -----------------------------------------
ENDIF

