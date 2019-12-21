IFNDEF SHCORE_INC
SHCORE_INC equ <1>

PROTO64 external,CreateRandomAccessStreamOnFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateRandomAccessStreamOverStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateStreamOverRandomAccessStream, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDpiForMonitor, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDpiForShellUIComponent, :QWORD
PROTO64 external,GetProcessDpiAwareness, :QWORD,:QWORD
PROTO64 external,GetScaleFactorForDevice, :QWORD
PROTO64 external,GetScaleFactorForMonitor, :QWORD,:QWORD
PROTO64 external,RegisterScaleChangeEvent, :QWORD,:QWORD
PROTO64 external,RegisterScaleChangeNotifications, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RevokeScaleChangeNotifications, :QWORD,:QWORD
PROTO64 external,SetProcessDpiAwareness, :QWORD
PROTO64 external,UnregisterScaleChangeEvent, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file shcore.inc
echo -----------------------------------------
ENDIF

