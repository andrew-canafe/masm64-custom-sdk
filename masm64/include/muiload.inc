IFNDEF MUILOAD_INC
MUILOAD_INC equ <1>

PROTO64 external,Buffer_CchFor, :QWORD,:QWORD,:QWORD
PROTO64 external,Buffer_Contains, :QWORD,:QWORD,:QWORD
PROTO64 external,DownLevelGetParentLanguageName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DownLevelIsValidLANGID, :QWORD
PROTO64 external,DownLevelLangIDToLanguageName, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DownLevelLanguageNameToLangID, :QWORD,:QWORD
PROTO64 external,FreeMUILibrary, :QWORD
PROTO64 external,GetUILanguageFallbackList, :QWORD,:QWORD,:QWORD
PROTO64 external,LoadMUILibraryA, :QWORD,:QWORD,:QWORD
PROTO64 external,LoadMUILibraryW, :QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_Add, :QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_At, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_AtC, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_Clear, :QWORD,:QWORD
PROTO64 external,MultiStr_Count, :QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_DataLength, :QWORD,:QWORD
PROTO64 external,MultiStr_Empty, :QWORD
PROTO64 external,MultiStr_Equals, :QWORD,:QWORD
PROTO64 external,MultiStr_FrontEquals, :QWORD,:QWORD
PROTO64 external,MultiStr_Includes, :QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_Next, :QWORD
PROTO64 external,MultiStr_NextC, :QWORD
PROTO64 external,MultiStr_NextN, :QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_NextNC, :QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_PushBack, :QWORD,:QWORD,:QWORD
PROTO64 external,MultiStr_Size, :QWORD,:QWORD
PROTO64 external,MultiStr_Terminate, :QWORD,:QWORD
PROTO64 external,StringCchCopyW, :QWORD,:QWORD,:QWORD
PROTO64 external,String_Empty, :QWORD
PROTO64 external,String_Equals, :QWORD,:QWORD
PROTO64 external,_MultiStr_Add, :QWORD,:QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file muiload.inc
echo -----------------------------------------
ENDIF

