IFNDEF GPEDIT_INC
GPEDIT_INC equ <1>

PROTO64 external,BrowseForGPO, :QWORD
PROTO64 external,CreateGPOLink, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateRSOPQuery, :QWORD,:QWORD
PROTO64 external,DeleteAllGPOLinks, :QWORD
PROTO64 external,DeleteGPOLink, :QWORD,:QWORD
PROTO64 external,ExportRSoPData, :QWORD,:QWORD
PROTO64 external,FreeRSOPQuery, :QWORD
PROTO64 external,FreeRSOPQueryResults, :QWORD,:QWORD
PROTO64 external,ImportRSoPData, :QWORD,:QWORD
PROTO64 external,RunRSOPQuery, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file gpedit.inc
echo -----------------------------------------
ENDIF

