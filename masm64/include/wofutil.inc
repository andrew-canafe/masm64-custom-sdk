IFNDEF WOFUTIL_INC
WOFUTIL_INC equ <1>

PROTO64 external,WofEnumEntries, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WofFileEnumFiles, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WofGetDriverVersion, :QWORD,:QWORD,:QWORD
PROTO64 external,WofIsExternalFile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WofSetFileDataLocation, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WofShouldCompressBinaries, :QWORD,:QWORD
PROTO64 external,WofWimAddEntry, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WofWimEnumFiles, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WofWimRemoveEntry, :QWORD,:QWORD,:QWORD
PROTO64 external,WofWimSuspendEntry, :QWORD,:QWORD,:QWORD
PROTO64 external,WofWimUpdateEntry, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wofutil.inc
echo -----------------------------------------
ENDIF

