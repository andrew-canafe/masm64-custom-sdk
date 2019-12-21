IFNDEF APPNOTIFY_INC
APPNOTIFY_INC equ <1>

PROTO64 external,RegisterAppStateChangeNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,UnregisterAppStateChangeNotification, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file appnotify.inc
echo -----------------------------------------
ENDIF

