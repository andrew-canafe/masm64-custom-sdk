IFNDEF HLINK_INC
HLINK_INC equ <1>

PROTO64 external,HlinkClone, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkCreateBrowseContext, :QWORD,:QWORD,:QWORD
PROTO64 external,HlinkCreateExtensionServices, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkCreateFromData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkCreateFromMoniker, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkCreateFromString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkCreateShortcut, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkCreateShortcutFromMoniker, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkCreateShortcutFromString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkGetSpecialReference, :QWORD,:QWORD
PROTO64 external,HlinkGetValueFromParams, :QWORD,:QWORD,:QWORD
PROTO64 external,HlinkIsShortcut, :QWORD
PROTO64 external,HlinkNavigate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkNavigateToStringReference, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkOnNavigate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkOnRenameDocument, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkParseDisplayName, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkPreprocessMoniker, :QWORD,:QWORD,:QWORD
PROTO64 external,HlinkQueryCreateFromData, :QWORD
PROTO64 external,HlinkResolveMonikerForData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkResolveShortcut, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkResolveShortcutToMoniker, :QWORD,:QWORD,:QWORD
PROTO64 external,HlinkResolveShortcutToString, :QWORD,:QWORD,:QWORD
PROTO64 external,HlinkResolveStringForData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkSetSpecialReference, :QWORD,:QWORD
PROTO64 external,HlinkTranslateURL, :QWORD,:QWORD,:QWORD
PROTO64 external,HlinkUpdateStackItem, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleSaveToStreamEx, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file hlink.inc
echo -----------------------------------------
ENDIF

