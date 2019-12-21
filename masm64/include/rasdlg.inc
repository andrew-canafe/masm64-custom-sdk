IFNDEF RASDLG_INC
RASDLG_INC equ <1>

PROTO64 external,DwTerminalDlg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetRasDialOutProtocols, 
PROTO64 external,RasAutodialQueryDlgA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasAutodialQueryDlgW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasDialDlgA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasDialDlgW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasEntryDlgA, :QWORD,:QWORD,:QWORD
PROTO64 external,RasEntryDlgW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasPhonebookDlgA, :QWORD,:QWORD,:QWORD
PROTO64 external,RasPhonebookDlgW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasSrvAddPropPages, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasSrvAllowConnectionsConfig, :QWORD
PROTO64 external,RasSrvCleanupService, 
PROTO64 external,RasSrvEnumConnections, :QWORD,:QWORD,:QWORD
PROTO64 external,RasSrvHangupConnection, :QWORD
PROTO64 external,RasSrvInitializeService, 
PROTO64 external,RasSrvIsConnectionConnected, :QWORD,:QWORD
PROTO64 external,RasSrvIsICConfigured, :QWORD
PROTO64 external,RasSrvIsServiceRunning, :QWORD
PROTO64 external,RasUserEnableManualDial, :QWORD,:QWORD,:QWORD
PROTO64 external,RasUserGetManualDial, :QWORD,:QWORD,:QWORD
PROTO64 external,RasUserPrefsDlg, :QWORD
PROTO64 external,RouterEntryDlgA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RouterEntryDlgW, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file rasdlg.inc
echo -----------------------------------------
ENDIF

