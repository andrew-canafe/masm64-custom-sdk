IFNDEF T2EMBED_INC
T2EMBED_INC equ <1>

PROTO64 external,TTCharToUnicode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TTDeleteEmbeddedFont, :QWORD,:QWORD,:QWORD
PROTO64 external,TTEmbedFont, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TTEmbedFontEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TTEmbedFontFromFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TTEnableEmbeddingForFacename, :QWORD,:QWORD
PROTO64 external,TTGetEmbeddedFontInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TTGetEmbeddingType, :QWORD,:QWORD
PROTO64 external,TTGetNewFontName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TTIsEmbeddingEnabled, :QWORD,:QWORD
PROTO64 external,TTIsEmbeddingEnabledForFacename, :QWORD,:QWORD
PROTO64 external,TTLoadEmbeddedFont, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TTRunValidationTests, :QWORD,:QWORD
PROTO64 external,TTRunValidationTestsEx, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file t2embed.inc
echo -----------------------------------------
ENDIF

