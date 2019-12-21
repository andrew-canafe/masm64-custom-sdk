IFNDEF ONDEMANDCONNROUTEHELPER_INC
ONDEMANDCONNROUTEHELPER_INC equ <1>

PROTO64 external,OnDemandAddRouteRequest, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OnDemandGetRoutingHint, :QWORD,:QWORD
PROTO64 external,OnDemandRegisterNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,OnDemandRemoveMatchingRoute, :QWORD,:QWORD
PROTO64 external,OnDemandRemoveRouteRequest, :QWORD
PROTO64 external,OnDemandUnRegisterNotification, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ondemandconnroutehelper.inc
echo -----------------------------------------
ENDIF

