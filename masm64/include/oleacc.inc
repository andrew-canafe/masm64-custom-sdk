IFNDEF OLEACC_INC
OLEACC_INC equ <1>

PROTO64 external,AccNotifyTouchInteraction, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccSetRunningUtilityState, :QWORD,:QWORD,:QWORD
PROTO64 external,AccessibleChildren, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccessibleObjectFromEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccessibleObjectFromPoint, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccessibleObjectFromWindow, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AccessibleObjectFromWindowTimeout, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateStdAccessibleObject, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateStdAccessibleProxyA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateStdAccessibleProxyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetOleaccVersionInfo, :QWORD,:QWORD
PROTO64 external,GetProcessHandleFromHwnd, :QWORD
PROTO64 external,GetRoleTextA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetRoleTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetStateTextA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetStateTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,LresultFromObject, :QWORD,:QWORD,:QWORD
PROTO64 external,ObjectFromLresult, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PropMgrClient_LookupProp, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WindowFromAccessibleObject, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file oleacc.inc
echo -----------------------------------------
ENDIF

