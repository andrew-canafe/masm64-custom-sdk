IFNDEF INSENG_INC
INSENG_INC equ <1>

PROTO64 external,CheckForVersionConflict, 
PROTO64 external,CheckTrust, :QWORD,:QWORD,:QWORD
PROTO64 external,CheckTrustEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DownloadFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetICifFileFromFile, :QWORD,:QWORD
PROTO64 external,GetICifRWFileFromFile, :QWORD,:QWORD
PROTO64 external,PurgeDownloadDirectory, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file inseng.inc
echo -----------------------------------------
ENDIF

