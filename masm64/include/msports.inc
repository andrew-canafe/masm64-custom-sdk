IFNDEF MSPORTS_INC
MSPORTS_INC equ <1>

PROTO64 external,ComDBClaimNextFreePort, :QWORD,:QWORD
PROTO64 external,ComDBClaimPort, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ComDBClose, :QWORD
PROTO64 external,ComDBGetCurrentPortUsage, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ComDBOpen, :QWORD
PROTO64 external,ComDBReleasePort, :QWORD,:QWORD
PROTO64 external,ComDBResizeDatabase, :QWORD,:QWORD
PROTO64 external,ParallelPortPropPageProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,PortsClassInstaller, :QWORD,:QWORD,:QWORD
PROTO64 external,SerialDisplayAdvancedSettings, :QWORD,:QWORD,:QWORD
PROTO64 external,SerialPortPropPageProvider, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msports.inc
echo -----------------------------------------
ENDIF

