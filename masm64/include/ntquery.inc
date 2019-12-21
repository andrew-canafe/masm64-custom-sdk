IFNDEF NTQUERY_INC
NTQUERY_INC equ <1>

PROTO64 external,BindIFilterFromStorage, :QWORD,:QWORD,:QWORD
PROTO64 external,BindIFilterFromStream, :QWORD,:QWORD,:QWORD
PROTO64 external,CIRevertToSelf, 
PROTO64 external,CIShutdown, 
PROTO64 external,InternalBindIFilterFromDocCLSID, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalBindIFilterFromFileName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalBindIFilterFromStorage, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InternalBindIFilterFromStream, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LoadIFilter, :QWORD,:QWORD,:QWORD
PROTO64 external,LoadIFilterEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LocateCatalogsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LocateCatalogsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file ntquery.inc
echo -----------------------------------------
ENDIF

