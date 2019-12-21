IFNDEF NETSH_INC
NETSH_INC equ <1>

PROTO64 external,ConvertGuidToString, :QWORD,:QWORD
PROTO64 external,ConvertStringToGuid, :QWORD,:QWORD,:QWORD
PROTO64 external,FreeQuotedString, :QWORD
PROTO64 external,FreeString, :QWORD
PROTO64 external,GenericMonitor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetEnumString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InitializeConsole, :QWORD,:QWORD,:QWORD
PROTO64 external,MakeQuotedString, :QWORD
PROTO64 external,MatchCmdLine, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MatchEnumTag, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MatchTagsInCmdLine, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MatchToken, :QWORD,:QWORD
PROTO64 external,PreprocessCommand, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ProcessCommand, :QWORD,:QWORD
PROTO64 external,RefreshConsole, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterContext, :QWORD
PROTO64 external,RegisterHelper, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file netsh.inc
echo -----------------------------------------
ENDIF

