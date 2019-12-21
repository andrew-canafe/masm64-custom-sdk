IFNDEF DNSPERF_INC
DNSPERF_INC equ <1>

PROTO64 external,CloseDnsPerformanceData, 
PROTO64 external,CollectDnsPerformanceData, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenDnsPerformanceData, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file dnsperf.inc
echo -----------------------------------------
ENDIF

