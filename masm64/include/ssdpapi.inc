IFNDEF SSDPAPI_INC
SSDPAPI_INC equ <1>

PROTO64 external,BeginRegisterPropChangeNotificationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CleanupCache, 
PROTO64 external,DHSetICSInterfaces, :QWORD,:QWORD
PROTO64 external,DHSetICSOff, 
PROTO64 external,DeregisterNotification, :QWORD
PROTO64 external,DeregisterService, :QWORD,:QWORD
PROTO64 external,DisableFirewallRule, :QWORD
PROTO64 external,EnableFirewallRule, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EndRegisterPropChangeNotificationEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindServices, :QWORD,:QWORD,:QWORD
PROTO64 external,FindServicesCallback, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindServicesCallbackEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindServicesCancel, :QWORD
PROTO64 external,FindServicesClose, :QWORD
PROTO64 external,FindServicesEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindServicesOnNetworkCallbackEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeSsdpMessage, :QWORD
PROTO64 external,FreeSsdpMessageEx, :QWORD
PROTO64 external,GetFirstService, :QWORD,:QWORD
PROTO64 external,GetFirstServiceEx, :QWORD,:QWORD
PROTO64 external,GetNextService, :QWORD,:QWORD
PROTO64 external,GetNextServiceEx, :QWORD,:QWORD
PROTO64 external,RegisterAliveNotificationOnNetworkEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterNotification, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterNotificationEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterService, :QWORD,:QWORD
PROTO64 external,RegisterServiceEx, :QWORD,:QWORD
PROTO64 external,SsdpCleanup, 
PROTO64 external,SsdpStartup, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ssdpapi.inc
echo -----------------------------------------
ENDIF

