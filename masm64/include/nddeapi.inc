IFNDEF NDDEAPI_INC
NDDEAPI_INC equ <1>

PROTO64 external,NDdeGetErrorStringA, :QWORD,:QWORD,:QWORD
PROTO64 external,NDdeGetErrorStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,NDdeGetShareSecurityA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeGetShareSecurityW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeGetTrustedShareA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeGetTrustedShareW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeIsValidAppTopicListA, :QWORD
PROTO64 external,NDdeIsValidAppTopicListW, :QWORD
PROTO64 external,NDdeIsValidShareNameA, :QWORD
PROTO64 external,NDdeIsValidShareNameW, :QWORD
PROTO64 external,NDdeSetShareSecurityA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeSetShareSecurityW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeSetTrustedShareA, :QWORD,:QWORD,:QWORD
PROTO64 external,NDdeSetTrustedShareW, :QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareAddA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareAddW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareDelA, :QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareDelW, :QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareGetInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareGetInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareSetInfoA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeShareSetInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeSpecialCommandA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeSpecialCommandW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeTrustedShareEnumA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,NDdeTrustedShareEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file nddeapi.inc
echo -----------------------------------------
ENDIF

