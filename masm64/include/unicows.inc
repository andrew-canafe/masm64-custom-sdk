IFNDEF UNICOWS_INC
UNICOWS_INC equ <1>

PROTO64 external,AcquireCredentialsHandleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddAtomW, :QWORD
PROTO64 external,AddFontResourceW, :QWORD
PROTO64 external,AddJobW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddPortW, :QWORD,:QWORD,:QWORD
PROTO64 external,AddPrintProcessorW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AddPrintProvidorW, :QWORD,:QWORD,:QWORD
PROTO64 external,AddPrinterDriverW, :QWORD,:QWORD,:QWORD
PROTO64 external,AddPrinterW, :QWORD,:QWORD,:QWORD
PROTO64 external,AdvancedDocumentPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AppendMenuW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BeginUpdateResourceA, :QWORD,:QWORD
PROTO64 external,BeginUpdateResourceW, :QWORD,:QWORD
PROTO64 external,BroadcastSystemMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,BuildCommDCBAndTimeoutsW, :QWORD,:QWORD,:QWORD
PROTO64 external,BuildCommDCBW, :QWORD,:QWORD
PROTO64 external,CallMsgFilterW, :QWORD,:QWORD
PROTO64 external,CallNamedPipeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CallWindowProcA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CallWindowProcW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ChangeDisplaySettingsExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ChangeDisplaySettingsW, :QWORD,:QWORD
PROTO64 external,ChangeMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CharLowerBuffW, :QWORD,:QWORD
PROTO64 external,CharLowerW, :QWORD
PROTO64 external,CharNextW, :QWORD
PROTO64 external,CharPrevW, :QWORD,:QWORD
PROTO64 external,CharToOemBuffW, :QWORD,:QWORD,:QWORD
PROTO64 external,CharToOemW, :QWORD,:QWORD
PROTO64 external,CharUpperBuffW, :QWORD,:QWORD
PROTO64 external,CharUpperW, :QWORD
PROTO64 external,ChooseColorW, :QWORD
PROTO64 external,ChooseFontW, :QWORD
PROTO64 external,CommConfigDialogW, :QWORD,:QWORD,:QWORD
PROTO64 external,CompareStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConfigurePortW, :QWORD,:QWORD,:QWORD
PROTO64 external,CopyAcceleratorTableW, :QWORD,:QWORD,:QWORD
PROTO64 external,CopyEnhMetaFileW, :QWORD,:QWORD
PROTO64 external,CopyFileExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CopyFileW, :QWORD,:QWORD,:QWORD
PROTO64 external,CopyMetaFileW, :QWORD,:QWORD
PROTO64 external,CreateAcceleratorTableW, :QWORD,:QWORD
PROTO64 external,CreateColorSpaceW, :QWORD
PROTO64 external,CreateDCW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateDialogIndirectParamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateDialogParamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateDirectoryExW, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateDirectoryW, :QWORD,:QWORD
PROTO64 external,CreateEnhMetaFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateEventW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateFileMappingW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateFontIndirectW, :QWORD
PROTO64 external,CreateFontW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateICW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateMDIWindowW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateMailslotW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateMetaFileW, :QWORD
PROTO64 external,CreateMutexW, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateNamedPipeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateProcessW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateScalableFontResourceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateSemaphoreW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateStdAccessibleProxyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateWaitableTimerW, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateWindowExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptAcquireContextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptEnumProviderTypesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptEnumProvidersW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptGetDefaultProviderW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptSetProviderExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptSetProviderW, :QWORD,:QWORD
PROTO64 external,CryptSignHashW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptVerifySignatureW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DdeConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DdeConnectList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DdeCreateStringHandleW, :QWORD,:QWORD,:QWORD
PROTO64 external,DdeInitializeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DdeQueryConvInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,DdeQueryStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DefDlgProcW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DefFrameProcW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DefMDIChildProcW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DefWindowProcW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteFileW, :QWORD
PROTO64 external,DeleteMonitorW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeletePortW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeletePrintProcessorW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeletePrintProvidorW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeletePrinterDriverW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeviceCapabilitiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DialogBoxIndirectParamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DialogBoxParamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DirectCall_AcquireCredentialsHandleW, 
PROTO64 external,DirectCall_AddAtomW, 
PROTO64 external,DirectCall_AddFontResourceW, 
PROTO64 external,DirectCall_AddJobW, 
PROTO64 external,DirectCall_AddPortW, 
PROTO64 external,DirectCall_AddPrintProcessorW, 
PROTO64 external,DirectCall_AddPrintProvidorW, 
PROTO64 external,DirectCall_AddPrinterDriverW, 
PROTO64 external,DirectCall_AddPrinterW, 
PROTO64 external,DirectCall_AdvancedDocumentPropertiesW, 
PROTO64 external,DirectCall_AppendMenuW, 
PROTO64 external,DirectCall_BeginUpdateResourceA, 
PROTO64 external,DirectCall_BeginUpdateResourceW, 
PROTO64 external,DirectCall_BroadcastSystemMessageW, 
PROTO64 external,DirectCall_BuildCommDCBAndTimeoutsW, 
PROTO64 external,DirectCall_BuildCommDCBW, 
PROTO64 external,DirectCall_CallMsgFilterW, 
PROTO64 external,DirectCall_CallNamedPipeW, 
PROTO64 external,DirectCall_CallWindowProcA, 
PROTO64 external,DirectCall_CallWindowProcW, 
PROTO64 external,DirectCall_ChangeDisplaySettingsExW, 
PROTO64 external,DirectCall_ChangeDisplaySettingsW, 
PROTO64 external,DirectCall_ChangeMenuW, 
PROTO64 external,DirectCall_CharLowerBuffW, 
PROTO64 external,DirectCall_CharLowerW, 
PROTO64 external,DirectCall_CharNextW, 
PROTO64 external,DirectCall_CharPrevW, 
PROTO64 external,DirectCall_CharToOemBuffW, 
PROTO64 external,DirectCall_CharToOemW, 
PROTO64 external,DirectCall_CharUpperBuffW, 
PROTO64 external,DirectCall_CharUpperW, 
PROTO64 external,DirectCall_ChooseColorW, 
PROTO64 external,DirectCall_ChooseFontW, 
PROTO64 external,DirectCall_CommConfigDialogW, 
PROTO64 external,DirectCall_CompareStringW, 
PROTO64 external,DirectCall_ConfigurePortW, 
PROTO64 external,DirectCall_CopyAcceleratorTableW, 
PROTO64 external,DirectCall_CopyEnhMetaFileW, 
PROTO64 external,DirectCall_CopyFileExW, 
PROTO64 external,DirectCall_CopyFileW, 
PROTO64 external,DirectCall_CopyMetaFileW, 
PROTO64 external,DirectCall_CreateAcceleratorTableW, 
PROTO64 external,DirectCall_CreateColorSpaceW, 
PROTO64 external,DirectCall_CreateDCW, 
PROTO64 external,DirectCall_CreateDialogIndirectParamW, 
PROTO64 external,DirectCall_CreateDialogParamW, 
PROTO64 external,DirectCall_CreateDirectoryExW, 
PROTO64 external,DirectCall_CreateDirectoryW, 
PROTO64 external,DirectCall_CreateEnhMetaFileW, 
PROTO64 external,DirectCall_CreateEventW, 
PROTO64 external,DirectCall_CreateFileMappingW, 
PROTO64 external,DirectCall_CreateFileW, 
PROTO64 external,DirectCall_CreateFontIndirectW, 
PROTO64 external,DirectCall_CreateFontW, 
PROTO64 external,DirectCall_CreateICW, 
PROTO64 external,DirectCall_CreateMDIWindowW, 
PROTO64 external,DirectCall_CreateMailslotW, 
PROTO64 external,DirectCall_CreateMetaFileW, 
PROTO64 external,DirectCall_CreateMutexW, 
PROTO64 external,DirectCall_CreateNamedPipeW, 
PROTO64 external,DirectCall_CreateProcessW, 
PROTO64 external,DirectCall_CreateScalableFontResourceW, 
PROTO64 external,DirectCall_CreateSemaphoreW, 
PROTO64 external,DirectCall_CreateStdAccessibleProxyW, 
PROTO64 external,DirectCall_CreateWaitableTimerW, 
PROTO64 external,DirectCall_CreateWindowExW, 
PROTO64 external,DirectCall_CryptAcquireContextW, 
PROTO64 external,DirectCall_CryptEnumProviderTypesW, 
PROTO64 external,DirectCall_CryptEnumProvidersW, 
PROTO64 external,DirectCall_CryptGetDefaultProviderW, 
PROTO64 external,DirectCall_CryptSetProviderExW, 
PROTO64 external,DirectCall_CryptSetProviderW, 
PROTO64 external,DirectCall_CryptSignHashW, 
PROTO64 external,DirectCall_CryptVerifySignatureW, 
PROTO64 external,DirectCall_DdeConnect, 
PROTO64 external,DirectCall_DdeConnectList, 
PROTO64 external,DirectCall_DdeCreateStringHandleW, 
PROTO64 external,DirectCall_DdeInitializeW, 
PROTO64 external,DirectCall_DdeQueryConvInfo, 
PROTO64 external,DirectCall_DdeQueryStringW, 
PROTO64 external,DirectCall_DefDlgProcW, 
PROTO64 external,DirectCall_DefFrameProcW, 
PROTO64 external,DirectCall_DefMDIChildProcW, 
PROTO64 external,DirectCall_DefWindowProcW, 
PROTO64 external,DirectCall_DeleteFileW, 
PROTO64 external,DirectCall_DeleteMonitorW, 
PROTO64 external,DirectCall_DeletePortW, 
PROTO64 external,DirectCall_DeletePrintProcessorW, 
PROTO64 external,DirectCall_DeletePrintProvidorW, 
PROTO64 external,DirectCall_DeletePrinterDriverW, 
PROTO64 external,DirectCall_DeviceCapabilitiesW, 
PROTO64 external,DirectCall_DialogBoxIndirectParamW, 
PROTO64 external,DirectCall_DialogBoxParamW, 
PROTO64 external,DirectCall_DispatchMessageW, 
PROTO64 external,DirectCall_DlgDirListComboBoxW, 
PROTO64 external,DirectCall_DlgDirListW, 
PROTO64 external,DirectCall_DlgDirSelectComboBoxExW, 
PROTO64 external,DirectCall_DlgDirSelectExW, 
PROTO64 external,DirectCall_DocumentPropertiesW, 
PROTO64 external,DirectCall_DragQueryFileW, 
PROTO64 external,DirectCall_DrawStateW, 
PROTO64 external,DirectCall_DrawTextExW, 
PROTO64 external,DirectCall_DrawTextW, 
PROTO64 external,DirectCall_EnableWindow, 
PROTO64 external,DirectCall_EndUpdateResourceA, 
PROTO64 external,DirectCall_EndUpdateResourceW, 
PROTO64 external,DirectCall_EnumCalendarInfoExW, 
PROTO64 external,DirectCall_EnumCalendarInfoW, 
PROTO64 external,DirectCall_EnumClipboardFormats, 
PROTO64 external,DirectCall_EnumDateFormatsExW, 
PROTO64 external,DirectCall_EnumDateFormatsW, 
PROTO64 external,DirectCall_EnumDisplayDevicesW, 
PROTO64 external,DirectCall_EnumDisplaySettingsExW, 
PROTO64 external,DirectCall_EnumDisplaySettingsW, 
PROTO64 external,DirectCall_EnumFontFamiliesExW, 
PROTO64 external,DirectCall_EnumFontFamiliesW, 
PROTO64 external,DirectCall_EnumFontsW, 
PROTO64 external,DirectCall_EnumICMProfilesW, 
PROTO64 external,DirectCall_EnumMonitorsW, 
PROTO64 external,DirectCall_EnumPortsW, 
PROTO64 external,DirectCall_EnumPrintProcessorDatatypesW, 
PROTO64 external,DirectCall_EnumPrintProcessorsW, 
PROTO64 external,DirectCall_EnumPrinterDriversW, 
PROTO64 external,DirectCall_EnumPrintersW, 
PROTO64 external,DirectCall_EnumPropsA, 
PROTO64 external,DirectCall_EnumPropsExA, 
PROTO64 external,DirectCall_EnumPropsExW, 
PROTO64 external,DirectCall_EnumPropsW, 
PROTO64 external,DirectCall_EnumSystemCodePagesW, 
PROTO64 external,DirectCall_EnumSystemLocalesW, 
PROTO64 external,DirectCall_EnumTimeFormatsW, 
PROTO64 external,DirectCall_EnumerateSecurityPackagesW, 
PROTO64 external,DirectCall_ExpandEnvironmentStringsW, 
PROTO64 external,DirectCall_ExtTextOutW, 
PROTO64 external,DirectCall_ExtractIconExW, 
PROTO64 external,DirectCall_ExtractIconW, 
PROTO64 external,DirectCall_FatalAppExitW, 
PROTO64 external,DirectCall_FillConsoleOutputCharacterW, 
PROTO64 external,DirectCall_FindAtomW, 
PROTO64 external,DirectCall_FindExecutableW, 
PROTO64 external,DirectCall_FindFirstChangeNotificationW, 
PROTO64 external,DirectCall_FindFirstFileW, 
PROTO64 external,DirectCall_FindNextFileW, 
PROTO64 external,DirectCall_FindResourceExW, 
PROTO64 external,DirectCall_FindResourceW, 
PROTO64 external,DirectCall_FindTextW, 
PROTO64 external,DirectCall_FindWindowExW, 
PROTO64 external,DirectCall_FindWindowW, 
PROTO64 external,DirectCall_FormatMessageW, 
PROTO64 external,DirectCall_FreeContextBuffer, 
PROTO64 external,DirectCall_FreeEnvironmentStringsW, 
PROTO64 external,DirectCall_GetAltTabInfoW, 
PROTO64 external,DirectCall_GetAtomNameW, 
PROTO64 external,DirectCall_GetCPInfo, 
PROTO64 external,DirectCall_GetCPInfoExW, 
PROTO64 external,DirectCall_GetCalendarInfoW, 
PROTO64 external,DirectCall_GetCharABCWidthsFloatW, 
PROTO64 external,DirectCall_GetCharABCWidthsW, 
PROTO64 external,DirectCall_GetCharWidth32W, 
PROTO64 external,DirectCall_GetCharWidthFloatW, 
PROTO64 external,DirectCall_GetCharWidthW, 
PROTO64 external,DirectCall_GetCharacterPlacementW, 
PROTO64 external,DirectCall_GetClassInfoExW, 
PROTO64 external,DirectCall_GetClassInfoW, 
PROTO64 external,DirectCall_GetClassLongW, 
PROTO64 external,DirectCall_GetClassNameW, 
PROTO64 external,DirectCall_GetClipboardData, 
PROTO64 external,DirectCall_GetClipboardFormatNameW, 
PROTO64 external,DirectCall_GetComputerNameW, 
PROTO64 external,DirectCall_GetConsoleTitleW, 
PROTO64 external,DirectCall_GetCurrencyFormatW, 
PROTO64 external,DirectCall_GetCurrentDirectoryW, 
PROTO64 external,DirectCall_GetCurrentHwProfileW, 
PROTO64 external,DirectCall_GetDateFormatW, 
PROTO64 external,DirectCall_GetDefaultCommConfigW, 
PROTO64 external,DirectCall_GetDiskFreeSpaceExW, 
PROTO64 external,DirectCall_GetDiskFreeSpaceW, 
PROTO64 external,DirectCall_GetDlgItemTextW, 
PROTO64 external,DirectCall_GetDriveTypeW, 
PROTO64 external,DirectCall_GetEnhMetaFileDescriptionW, 
PROTO64 external,DirectCall_GetEnhMetaFileW, 
PROTO64 external,DirectCall_GetEnvironmentStringsW, 
PROTO64 external,DirectCall_GetEnvironmentVariableW, 
PROTO64 external,DirectCall_GetFileAttributesExW, 
PROTO64 external,DirectCall_GetFileAttributesW, 
PROTO64 external,DirectCall_GetFileTitleW, 
PROTO64 external,DirectCall_GetFileVersionInfoSizeW, 
PROTO64 external,DirectCall_GetFileVersionInfoW, 
PROTO64 external,DirectCall_GetFullPathNameW, 
PROTO64 external,DirectCall_GetGlyphOutlineW, 
PROTO64 external,DirectCall_GetICMProfileW, 
PROTO64 external,DirectCall_GetJobW, 
PROTO64 external,DirectCall_GetKerningPairsW, 
PROTO64 external,DirectCall_GetKeyNameTextW, 
PROTO64 external,DirectCall_GetKeyboardLayoutNameW, 
PROTO64 external,DirectCall_GetLocaleInfoW, 
PROTO64 external,DirectCall_GetLogColorSpaceW, 
PROTO64 external,DirectCall_GetLogicalDriveStringsW, 
PROTO64 external,DirectCall_GetLongPathNameW, 
PROTO64 external,DirectCall_GetMenuItemInfoW, 
PROTO64 external,DirectCall_GetMenuStringW, 
PROTO64 external,DirectCall_GetMessageW, 
PROTO64 external,DirectCall_GetMetaFileW, 
PROTO64 external,DirectCall_GetModuleFileNameW, 
PROTO64 external,DirectCall_GetModuleHandleW, 
PROTO64 external,DirectCall_GetMonitorInfoW, 
PROTO64 external,DirectCall_GetNamedPipeHandleStateW, 
PROTO64 external,DirectCall_GetNumberFormatW, 
PROTO64 external,DirectCall_GetObjectW, 
PROTO64 external,DirectCall_GetOpenFileNamePreviewW, 
PROTO64 external,DirectCall_GetOpenFileNameW, 
PROTO64 external,DirectCall_GetOutlineTextMetricsW, 
PROTO64 external,DirectCall_GetPrintProcessorDirectoryW, 
PROTO64 external,DirectCall_GetPrinterDataW, 
PROTO64 external,DirectCall_GetPrinterDriverDirectoryW, 
PROTO64 external,DirectCall_GetPrinterDriverW, 
PROTO64 external,DirectCall_GetPrinterW, 
PROTO64 external,DirectCall_GetPrivateProfileIntW, 
PROTO64 external,DirectCall_GetPrivateProfileSectionNamesW, 
PROTO64 external,DirectCall_GetPrivateProfileSectionW, 
PROTO64 external,DirectCall_GetPrivateProfileStringW, 
PROTO64 external,DirectCall_GetPrivateProfileStructW, 
PROTO64 external,DirectCall_GetProcAddress, 
PROTO64 external,DirectCall_GetProfileIntW, 
PROTO64 external,DirectCall_GetProfileSectionW, 
PROTO64 external,DirectCall_GetProfileStringW, 
PROTO64 external,DirectCall_GetPropA, 
PROTO64 external,DirectCall_GetPropW, 
PROTO64 external,DirectCall_GetRoleTextW, 
PROTO64 external,DirectCall_GetSaveFileNamePreviewW, 
PROTO64 external,DirectCall_GetSaveFileNameW, 
PROTO64 external,DirectCall_GetShortPathNameW, 
PROTO64 external,DirectCall_GetStartupInfoW, 
PROTO64 external,DirectCall_GetStateTextW, 
PROTO64 external,DirectCall_GetStringTypeExW, 
PROTO64 external,DirectCall_GetStringTypeW, 
PROTO64 external,DirectCall_GetSystemDirectoryW, 
PROTO64 external,DirectCall_GetSystemWindowsDirectoryW, 
PROTO64 external,DirectCall_GetTabbedTextExtentW, 
PROTO64 external,DirectCall_GetTempFileNameW, 
PROTO64 external,DirectCall_GetTempPathW, 
PROTO64 external,DirectCall_GetTextExtentExPointW, 
PROTO64 external,DirectCall_GetTextExtentPoint32W, 
PROTO64 external,DirectCall_GetTextExtentPointW, 
PROTO64 external,DirectCall_GetTextFaceW, 
PROTO64 external,DirectCall_GetTextMetricsW, 
PROTO64 external,DirectCall_GetTimeFormatW, 
PROTO64 external,DirectCall_GetUserNameW, 
PROTO64 external,DirectCall_GetVersionExW, 
PROTO64 external,DirectCall_GetVolumeInformationW, 
PROTO64 external,DirectCall_GetWindowLongA, 
PROTO64 external,DirectCall_GetWindowLongW, 
PROTO64 external,DirectCall_GetWindowModuleFileNameW, 
PROTO64 external,DirectCall_GetWindowTextLengthW, 
PROTO64 external,DirectCall_GetWindowTextW, 
PROTO64 external,DirectCall_GetWindowsDirectoryW, 
PROTO64 external,DirectCall_GlobalAddAtomW, 
PROTO64 external,DirectCall_GlobalFindAtomW, 
PROTO64 external,DirectCall_GlobalGetAtomNameW, 
PROTO64 external,DirectCall_GrayStringW, 
PROTO64 external,DirectCall_InitSecurityInterfaceW, 
PROTO64 external,DirectCall_InitializeSecurityContextW, 
PROTO64 external,DirectCall_InsertMenuItemW, 
PROTO64 external,DirectCall_InsertMenuW, 
PROTO64 external,DirectCall_IsBadStringPtrW, 
PROTO64 external,DirectCall_IsCharAlphaNumericW, 
PROTO64 external,DirectCall_IsCharAlphaW, 
PROTO64 external,DirectCall_IsCharLowerW, 
PROTO64 external,DirectCall_IsCharUpperW, 
PROTO64 external,DirectCall_IsClipboardFormatAvailable, 
PROTO64 external,DirectCall_IsDestinationReachableW, 
PROTO64 external,DirectCall_IsDialogMessageW, 
PROTO64 external,DirectCall_IsTextUnicode, 
PROTO64 external,DirectCall_IsValidCodePage, 
PROTO64 external,DirectCall_IsWindowUnicode, 
PROTO64 external,DirectCall_LCMapStringW, 
PROTO64 external,DirectCall_LoadAcceleratorsW, 
PROTO64 external,DirectCall_LoadBitmapW, 
PROTO64 external,DirectCall_LoadCursorFromFileW, 
PROTO64 external,DirectCall_LoadCursorW, 
PROTO64 external,DirectCall_LoadIconW, 
PROTO64 external,DirectCall_LoadImageW, 
PROTO64 external,DirectCall_LoadKeyboardLayoutW, 
PROTO64 external,DirectCall_LoadLibraryExW, 
PROTO64 external,DirectCall_LoadLibraryW, 
PROTO64 external,DirectCall_LoadMenuIndirectW, 
PROTO64 external,DirectCall_LoadMenuW, 
PROTO64 external,DirectCall_LoadStringW, 
PROTO64 external,DirectCall_MCIWndCreateW, 
PROTO64 external,DirectCall_MapVirtualKeyExW, 
PROTO64 external,DirectCall_MapVirtualKeyW, 
PROTO64 external,DirectCall_MessageBoxExW, 
PROTO64 external,DirectCall_MessageBoxIndirectW, 
PROTO64 external,DirectCall_MessageBoxW, 
PROTO64 external,DirectCall_ModifyMenuW, 
PROTO64 external,DirectCall_MoveFileW, 
PROTO64 external,DirectCall_MultiByteToWideChar, 
PROTO64 external,DirectCall_MultinetGetConnectionPerformanceW, 
PROTO64 external,DirectCall_OemToCharBuffW, 
PROTO64 external,DirectCall_OemToCharW, 
PROTO64 external,DirectCall_OleUIAddVerbMenuW, 
PROTO64 external,DirectCall_OleUIBusyW, 
PROTO64 external,DirectCall_OleUIChangeIconW, 
PROTO64 external,DirectCall_OleUIChangeSourceW, 
PROTO64 external,DirectCall_OleUIConvertW, 
PROTO64 external,DirectCall_OleUIEditLinksW, 
PROTO64 external,DirectCall_OleUIInsertObjectW, 
PROTO64 external,DirectCall_OleUIObjectPropertiesW, 
PROTO64 external,DirectCall_OleUIPasteSpecialW, 
PROTO64 external,DirectCall_OleUIPromptUserW, 
PROTO64 external,DirectCall_OleUIUpdateLinksW, 
PROTO64 external,DirectCall_OpenEventW, 
PROTO64 external,DirectCall_OpenFileMappingW, 
PROTO64 external,DirectCall_OpenMutexW, 
PROTO64 external,DirectCall_OpenPrinterW, 
PROTO64 external,DirectCall_OpenSemaphoreW, 
PROTO64 external,DirectCall_OpenWaitableTimerW, 
PROTO64 external,DirectCall_OutputDebugStringW, 
PROTO64 external,DirectCall_PageSetupDlgW, 
PROTO64 external,DirectCall_PeekConsoleInputW, 
PROTO64 external,DirectCall_PeekMessageW, 
PROTO64 external,DirectCall_PlaySoundW, 
PROTO64 external,DirectCall_PolyTextOutW, 
PROTO64 external,DirectCall_PostMessageW, 
PROTO64 external,DirectCall_PostThreadMessageW, 
PROTO64 external,DirectCall_PrintDlgW, 
PROTO64 external,DirectCall_QueryContextAttributesW, 
PROTO64 external,DirectCall_QueryCredentialsAttributesW, 
PROTO64 external,DirectCall_QueryDosDeviceW, 
PROTO64 external,DirectCall_QuerySecurityPackageInfoW, 
PROTO64 external,DirectCall_RasConnectionNotificationW, 
PROTO64 external,DirectCall_RasCreatePhonebookEntryW, 
PROTO64 external,DirectCall_RasDeleteEntryW, 
PROTO64 external,DirectCall_RasDeleteSubEntryW, 
PROTO64 external,DirectCall_RasDialW, 
PROTO64 external,DirectCall_RasEditPhonebookEntryW, 
PROTO64 external,DirectCall_RasEnumConnectionsW, 
PROTO64 external,DirectCall_RasEnumDevicesW, 
PROTO64 external,DirectCall_RasEnumEntriesW, 
PROTO64 external,DirectCall_RasGetConnectStatusW, 
PROTO64 external,DirectCall_RasGetEntryDialParamsW, 
PROTO64 external,DirectCall_RasGetEntryPropertiesW, 
PROTO64 external,DirectCall_RasGetErrorStringW, 
PROTO64 external,DirectCall_RasGetProjectionInfoW, 
PROTO64 external,DirectCall_RasHangUpW, 
PROTO64 external,DirectCall_RasRenameEntryW, 
PROTO64 external,DirectCall_RasSetEntryDialParamsW, 
PROTO64 external,DirectCall_RasSetEntryPropertiesW, 
PROTO64 external,DirectCall_RasSetSubEntryPropertiesW, 
PROTO64 external,DirectCall_RasValidateEntryNameW, 
PROTO64 external,DirectCall_ReadConsoleInputW, 
PROTO64 external,DirectCall_ReadConsoleOutputCharacterW, 
PROTO64 external,DirectCall_ReadConsoleOutputW, 
PROTO64 external,DirectCall_ReadConsoleW, 
PROTO64 external,DirectCall_RegConnectRegistryW, 
PROTO64 external,DirectCall_RegCreateKeyExW, 
PROTO64 external,DirectCall_RegCreateKeyW, 
PROTO64 external,DirectCall_RegDeleteKeyW, 
PROTO64 external,DirectCall_RegDeleteValueW, 
PROTO64 external,DirectCall_RegEnumKeyExW, 
PROTO64 external,DirectCall_RegEnumKeyW, 
PROTO64 external,DirectCall_RegEnumValueW, 
PROTO64 external,DirectCall_RegLoadKeyW, 
PROTO64 external,DirectCall_RegOpenKeyExW, 
PROTO64 external,DirectCall_RegOpenKeyW, 
PROTO64 external,DirectCall_RegQueryInfoKeyW, 
PROTO64 external,DirectCall_RegQueryMultipleValuesW, 
PROTO64 external,DirectCall_RegQueryValueExW, 
PROTO64 external,DirectCall_RegQueryValueW, 
PROTO64 external,DirectCall_RegReplaceKeyW, 
PROTO64 external,DirectCall_RegSaveKeyW, 
PROTO64 external,DirectCall_RegSetValueExW, 
PROTO64 external,DirectCall_RegSetValueW, 
PROTO64 external,DirectCall_RegUnLoadKeyW, 
PROTO64 external,DirectCall_RegisterClassExW, 
PROTO64 external,DirectCall_RegisterClassW, 
PROTO64 external,DirectCall_RegisterClipboardFormatW, 
PROTO64 external,DirectCall_RegisterDeviceNotificationW, 
PROTO64 external,DirectCall_RegisterWindowMessageW, 
PROTO64 external,DirectCall_RemoveDirectoryW, 
PROTO64 external,DirectCall_RemoveFontResourceW, 
PROTO64 external,DirectCall_RemovePropA, 
PROTO64 external,DirectCall_RemovePropW, 
PROTO64 external,DirectCall_ReplaceTextW, 
PROTO64 external,DirectCall_ResetDCW, 
PROTO64 external,DirectCall_ResetPrinterW, 
PROTO64 external,DirectCall_SHBrowseForFolderW, 
PROTO64 external,DirectCall_SHChangeNotify, 
PROTO64 external,DirectCall_SHFileOperationW, 
PROTO64 external,DirectCall_SHGetFileInfoW, 
PROTO64 external,DirectCall_SHGetNewLinkInfoW, 
PROTO64 external,DirectCall_SHGetPathFromIDListW, 
PROTO64 external,DirectCall_ScrollConsoleScreenBufferW, 
PROTO64 external,DirectCall_SearchPathW, 
PROTO64 external,DirectCall_SendDlgItemMessageW, 
PROTO64 external,DirectCall_SendMessageCallbackW, 
PROTO64 external,DirectCall_SendMessageTimeoutW, 
PROTO64 external,DirectCall_SendMessageW, 
PROTO64 external,DirectCall_SendNotifyMessageW, 
PROTO64 external,DirectCall_SetCalendarInfoW, 
PROTO64 external,DirectCall_SetClassLongW, 
PROTO64 external,DirectCall_SetComputerNameW, 
PROTO64 external,DirectCall_SetConsoleTitleW, 
PROTO64 external,DirectCall_SetCurrentDirectoryW, 
PROTO64 external,DirectCall_SetDefaultCommConfigW, 
PROTO64 external,DirectCall_SetDlgItemTextW, 
PROTO64 external,DirectCall_SetEnvironmentVariableW, 
PROTO64 external,DirectCall_SetFileAttributesW, 
PROTO64 external,DirectCall_SetICMProfileW, 
PROTO64 external,DirectCall_SetJobW, 
PROTO64 external,DirectCall_SetLocaleInfoW, 
PROTO64 external,DirectCall_SetMenuItemInfoW, 
PROTO64 external,DirectCall_SetPrinterDataW, 
PROTO64 external,DirectCall_SetPrinterW, 
PROTO64 external,DirectCall_SetPropA, 
PROTO64 external,DirectCall_SetPropW, 
PROTO64 external,DirectCall_SetVolumeLabelW, 
PROTO64 external,DirectCall_SetWindowLongA, 
PROTO64 external,DirectCall_SetWindowLongW, 
PROTO64 external,DirectCall_SetWindowTextW, 
PROTO64 external,DirectCall_SetWindowsHookExW, 
PROTO64 external,DirectCall_SetWindowsHookW, 
PROTO64 external,DirectCall_SetupDiGetClassDevsW, 
PROTO64 external,DirectCall_ShellAboutW, 
PROTO64 external,DirectCall_ShellExecuteExW, 
PROTO64 external,DirectCall_ShellExecuteW, 
PROTO64 external,DirectCall_Shell_NotifyIconW, 
PROTO64 external,DirectCall_StartDocPrinterW, 
PROTO64 external,DirectCall_StartDocW, 
PROTO64 external,DirectCall_SystemParametersInfoW, 
PROTO64 external,DirectCall_TabbedTextOutW, 
PROTO64 external,DirectCall_TextOutW, 
PROTO64 external,DirectCall_TranslateAcceleratorW, 
PROTO64 external,DirectCall_UnregisterClassW, 
PROTO64 external,DirectCall_UpdateICMRegKeyW, 
PROTO64 external,DirectCall_UpdateResourceA, 
PROTO64 external,DirectCall_UpdateResourceW, 
PROTO64 external,DirectCall_VerFindFileW, 
PROTO64 external,DirectCall_VerInstallFileW, 
PROTO64 external,DirectCall_VerLanguageNameW, 
PROTO64 external,DirectCall_VerQueryValueW, 
PROTO64 external,DirectCall_VkKeyScanExW, 
PROTO64 external,DirectCall_VkKeyScanW, 
PROTO64 external,DirectCall_WNetAddConnection2W, 
PROTO64 external,DirectCall_WNetAddConnection3W, 
PROTO64 external,DirectCall_WNetAddConnectionW, 
PROTO64 external,DirectCall_WNetCancelConnection2W, 
PROTO64 external,DirectCall_WNetCancelConnectionW, 
PROTO64 external,DirectCall_WNetConnectionDialog1W, 
PROTO64 external,DirectCall_WNetDisconnectDialog1W, 
PROTO64 external,DirectCall_WNetEnumResourceW, 
PROTO64 external,DirectCall_WNetGetConnectionW, 
PROTO64 external,DirectCall_WNetGetLastErrorW, 
PROTO64 external,DirectCall_WNetGetNetworkInformationW, 
PROTO64 external,DirectCall_WNetGetProviderNameW, 
PROTO64 external,DirectCall_WNetGetResourceInformationW, 
PROTO64 external,DirectCall_WNetGetResourceParentW, 
PROTO64 external,DirectCall_WNetGetUniversalNameW, 
PROTO64 external,DirectCall_WNetGetUserW, 
PROTO64 external,DirectCall_WNetOpenEnumW, 
PROTO64 external,DirectCall_WNetUseConnectionW, 
PROTO64 external,DirectCall_WaitNamedPipeW, 
PROTO64 external,DirectCall_WideCharToMultiByte, 
PROTO64 external,DirectCall_WinHelpW, 
PROTO64 external,DirectCall_WriteConsoleInputW, 
PROTO64 external,DirectCall_WriteConsoleOutputCharacterW, 
PROTO64 external,DirectCall_WriteConsoleOutputW, 
PROTO64 external,DirectCall_WriteConsoleW, 
PROTO64 external,DirectCall_WritePrivateProfileSectionW, 
PROTO64 external,DirectCall_WritePrivateProfileStringW, 
PROTO64 external,DirectCall_WritePrivateProfileStructW, 
PROTO64 external,DirectCall_WriteProfileSectionW, 
PROTO64 external,DirectCall_WriteProfileStringW, 
PROTO64 external,DirectCall_auxGetDevCapsW, 
PROTO64 external,DirectCall_capCreateCaptureWindowW, 
PROTO64 external,DirectCall_capGetDriverDescriptionW, 
PROTO64 external,DirectCall_joyGetDevCapsW, 
PROTO64 external,DirectCall_lstrcatW, 
PROTO64 external,DirectCall_lstrcmpW, 
PROTO64 external,DirectCall_lstrcmpiW, 
PROTO64 external,DirectCall_lstrcpyW, 
PROTO64 external,DirectCall_lstrcpynW, 
PROTO64 external,DirectCall_lstrlenW, 
PROTO64 external,DirectCall_mciGetDeviceIDW, 
PROTO64 external,DirectCall_mciGetErrorStringW, 
PROTO64 external,DirectCall_mciSendCommandW, 
PROTO64 external,DirectCall_mciSendStringW, 
PROTO64 external,DirectCall_midiInGetDevCapsW, 
PROTO64 external,DirectCall_midiInGetErrorTextW, 
PROTO64 external,DirectCall_midiOutGetDevCapsW, 
PROTO64 external,DirectCall_mixerGetControlDetailsW, 
PROTO64 external,DirectCall_mixerGetDevCapsW, 
PROTO64 external,DirectCall_mixerGetLineControlsW, 
PROTO64 external,DirectCall_mixerGetLineInfoW, 
PROTO64 external,DirectCall_mmioInstallIOProcW, 
PROTO64 external,DirectCall_mmioOpenW, 
PROTO64 external,DirectCall_mmioRenameW, 
PROTO64 external,DirectCall_mmioStringToFOURCC, 
PROTO64 external,DirectCall_sndPlaySoundW, 
PROTO64 external,DirectCall_waveInGetDevCapsW, 
PROTO64 external,DirectCall_waveInGetErrorTextW, 
PROTO64 external,DirectCall_waveOutGetDevCapsW, 
PROTO64 external,DirectCall_waveOutGetErrorTextW, 
PROTO64 external,DirectCall_wsprintfW, 
PROTO64 external,DirectCall_wvsprintfW, 
PROTO64 external,DispatchMessageW, :QWORD
PROTO64 external,DlgDirListComboBoxW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DlgDirListW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DlgDirSelectComboBoxExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DlgDirSelectExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DocumentPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DragQueryFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawStateW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawTextExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DrawTextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnableWindow, :QWORD,:QWORD
PROTO64 external,EndUpdateResourceA, :QWORD,:QWORD
PROTO64 external,EndUpdateResourceW, :QWORD,:QWORD
PROTO64 external,EnumCalendarInfoExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumCalendarInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumClipboardFormats, :QWORD
PROTO64 external,EnumDateFormatsExW, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumDateFormatsW, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumDisplayDevicesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumDisplaySettingsExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumDisplaySettingsW, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumFontFamiliesExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumFontFamiliesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumFontsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumICMProfilesW, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumMonitorsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumPortsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumPrintProcessorDatatypesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumPrintProcessorsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumPrinterDriversW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumPrintersW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EnumPropsA, :QWORD,:QWORD
PROTO64 external,EnumPropsExA, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumPropsExW, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumPropsW, :QWORD,:QWORD
PROTO64 external,EnumSystemCodePagesW, :QWORD,:QWORD
PROTO64 external,EnumSystemLocalesW, :QWORD,:QWORD
PROTO64 external,EnumTimeFormatsW, :QWORD,:QWORD,:QWORD
PROTO64 external,EnumerateSecurityPackagesW, :QWORD,:QWORD
PROTO64 external,ExpandEnvironmentStringsW, :QWORD,:QWORD,:QWORD
PROTO64 external,ExtTextOutW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExtractIconExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExtractIconW, :QWORD,:QWORD,:QWORD
PROTO64 external,FatalAppExitW, :QWORD,:QWORD
PROTO64 external,FillConsoleOutputCharacterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindAtomW, :QWORD
PROTO64 external,FindExecutableW, :QWORD,:QWORD,:QWORD
PROTO64 external,FindFirstChangeNotificationW, :QWORD,:QWORD,:QWORD
PROTO64 external,FindFirstFileW, :QWORD,:QWORD
PROTO64 external,FindNextFileW, :QWORD,:QWORD
PROTO64 external,FindResourceExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindResourceW, :QWORD,:QWORD,:QWORD
PROTO64 external,FindTextW, :QWORD
PROTO64 external,FindWindowExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindWindowW, :QWORD,:QWORD
PROTO64 external,FormatMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeContextBuffer, :QWORD
PROTO64 external,FreeEnvironmentStringsW, :QWORD
PROTO64 external,GetAltTabInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAtomNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetCPInfo, :QWORD,:QWORD
PROTO64 external,GetCPInfoExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetCalendarInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCharABCWidthsFloatW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCharABCWidthsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCharWidth32W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCharWidthFloatW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCharWidthW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCharacterPlacementW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetClassInfoExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetClassInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetClassLongW, :QWORD,:QWORD
PROTO64 external,GetClassNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetClipboardData, :QWORD
PROTO64 external,GetClipboardFormatNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetComputerNameW, :QWORD,:QWORD
PROTO64 external,GetConsoleTitleW, :QWORD,:QWORD
PROTO64 external,GetCurrencyFormatW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCurrentDirectoryW, :QWORD,:QWORD
PROTO64 external,GetCurrentHwProfileW, :QWORD
PROTO64 external,GetDateFormatW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDefaultCommConfigW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetDiskFreeSpaceExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDiskFreeSpaceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDlgItemTextW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDriveTypeW, :QWORD
PROTO64 external,GetEnhMetaFileDescriptionW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetEnhMetaFileW, :QWORD
PROTO64 external,GetEnvironmentStringsW, 
PROTO64 external,GetEnvironmentVariableW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetFileAttributesExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetFileAttributesW, :QWORD
PROTO64 external,GetFileTitleW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetFileVersionInfoSizeW, :QWORD,:QWORD
PROTO64 external,GetFileVersionInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetFullPathNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetGlyphOutlineW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetICMProfileW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetJobW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetKerningPairsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetKeyNameTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetKeyboardLayoutNameW, :QWORD
PROTO64 external,GetLocaleInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetLogColorSpaceW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetLogicalDriveStringsW, :QWORD,:QWORD
PROTO64 external,GetLongPathNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetMenuItemInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMenuStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetMetaFileW, :QWORD
PROTO64 external,GetModuleFileNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetModuleHandleW, :QWORD
PROTO64 external,GetMonitorInfoW, :QWORD,:QWORD
PROTO64 external,GetNamedPipeHandleStateW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetNumberFormatW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetObjectW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetOpenFileNamePreviewW, :QWORD
PROTO64 external,GetOpenFileNameW, :QWORD
PROTO64 external,GetOrdinal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetOutlineTextMetricsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetPrintProcessorDirectoryW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPrinterDataW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPrinterDriverW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPrinterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPrivateProfileIntW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPrivateProfileSectionNamesW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetPrivateProfileSectionW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPrivateProfileStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPrivateProfileStructW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetProcAddress, :QWORD,:QWORD
PROTO64 external,GetProcAddressInternal, :QWORD,:QWORD
PROTO64 external,GetProfileIntW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetProfileSectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetProfileStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetPropA, :QWORD,:QWORD
PROTO64 external,GetPropW, :QWORD,:QWORD
PROTO64 external,GetRoleTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetSaveFileNamePreviewW, :QWORD
PROTO64 external,GetSaveFileNameW, :QWORD
PROTO64 external,GetShortPathNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetStartupInfoW, :QWORD
PROTO64 external,GetStateTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetStringTypeExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetStringTypeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetSystemDirectoryW, :QWORD,:QWORD
PROTO64 external,GetSystemWindowsDirectoryW, :QWORD,:QWORD
PROTO64 external,GetTabbedTextExtentW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetTempFileNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetTempPathW, :QWORD,:QWORD
PROTO64 external,GetTextExtentExPointW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetTextExtentPoint32W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetTextExtentPointW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetTextFaceW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetTextMetricsW, :QWORD,:QWORD
PROTO64 external,GetTimeFormatW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetUserNameW, :QWORD,:QWORD
PROTO64 external,GetVersionExW, :QWORD
PROTO64 external,GetVolumeInformationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetWindowLongA, :QWORD,:QWORD
PROTO64 external,GetWindowLongW, :QWORD,:QWORD
PROTO64 external,GetWindowModuleFileNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetWindowTextLengthW, :QWORD
PROTO64 external,GetWindowTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetWindowsDirectoryW, :QWORD,:QWORD
PROTO64 external,GlobalAddAtomW, :QWORD
PROTO64 external,GlobalFindAtomW, :QWORD
PROTO64 external,GlobalGetAtomNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAcquireCredentialsHandleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAddAtomW, :QWORD
PROTO64 external,GodotFailAddFontResourceW, :QWORD
PROTO64 external,GodotFailAddJobW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAddMonitorW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAddPortW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAddPrintProcessorW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAddPrintProvidorW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAddPrinterDriverW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAddPrinterW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAdvancedDocumentPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailAppendMenuW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailBeginUpdateResourceA, :QWORD,:QWORD
PROTO64 external,GodotFailBeginUpdateResourceW, :QWORD,:QWORD
PROTO64 external,GodotFailBroadcastSystemMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailBuildCommDCBAndTimeoutsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailBuildCommDCBW, :QWORD,:QWORD
PROTO64 external,GodotFailCallMsgFilterW, :QWORD,:QWORD
PROTO64 external,GodotFailCallNamedPipeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCallWindowProcA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCallWindowProcW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailChangeDisplaySettingsExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailChangeDisplaySettingsW, :QWORD,:QWORD
PROTO64 external,GodotFailChangeMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCharLowerBuffW, :QWORD,:QWORD
PROTO64 external,GodotFailCharLowerW, :QWORD
PROTO64 external,GodotFailCharNextW, :QWORD
PROTO64 external,GodotFailCharPrevW, :QWORD,:QWORD
PROTO64 external,GodotFailCharToOemBuffW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCharToOemW, :QWORD,:QWORD
PROTO64 external,GodotFailCharUpperBuffW, :QWORD,:QWORD
PROTO64 external,GodotFailCharUpperW, :QWORD
PROTO64 external,GodotFailChooseColorW, :QWORD
PROTO64 external,GodotFailChooseFontW, :QWORD
PROTO64 external,GodotFailCommConfigDialogW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCompareStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailConfigurePortW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCopyAcceleratorTableW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCopyEnhMetaFileW, :QWORD,:QWORD
PROTO64 external,GodotFailCopyFileExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCopyFileW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCopyMetaFileW, :QWORD,:QWORD
PROTO64 external,GodotFailCreateAcceleratorTableW, :QWORD,:QWORD
PROTO64 external,GodotFailCreateColorSpaceW, :QWORD
PROTO64 external,GodotFailCreateDCW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateDialogIndirectParamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateDialogParamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateDirectoryExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateDirectoryW, :QWORD,:QWORD
PROTO64 external,GodotFailCreateEnhMetaFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateEventW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateFileMappingW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateFontIndirectW, :QWORD
PROTO64 external,GodotFailCreateFontW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateICW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateMDIWindowW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateMailslotW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateMetaFileW, :QWORD
PROTO64 external,GodotFailCreateMutexW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateNamedPipeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateProcessW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateScalableFontResourceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateSemaphoreW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateStdAccessibleProxyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateWaitableTimerW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCreateWindowExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCryptAcquireContextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCryptEnumProviderTypesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCryptEnumProvidersW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCryptGetDefaultProviderW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCryptSetProviderExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCryptSetProviderW, :QWORD,:QWORD
PROTO64 external,GodotFailCryptSignHashW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailCryptVerifySignatureW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDdeConnect, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDdeConnectList, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDdeCreateStringHandleW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDdeInitializeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDdeQueryConvInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDdeQueryStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDefDlgProcW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDefFrameProcW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDefMDIChildProcW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDefWindowProcW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDeleteFileW, :QWORD
PROTO64 external,GodotFailDeleteMonitorW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDeletePortW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDeletePrintProcessorW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDeletePrintProvidorW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDeletePrinterDriverW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDeviceCapabilitiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDialogBoxIndirectParamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDialogBoxParamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDispatchMessageW, :QWORD
PROTO64 external,GodotFailDlgDirListComboBoxW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDlgDirListW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDlgDirSelectComboBoxExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDlgDirSelectExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDocumentPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDragQueryFileW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDrawStateW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDrawTextExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailDrawTextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnableWindow, :QWORD,:QWORD
PROTO64 external,GodotFailEndUpdateResourceA, :QWORD,:QWORD
PROTO64 external,GodotFailEndUpdateResourceW, :QWORD,:QWORD
PROTO64 external,GodotFailEnumCalendarInfoExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumCalendarInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumClipboardFormats, :QWORD
PROTO64 external,GodotFailEnumDateFormatsExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumDateFormatsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumDisplayDevicesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumDisplaySettingsExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumDisplaySettingsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumFontFamiliesExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumFontFamiliesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumFontsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumICMProfilesW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumMonitorsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumPortsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumPrintProcessorDatatypesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumPrintProcessorsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumPrinterDriversW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumPrintersW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumPropsA, :QWORD,:QWORD
PROTO64 external,GodotFailEnumPropsExA, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumPropsExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumPropsW, :QWORD,:QWORD
PROTO64 external,GodotFailEnumSystemCodePagesW, :QWORD,:QWORD
PROTO64 external,GodotFailEnumSystemLocalesW, :QWORD,:QWORD
PROTO64 external,GodotFailEnumTimeFormatsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailEnumerateSecurityPackagesW, :QWORD,:QWORD
PROTO64 external,GodotFailExpandEnvironmentStringsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailExtTextOutW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailExtractIconExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailExtractIconW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailFatalAppExitW, :QWORD,:QWORD
PROTO64 external,GodotFailFillConsoleOutputCharacterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailFindAtomW, :QWORD
PROTO64 external,GodotFailFindExecutableW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailFindFirstChangeNotificationW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailFindFirstFileW, :QWORD,:QWORD
PROTO64 external,GodotFailFindNextFileW, :QWORD,:QWORD
PROTO64 external,GodotFailFindResourceExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailFindResourceW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailFindTextW, :QWORD
PROTO64 external,GodotFailFindWindowExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailFindWindowW, :QWORD,:QWORD
PROTO64 external,GodotFailFormatMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailFreeContextBuffer, :QWORD
PROTO64 external,GodotFailFreeEnvironmentStringsW, :QWORD
PROTO64 external,GodotFailGetAltTabInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetAtomNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCPInfo, :QWORD,:QWORD
PROTO64 external,GodotFailGetCPInfoExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCalendarInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCharABCWidthsFloatW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCharABCWidthsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCharWidth32W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCharWidthFloatW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCharWidthW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCharacterPlacementW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetClassInfoExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetClassInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetClassLongW, :QWORD,:QWORD
PROTO64 external,GodotFailGetClassNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetClipboardData, :QWORD
PROTO64 external,GodotFailGetClipboardFormatNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetComputerNameW, :QWORD,:QWORD
PROTO64 external,GodotFailGetConsoleTitleW, :QWORD,:QWORD
PROTO64 external,GodotFailGetCurrencyFormatW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetCurrentDirectoryW, :QWORD,:QWORD
PROTO64 external,GodotFailGetCurrentHwProfileW, :QWORD
PROTO64 external,GodotFailGetDateFormatW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetDefaultCommConfigW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetDiskFreeSpaceExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetDiskFreeSpaceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetDlgItemTextW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetDriveTypeW, :QWORD
PROTO64 external,GodotFailGetEnhMetaFileDescriptionW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetEnhMetaFileW, :QWORD
PROTO64 external,GodotFailGetEnvironmentStringsW, 
PROTO64 external,GodotFailGetEnvironmentVariableW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetFileAttributesExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetFileAttributesW, :QWORD
PROTO64 external,GodotFailGetFileTitleW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetFileVersionInfoSizeW, :QWORD,:QWORD
PROTO64 external,GodotFailGetFileVersionInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetFullPathNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetGlyphOutlineW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetICMProfileW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetJobW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetKerningPairsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetKeyNameTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetKeyboardLayoutNameW, :QWORD
PROTO64 external,GodotFailGetLocaleInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetLogColorSpaceW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetLogicalDriveStringsW, :QWORD,:QWORD
PROTO64 external,GodotFailGetLongPathNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetMenuItemInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetMenuStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetMetaFileW, :QWORD
PROTO64 external,GodotFailGetModuleFileNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetModuleHandleW, :QWORD
PROTO64 external,GodotFailGetMonitorInfoW, :QWORD,:QWORD
PROTO64 external,GodotFailGetNamedPipeHandleStateW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetNumberFormatW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetObjectW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetOpenFileNamePreviewW, :QWORD
PROTO64 external,GodotFailGetOpenFileNameW, :QWORD
PROTO64 external,GodotFailGetOutlineTextMetricsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrintProcessorDirectoryW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrinterDataW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrinterDriverDirectoryW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrinterDriverW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrinterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrivateProfileIntW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrivateProfileSectionNamesW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrivateProfileSectionW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrivateProfileStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPrivateProfileStructW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetProcAddress, :QWORD,:QWORD
PROTO64 external,GodotFailGetProfileIntW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetProfileSectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetProfileStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetPropA, :QWORD,:QWORD
PROTO64 external,GodotFailGetPropW, :QWORD,:QWORD
PROTO64 external,GodotFailGetRoleTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetSaveFileNamePreviewW, :QWORD
PROTO64 external,GodotFailGetSaveFileNameW, :QWORD
PROTO64 external,GodotFailGetShortPathNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetStartupInfoW, :QWORD
PROTO64 external,GodotFailGetStateTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetStringTypeExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetStringTypeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetSystemDirectoryW, :QWORD,:QWORD
PROTO64 external,GodotFailGetSystemWindowsDirectoryW, :QWORD,:QWORD
PROTO64 external,GodotFailGetTabbedTextExtentW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetTempFileNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetTempPathW, :QWORD,:QWORD
PROTO64 external,GodotFailGetTextExtentExPointW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetTextExtentPoint32W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetTextExtentPointW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetTextFaceW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetTextMetricsW, :QWORD,:QWORD
PROTO64 external,GodotFailGetTimeFormatW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetUserNameW, :QWORD,:QWORD
PROTO64 external,GodotFailGetVersionExW, :QWORD
PROTO64 external,GodotFailGetVolumeInformationW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetWindowLongA, :QWORD,:QWORD
PROTO64 external,GodotFailGetWindowLongW, :QWORD,:QWORD
PROTO64 external,GodotFailGetWindowModuleFileNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetWindowTextLengthW, :QWORD
PROTO64 external,GodotFailGetWindowTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGetWindowsDirectoryW, :QWORD,:QWORD
PROTO64 external,GodotFailGlobalAddAtomW, :QWORD
PROTO64 external,GodotFailGlobalFindAtomW, :QWORD
PROTO64 external,GodotFailGlobalGetAtomNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailGrayStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailInitSecurityInterfaceW, 
PROTO64 external,GodotFailInitializeSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailInsertMenuItemW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailInsertMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailIsBadStringPtrW, :QWORD,:QWORD
PROTO64 external,GodotFailIsCharAlphaNumericW, :QWORD
PROTO64 external,GodotFailIsCharAlphaW, :QWORD
PROTO64 external,GodotFailIsCharLowerW, :QWORD
PROTO64 external,GodotFailIsCharUpperW, :QWORD
PROTO64 external,GodotFailIsClipboardFormatAvailable, :QWORD
PROTO64 external,GodotFailIsDestinationReachableW, :QWORD,:QWORD
PROTO64 external,GodotFailIsDialogMessageW, :QWORD,:QWORD
PROTO64 external,GodotFailIsTextUnicode, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailIsValidCodePage, :QWORD
PROTO64 external,GodotFailIsWindowUnicode, :QWORD
PROTO64 external,GodotFailLCMapStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailLoadAcceleratorsW, :QWORD,:QWORD
PROTO64 external,GodotFailLoadBitmapW, :QWORD,:QWORD
PROTO64 external,GodotFailLoadCursorFromFileW, :QWORD
PROTO64 external,GodotFailLoadCursorW, :QWORD,:QWORD
PROTO64 external,GodotFailLoadIconW, :QWORD,:QWORD
PROTO64 external,GodotFailLoadImageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailLoadKeyboardLayoutW, :QWORD,:QWORD
PROTO64 external,GodotFailLoadLibraryExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailLoadLibraryW, :QWORD
PROTO64 external,GodotFailLoadMenuIndirectW, :QWORD
PROTO64 external,GodotFailLoadMenuW, :QWORD,:QWORD
PROTO64 external,GodotFailLoadStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailMapVirtualKeyExW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailMapVirtualKeyW, :QWORD,:QWORD
PROTO64 external,GodotFailMessageBoxExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailMessageBoxIndirectW, :QWORD
PROTO64 external,GodotFailMessageBoxW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailModifyMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailMoveFileW, :QWORD,:QWORD
PROTO64 external,GodotFailMultiByteToWideChar, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailMultinetGetConnectionPerformanceW, :QWORD,:QWORD
PROTO64 external,GodotFailOemToCharBuffW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOemToCharW, :QWORD,:QWORD
PROTO64 external,GodotFailOleUIAddVerbMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOleUIBusyW, :QWORD
PROTO64 external,GodotFailOleUIChangeIconW, :QWORD
PROTO64 external,GodotFailOleUIChangeSourceW, :QWORD
PROTO64 external,GodotFailOleUIConvertW, :QWORD
PROTO64 external,GodotFailOleUIEditLinksW, :QWORD
PROTO64 external,GodotFailOleUIInsertObjectW, :QWORD
PROTO64 external,GodotFailOleUIObjectPropertiesW, :QWORD
PROTO64 external,GodotFailOleUIPasteSpecialW, :QWORD
PROTO64 external,GodotFailOleUIUpdateLinksW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOpenEventW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOpenFileMappingW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOpenMutexW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOpenPrinterW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOpenSemaphoreW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOpenWaitableTimerW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailOutputDebugStringW, :QWORD
PROTO64 external,GodotFailPageSetupDlgW, :QWORD
PROTO64 external,GodotFailPeekConsoleInputW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailPeekMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailPlaySoundW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailPolyTextOutW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailPostMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailPostThreadMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailPrintDlgW, :QWORD
PROTO64 external,GodotFailQueryContextAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailQueryCredentialsAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailQueryDosDeviceW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailQuerySecurityPackageInfoW, :QWORD,:QWORD
PROTO64 external,GodotFailRasConnectionNotificationW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasCreatePhonebookEntryW, :QWORD,:QWORD
PROTO64 external,GodotFailRasDeleteEntryW, :QWORD,:QWORD
PROTO64 external,GodotFailRasDeleteSubEntryW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasDialW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasEditPhonebookEntryW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasEnumConnectionsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasEnumDevicesW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasEnumEntriesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasGetConnectStatusW, :QWORD,:QWORD
PROTO64 external,GodotFailRasGetEntryDialParamsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasGetEntryPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasGetErrorStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasGetProjectionInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasHangUpW, :QWORD
PROTO64 external,GodotFailRasRenameEntryW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasSetEntryDialParamsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasSetEntryPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasSetSubEntryPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRasValidateEntryNameW, :QWORD,:QWORD
PROTO64 external,GodotFailReadConsoleInputW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailReadConsoleOutputCharacterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailReadConsoleOutputW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailReadConsoleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegConnectRegistryW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegCreateKeyExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegCreateKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegDeleteKeyW, :QWORD,:QWORD
PROTO64 external,GodotFailRegDeleteValueW, :QWORD,:QWORD
PROTO64 external,GodotFailRegEnumKeyExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegEnumKeyW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegEnumValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegLoadKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegOpenKeyExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegOpenKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegQueryInfoKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegQueryMultipleValuesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegQueryValueExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegQueryValueW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegReplaceKeyW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegSaveKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegSetValueExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegSetValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegUnLoadKeyW, :QWORD,:QWORD
PROTO64 external,GodotFailRegisterClassExW, :QWORD
PROTO64 external,GodotFailRegisterClassW, :QWORD
PROTO64 external,GodotFailRegisterClipboardFormatW, :QWORD
PROTO64 external,GodotFailRegisterDeviceNotificationW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailRegisterWindowMessageW, :QWORD
PROTO64 external,GodotFailRemoveDirectoryW, :QWORD
PROTO64 external,GodotFailRemoveFontResourceW, :QWORD
PROTO64 external,GodotFailRemovePropA, :QWORD,:QWORD
PROTO64 external,GodotFailRemovePropW, :QWORD,:QWORD
PROTO64 external,GodotFailReplaceTextW, :QWORD
PROTO64 external,GodotFailResetDCW, :QWORD,:QWORD
PROTO64 external,GodotFailResetPrinterW, :QWORD,:QWORD
PROTO64 external,GodotFailSHBrowseForFolderW, :QWORD
PROTO64 external,GodotFailSHChangeNotify, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSHFileOperationW, :QWORD
PROTO64 external,GodotFailSHGetFileInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSHGetNewLinkInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSHGetPathFromIDListW, :QWORD,:QWORD
PROTO64 external,GodotFailScrollConsoleScreenBufferW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSearchPathW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSendDlgItemMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSendMessageCallbackW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSendMessageTimeoutW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSendMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSendNotifyMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetCalendarInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetClassLongW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetComputerNameW, :QWORD
PROTO64 external,GodotFailSetConsoleTitleW, :QWORD
PROTO64 external,GodotFailSetCurrentDirectoryW, :QWORD
PROTO64 external,GodotFailSetDefaultCommConfigW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetDlgItemTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetEnvironmentVariableW, :QWORD,:QWORD
PROTO64 external,GodotFailSetFileAttributesW, :QWORD,:QWORD
PROTO64 external,GodotFailSetICMProfileW, :QWORD,:QWORD
PROTO64 external,GodotFailSetJobW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetLocaleInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetMenuItemInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetPrinterDataW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetPrinterW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetPropA, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetPropW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetVolumeLabelW, :QWORD,:QWORD
PROTO64 external,GodotFailSetWindowLongA, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetWindowLongW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetWindowTextW, :QWORD,:QWORD
PROTO64 external,GodotFailSetWindowsHookExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailSetWindowsHookW, :QWORD,:QWORD
PROTO64 external,GodotFailSetupDiGetClassDevsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailShellAboutW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailShellExecuteExW, :QWORD
PROTO64 external,GodotFailShellExecuteW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailShell_NotifyIconW, :QWORD,:QWORD
PROTO64 external,GodotFailStartDocPrinterW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailStartDocW, :QWORD,:QWORD
PROTO64 external,GodotFailSystemParametersInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailTabbedTextOutW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailTextOutW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailTranslateAcceleratorW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailUnregisterClassW, :QWORD,:QWORD
PROTO64 external,GodotFailUpdateResourceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailUpdateResourceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailVerFindFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailVerInstallFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailVerLanguageNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailVerQueryValueW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailVkKeyScanExW, :QWORD,:QWORD
PROTO64 external,GodotFailVkKeyScanW, :QWORD
PROTO64 external,GodotFailWNetAddConnection2W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetAddConnection3W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetAddConnectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetCancelConnection2W, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetCancelConnectionW, :QWORD,:QWORD
PROTO64 external,GodotFailWNetConnectionDialog1W, :QWORD
PROTO64 external,GodotFailWNetDisconnectDialog1W, :QWORD
PROTO64 external,GodotFailWNetEnumResourceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetGetConnectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetGetLastErrorW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetGetNetworkInformationW, :QWORD,:QWORD
PROTO64 external,GodotFailWNetGetProviderNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetGetResourceInformationW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetGetResourceParentW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetGetUniversalNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetGetUserW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetOpenEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWNetUseConnectionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWaitNamedPipeW, :QWORD,:QWORD
PROTO64 external,GodotFailWideCharToMultiByte, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWinHelpW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWriteConsoleInputW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWriteConsoleOutputCharacterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWriteConsoleOutputW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWriteConsoleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWritePrivateProfileSectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWritePrivateProfileStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWritePrivateProfileStructW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailWriteProfileSectionW, :QWORD,:QWORD
PROTO64 external,GodotFailWriteProfileStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailauxGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailcapCreateCaptureWindowW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailcapGetDriverDescriptionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailjoyGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFaillstrcatW, :QWORD,:QWORD
PROTO64 external,GodotFaillstrcmpW, :QWORD,:QWORD
PROTO64 external,GodotFaillstrcmpiW, :QWORD,:QWORD
PROTO64 external,GodotFaillstrcpyW, :QWORD,:QWORD
PROTO64 external,GodotFaillstrcpynW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFaillstrlenW, :QWORD
PROTO64 external,GodotFailmciGetDeviceIDW, :QWORD
PROTO64 external,GodotFailmciGetErrorStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmciSendCommandW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmciSendStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmidiInGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmidiInGetErrorTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmidiOutGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmidiOutGetErrorTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmixerGetControlDetailsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmixerGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmixerGetLineControlsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmixerGetLineInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmmioInstallIOProcW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmmioOpenW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmmioRenameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailmmioStringToFOURCCW, :QWORD,:QWORD
PROTO64 external,GodotFailsndPlaySoundW, :QWORD,:QWORD
PROTO64 external,GodotFailwaveInGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailwaveInGetErrorTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailwaveOutGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailwaveOutGetErrorTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,GodotFailwvsprintfW, :QWORD,:QWORD,:QWORD
PROTO64 external,GrayStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImageEntryToDataC, :QWORD,:QWORD,:QWORD
PROTO64 external,InitSecurityInterfaceW, 
PROTO64 external,InitializeSecurityContextW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InsertMenuItemW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InsertMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IsBadStringPtrW, :QWORD,:QWORD
PROTO64 external,IsCharAlphaNumericW, :QWORD
PROTO64 external,IsCharAlphaW, :QWORD
PROTO64 external,IsCharLowerW, :QWORD
PROTO64 external,IsCharUpperW, :QWORD
PROTO64 external,IsClipboardFormatAvailable, :QWORD
PROTO64 external,IsDestinationReachableW, :QWORD,:QWORD
PROTO64 external,IsDialogMessageW, :QWORD,:QWORD
PROTO64 external,IsTextUnicode, :QWORD,:QWORD,:QWORD
PROTO64 external,IsValidCodePage, :QWORD
PROTO64 external,IsWindowUnicode, :QWORD
PROTO64 external,LCMapStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LoadAcceleratorsW, :QWORD,:QWORD
PROTO64 external,LoadBitmapW, :QWORD,:QWORD
PROTO64 external,LoadCursorFromFileW, :QWORD
PROTO64 external,LoadCursorW, :QWORD,:QWORD
PROTO64 external,LoadGodot, 
PROTO64 external,LoadIconW, :QWORD,:QWORD
PROTO64 external,LoadImageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LoadKeyboardLayoutW, :QWORD,:QWORD
PROTO64 external,LoadLibraryExW, :QWORD,:QWORD,:QWORD
PROTO64 external,LoadLibraryW, :QWORD
PROTO64 external,LoadMenuIndirectW, :QWORD
PROTO64 external,LoadMenuW, :QWORD,:QWORD
PROTO64 external,LoadStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MCIWndCreateW, :QWORD
PROTO64 external,MapVirtualKeyExW, :QWORD,:QWORD,:QWORD
PROTO64 external,MapVirtualKeyW, :QWORD,:QWORD
PROTO64 external,MessageBoxExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MessageBoxIndirectW, :QWORD
PROTO64 external,MessageBoxW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ModifyMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MoveFileW, :QWORD,:QWORD
PROTO64 external,MultiByteToWideChar, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MultinetGetConnectionPerformanceW, :QWORD,:QWORD
PROTO64 external,OemToCharBuffW, :QWORD,:QWORD,:QWORD
PROTO64 external,OemToCharW, :QWORD,:QWORD
PROTO64 external,OleUIAddVerbMenuW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OleUIBusyW, :QWORD
PROTO64 external,OleUIChangeIconW, :QWORD
PROTO64 external,OleUIChangeSourceW, :QWORD
PROTO64 external,OleUIConvertW, :QWORD
PROTO64 external,OleUIEditLinksW, :QWORD
PROTO64 external,OleUIInsertObjectW, :QWORD
PROTO64 external,OleUIObjectPropertiesW, :QWORD
PROTO64 external,OleUIPasteSpecialW, :QWORD
PROTO64 external,OleUIPromptUserW, :QWORD,:QWORD
PROTO64 external,OleUIUpdateLinksW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,OpenEventW, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenFileMappingW, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenMutexW, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenPrinterW, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenSemaphoreW, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenWaitableTimerW, :QWORD,:QWORD,:QWORD
PROTO64 external,OutputDebugStringW, :QWORD
PROTO64 external,PageSetupDlgW, :QWORD
PROTO64 external,PeekConsoleInputW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PeekMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PlaySoundW, :QWORD,:QWORD,:QWORD
PROTO64 external,PolyTextOutW, :QWORD,:QWORD,:QWORD
PROTO64 external,PostMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PostThreadMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PrintDlgW, :QWORD
PROTO64 external,QueryContextAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryCredentialsAttributesW, :QWORD,:QWORD,:QWORD
PROTO64 external,QueryDosDeviceW, :QWORD,:QWORD,:QWORD
PROTO64 external,QuerySecurityPackageInfoW, :QWORD,:QWORD
PROTO64 external,RasConnectionNotificationW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasCreatePhonebookEntryW, :QWORD,:QWORD
PROTO64 external,RasDeleteEntryW, :QWORD,:QWORD
PROTO64 external,RasDeleteSubEntryW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasDialW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasEditPhonebookEntryW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasEnumConnectionsW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasEnumDevicesW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasEnumEntriesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasGetConnectStatusW, :QWORD,:QWORD
PROTO64 external,RasGetEntryDialParamsW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasGetEntryPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasGetErrorStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasGetProjectionInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasHangUpW, :QWORD
PROTO64 external,RasRenameEntryW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasSetEntryDialParamsW, :QWORD,:QWORD,:QWORD
PROTO64 external,RasSetEntryPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasSetSubEntryPropertiesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RasValidateEntryNameW, :QWORD,:QWORD
PROTO64 external,ReadConsoleInputW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadConsoleOutputCharacterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadConsoleOutputW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReadConsoleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegConnectRegistryW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegCreateKeyExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegCreateKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegDeleteKeyW, :QWORD,:QWORD
PROTO64 external,RegDeleteValueW, :QWORD,:QWORD
PROTO64 external,RegEnumKeyExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegEnumKeyW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegEnumValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegLoadKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegOpenKeyExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegOpenKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegQueryInfoKeyW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegQueryMultipleValuesW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegQueryValueExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegQueryValueW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegReplaceKeyW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegSaveKeyW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegSetValueExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegSetValueW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegUnLoadKeyW, :QWORD,:QWORD
PROTO64 external,RegisterClassExW, :QWORD
PROTO64 external,RegisterClassW, :QWORD
PROTO64 external,RegisterClipboardFormatW, :QWORD
PROTO64 external,RegisterDeviceNotificationW, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterWindowMessageW, :QWORD
PROTO64 external,RemoveDirectoryW, :QWORD
PROTO64 external,RemoveFontResourceW, :QWORD
PROTO64 external,RemovePropA, :QWORD,:QWORD
PROTO64 external,RemovePropW, :QWORD,:QWORD
PROTO64 external,ReplaceTextW, :QWORD
PROTO64 external,ResetDCW, :QWORD,:QWORD
PROTO64 external,ResetPrinterW, :QWORD,:QWORD
PROTO64 external,ResolveThunk, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHBrowseForFolderW, :QWORD
PROTO64 external,SHChangeNotify, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHFileOperationW, :QWORD
PROTO64 external,SHGetFileInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHGetNewLinkInfoW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHGetPathFromIDListW, :QWORD,:QWORD
PROTO64 external,ScrollConsoleScreenBufferW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SearchPathW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SendDlgItemMessageW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SendMessageCallbackW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SendMessageTimeoutW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SendMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SendNotifyMessageW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetCalendarInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetClassLongW, :QWORD,:QWORD,:QWORD
PROTO64 external,SetComputerNameW, :QWORD
PROTO64 external,SetConsoleTitleW, :QWORD
PROTO64 external,SetCurrentDirectoryW, :QWORD
PROTO64 external,SetDefaultCommConfigW, :QWORD,:QWORD,:QWORD
PROTO64 external,SetDlgItemTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,SetEnvironmentVariableW, :QWORD,:QWORD
PROTO64 external,SetFileAttributesW, :QWORD,:QWORD
PROTO64 external,SetICMProfileW, :QWORD,:QWORD
PROTO64 external,SetJobW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetLocaleInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,SetMenuItemInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetPrinterDataW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetPrinterW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetPropA, :QWORD,:QWORD,:QWORD
PROTO64 external,SetPropW, :QWORD,:QWORD,:QWORD
PROTO64 external,SetVolumeLabelW, :QWORD,:QWORD
PROTO64 external,SetWindowLongA, :QWORD,:QWORD,:QWORD
PROTO64 external,SetWindowLongW, :QWORD,:QWORD,:QWORD
PROTO64 external,SetWindowTextW, :QWORD,:QWORD
PROTO64 external,SetWindowsHookExW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SetWindowsHookW, :QWORD,:QWORD
PROTO64 external,SetupDiGetClassDevsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ShellAboutW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ShellExecuteExW, :QWORD
PROTO64 external,ShellExecuteW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Shell_NotifyIconW, :QWORD,:QWORD
PROTO64 external,StartDocPrinterW, :QWORD,:QWORD,:QWORD
PROTO64 external,StartDocW, :QWORD,:QWORD
PROTO64 external,SystemParametersInfoW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TabbedTextOutW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TextOutW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TranslateAcceleratorW, :QWORD,:QWORD,:QWORD
PROTO64 external,UnregisterClassW, :QWORD,:QWORD
PROTO64 external,UpdateICMRegKeyW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UpdateResourceA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UpdateResourceW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerFindFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerInstallFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerLanguageNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,VerQueryValueW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VkKeyScanExW, :QWORD,:QWORD
PROTO64 external,VkKeyScanW, :QWORD
PROTO64 external,WNetAddConnection2W, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetAddConnection3W, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetAddConnectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetCancelConnection2W, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetCancelConnectionW, :QWORD,:QWORD
PROTO64 external,WNetConnectionDialog1W, :QWORD
PROTO64 external,WNetDisconnectDialog1W, :QWORD
PROTO64 external,WNetEnumResourceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetConnectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetLastErrorW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetNetworkInformationW, :QWORD,:QWORD
PROTO64 external,WNetGetProviderNameW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetResourceInformationW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetResourceParentW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetUniversalNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetGetUserW, :QWORD,:QWORD,:QWORD
PROTO64 external,WNetOpenEnumW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WNetUseConnectionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WaitNamedPipeW, :QWORD,:QWORD
PROTO64 external,WideCharToMultiByte, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WinHelpW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteConsoleInputW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteConsoleOutputCharacterW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteConsoleOutputW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteConsoleW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WritePrivateProfileSectionW, :QWORD,:QWORD,:QWORD
PROTO64 external,WritePrivateProfileStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WritePrivateProfileStructW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteProfileSectionW, :QWORD,:QWORD
PROTO64 external,WriteProfileStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,_InlineInterlockedExchangePointer, :QWORD,:QWORD
PROTO64 external,__FreeAllLibrariesInMsluLoader, 
PROTO64 external,advapi32_CryptAcquireContextW_Thunk, 
PROTO64 external,advapi32_CryptEnumProviderTypesW_Thunk, 
PROTO64 external,advapi32_CryptEnumProvidersW_Thunk, 
PROTO64 external,advapi32_CryptGetDefaultProviderW_Thunk, 
PROTO64 external,advapi32_CryptSetProviderExW_Thunk, 
PROTO64 external,advapi32_CryptSetProviderW_Thunk, 
PROTO64 external,advapi32_CryptSignHashW_Thunk, 
PROTO64 external,advapi32_CryptVerifySignatureW_Thunk, 
PROTO64 external,advapi32_GetCurrentHwProfileW_Thunk, 
PROTO64 external,advapi32_GetUserNameW_Thunk, 
PROTO64 external,advapi32_IsTextUnicode_Thunk, 
PROTO64 external,advapi32_RegConnectRegistryW_Thunk, 
PROTO64 external,advapi32_RegCreateKeyExW_Thunk, 
PROTO64 external,advapi32_RegCreateKeyW_Thunk, 
PROTO64 external,advapi32_RegDeleteKeyW_Thunk, 
PROTO64 external,advapi32_RegDeleteValueW_Thunk, 
PROTO64 external,advapi32_RegEnumKeyExW_Thunk, 
PROTO64 external,advapi32_RegEnumKeyW_Thunk, 
PROTO64 external,advapi32_RegEnumValueW_Thunk, 
PROTO64 external,advapi32_RegLoadKeyW_Thunk, 
PROTO64 external,advapi32_RegOpenKeyExW_Thunk, 
PROTO64 external,advapi32_RegOpenKeyW_Thunk, 
PROTO64 external,advapi32_RegQueryInfoKeyW_Thunk, 
PROTO64 external,advapi32_RegQueryMultipleValuesW_Thunk, 
PROTO64 external,advapi32_RegQueryValueExW_Thunk, 
PROTO64 external,advapi32_RegQueryValueW_Thunk, 
PROTO64 external,advapi32_RegReplaceKeyW_Thunk, 
PROTO64 external,advapi32_RegSaveKeyW_Thunk, 
PROTO64 external,advapi32_RegSetValueExW_Thunk, 
PROTO64 external,advapi32_RegSetValueW_Thunk, 
PROTO64 external,advapi32_RegUnLoadKeyW_Thunk, 
PROTO64 external,auxGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,avicap32_capCreateCaptureWindowW_Thunk, 
PROTO64 external,avicap32_capGetDriverDescriptionW_Thunk, 
PROTO64 external,capCreateCaptureWindowW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,capGetDriverDescriptionW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,comdlg32_ChooseColorW_Thunk, 
PROTO64 external,comdlg32_ChooseFontW_Thunk, 
PROTO64 external,comdlg32_FindTextW_Thunk, 
PROTO64 external,comdlg32_GetFileTitleW_Thunk, 
PROTO64 external,comdlg32_GetOpenFileNameW_Thunk, 
PROTO64 external,comdlg32_GetSaveFileNameW_Thunk, 
PROTO64 external,comdlg32_PageSetupDlgW_Thunk, 
PROTO64 external,comdlg32_PrintDlgW_Thunk, 
PROTO64 external,comdlg32_ReplaceTextW_Thunk, 
PROTO64 external,gdi32_AddFontResourceW_Thunk, 
PROTO64 external,gdi32_CopyEnhMetaFileW_Thunk, 
PROTO64 external,gdi32_CopyMetaFileW_Thunk, 
PROTO64 external,gdi32_CreateColorSpaceW_Thunk, 
PROTO64 external,gdi32_CreateDCW_Thunk, 
PROTO64 external,gdi32_CreateEnhMetaFileW_Thunk, 
PROTO64 external,gdi32_CreateFontIndirectW_Thunk, 
PROTO64 external,gdi32_CreateFontW_Thunk, 
PROTO64 external,gdi32_CreateICW_Thunk, 
PROTO64 external,gdi32_CreateMetaFileW_Thunk, 
PROTO64 external,gdi32_CreateScalableFontResourceW_Thunk, 
PROTO64 external,gdi32_EnumFontFamiliesExW_Thunk, 
PROTO64 external,gdi32_EnumFontFamiliesW_Thunk, 
PROTO64 external,gdi32_EnumFontsW_Thunk, 
PROTO64 external,gdi32_EnumICMProfilesW_Thunk, 
PROTO64 external,gdi32_ExtTextOutW_Thunk, 
PROTO64 external,gdi32_GetCharABCWidthsFloatW_Thunk, 
PROTO64 external,gdi32_GetCharABCWidthsW_Thunk, 
PROTO64 external,gdi32_GetCharWidth32W_Thunk, 
PROTO64 external,gdi32_GetCharWidthFloatW_Thunk, 
PROTO64 external,gdi32_GetCharWidthW_Thunk, 
PROTO64 external,gdi32_GetCharacterPlacementW_Thunk, 
PROTO64 external,gdi32_GetEnhMetaFileDescriptionW_Thunk, 
PROTO64 external,gdi32_GetEnhMetaFileW_Thunk, 
PROTO64 external,gdi32_GetGlyphOutlineW_Thunk, 
PROTO64 external,gdi32_GetICMProfileW_Thunk, 
PROTO64 external,gdi32_GetKerningPairsW_Thunk, 
PROTO64 external,gdi32_GetLogColorSpaceW_Thunk, 
PROTO64 external,gdi32_GetMetaFileW_Thunk, 
PROTO64 external,gdi32_GetObjectW_Thunk, 
PROTO64 external,gdi32_GetOutlineTextMetricsW_Thunk, 
PROTO64 external,gdi32_GetTextExtentExPointW_Thunk, 
PROTO64 external,gdi32_GetTextExtentPoint32W_Thunk, 
PROTO64 external,gdi32_GetTextExtentPointW_Thunk, 
PROTO64 external,gdi32_GetTextFaceW_Thunk, 
PROTO64 external,gdi32_GetTextMetricsW_Thunk, 
PROTO64 external,gdi32_PolyTextOutW_Thunk, 
PROTO64 external,gdi32_RemoveFontResourceW_Thunk, 
PROTO64 external,gdi32_ResetDCW_Thunk, 
PROTO64 external,gdi32_SetICMProfileW_Thunk, 
PROTO64 external,gdi32_StartDocW_Thunk, 
PROTO64 external,gdi32_TextOutW_Thunk, 
PROTO64 external,gdi32_UpdateICMRegKeyW_Thunk, 
PROTO64 external,guard_check_icall_nop, :QWORD
PROTO64 external,joyGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,kernel32_AddAtomW_Thunk, 
PROTO64 external,kernel32_BeginUpdateResourceA_Thunk, 
PROTO64 external,kernel32_BeginUpdateResourceW_Thunk, 
PROTO64 external,kernel32_BuildCommDCBAndTimeoutsW_Thunk, 
PROTO64 external,kernel32_BuildCommDCBW_Thunk, 
PROTO64 external,kernel32_CallNamedPipeW_Thunk, 
PROTO64 external,kernel32_CommConfigDialogW_Thunk, 
PROTO64 external,kernel32_CompareStringW_Thunk, 
PROTO64 external,kernel32_CopyFileExW_Thunk, 
PROTO64 external,kernel32_CopyFileW_Thunk, 
PROTO64 external,kernel32_CreateDirectoryExW_Thunk, 
PROTO64 external,kernel32_CreateDirectoryW_Thunk, 
PROTO64 external,kernel32_CreateEventW_Thunk, 
PROTO64 external,kernel32_CreateFileMappingW_Thunk, 
PROTO64 external,kernel32_CreateFileW_Thunk, 
PROTO64 external,kernel32_CreateMailslotW_Thunk, 
PROTO64 external,kernel32_CreateMutexW_Thunk, 
PROTO64 external,kernel32_CreateNamedPipeW_Thunk, 
PROTO64 external,kernel32_CreateProcessW_Thunk, 
PROTO64 external,kernel32_CreateSemaphoreW_Thunk, 
PROTO64 external,kernel32_CreateWaitableTimerW_Thunk, 
PROTO64 external,kernel32_DeleteFileW_Thunk, 
PROTO64 external,kernel32_EndUpdateResourceA_Thunk, 
PROTO64 external,kernel32_EndUpdateResourceW_Thunk, 
PROTO64 external,kernel32_EnumCalendarInfoExW_Thunk, 
PROTO64 external,kernel32_EnumCalendarInfoW_Thunk, 
PROTO64 external,kernel32_EnumDateFormatsExW_Thunk, 
PROTO64 external,kernel32_EnumDateFormatsW_Thunk, 
PROTO64 external,kernel32_EnumSystemCodePagesW_Thunk, 
PROTO64 external,kernel32_EnumSystemLocalesW_Thunk, 
PROTO64 external,kernel32_EnumTimeFormatsW_Thunk, 
PROTO64 external,kernel32_ExpandEnvironmentStringsW_Thunk, 
PROTO64 external,kernel32_FatalAppExitW_Thunk, 
PROTO64 external,kernel32_FillConsoleOutputCharacterW_Thunk, 
PROTO64 external,kernel32_FindAtomW_Thunk, 
PROTO64 external,kernel32_FindFirstChangeNotificationW_Thunk, 
PROTO64 external,kernel32_FindFirstFileW_Thunk, 
PROTO64 external,kernel32_FindNextFileW_Thunk, 
PROTO64 external,kernel32_FindResourceExW_Thunk, 
PROTO64 external,kernel32_FindResourceW_Thunk, 
PROTO64 external,kernel32_FormatMessageW_Thunk, 
PROTO64 external,kernel32_FreeEnvironmentStringsW_Thunk, 
PROTO64 external,kernel32_GetAtomNameW_Thunk, 
PROTO64 external,kernel32_GetCPInfoExW_Thunk, 
PROTO64 external,kernel32_GetCPInfo_Thunk, 
PROTO64 external,kernel32_GetCalendarInfoW_Thunk, 
PROTO64 external,kernel32_GetComputerNameW_Thunk, 
PROTO64 external,kernel32_GetConsoleTitleW_Thunk, 
PROTO64 external,kernel32_GetCurrencyFormatW_Thunk, 
PROTO64 external,kernel32_GetCurrentDirectoryW_Thunk, 
PROTO64 external,kernel32_GetDateFormatW_Thunk, 
PROTO64 external,kernel32_GetDefaultCommConfigW_Thunk, 
PROTO64 external,kernel32_GetDiskFreeSpaceExW_Thunk, 
PROTO64 external,kernel32_GetDiskFreeSpaceW_Thunk, 
PROTO64 external,kernel32_GetDriveTypeW_Thunk, 
PROTO64 external,kernel32_GetEnvironmentStringsW_Thunk, 
PROTO64 external,kernel32_GetEnvironmentVariableW_Thunk, 
PROTO64 external,kernel32_GetFileAttributesExW_Thunk, 
PROTO64 external,kernel32_GetFileAttributesW_Thunk, 
PROTO64 external,kernel32_GetFullPathNameW_Thunk, 
PROTO64 external,kernel32_GetLocaleInfoW_Thunk, 
PROTO64 external,kernel32_GetLogicalDriveStringsW_Thunk, 
PROTO64 external,kernel32_GetLongPathNameW_Thunk, 
PROTO64 external,kernel32_GetModuleFileNameW_Thunk, 
PROTO64 external,kernel32_GetModuleHandleW_Thunk, 
PROTO64 external,kernel32_GetNamedPipeHandleStateW_Thunk, 
PROTO64 external,kernel32_GetNumberFormatW_Thunk, 
PROTO64 external,kernel32_GetPrivateProfileIntW_Thunk, 
PROTO64 external,kernel32_GetPrivateProfileSectionNamesW_Thunk, 
PROTO64 external,kernel32_GetPrivateProfileSectionW_Thunk, 
PROTO64 external,kernel32_GetPrivateProfileStringW_Thunk, 
PROTO64 external,kernel32_GetPrivateProfileStructW_Thunk, 
PROTO64 external,kernel32_GetProcAddress_Thunk, 
PROTO64 external,kernel32_GetProfileIntW_Thunk, 
PROTO64 external,kernel32_GetProfileSectionW_Thunk, 
PROTO64 external,kernel32_GetProfileStringW_Thunk, 
PROTO64 external,kernel32_GetShortPathNameW_Thunk, 
PROTO64 external,kernel32_GetStartupInfoW_Thunk, 
PROTO64 external,kernel32_GetStringTypeExW_Thunk, 
PROTO64 external,kernel32_GetStringTypeW_Thunk, 
PROTO64 external,kernel32_GetSystemDirectoryW_Thunk, 
PROTO64 external,kernel32_GetSystemWindowsDirectoryW_Thunk, 
PROTO64 external,kernel32_GetTempFileNameW_Thunk, 
PROTO64 external,kernel32_GetTempPathW_Thunk, 
PROTO64 external,kernel32_GetTimeFormatW_Thunk, 
PROTO64 external,kernel32_GetVersionExW_Thunk, 
PROTO64 external,kernel32_GetVolumeInformationW_Thunk, 
PROTO64 external,kernel32_GetWindowsDirectoryW_Thunk, 
PROTO64 external,kernel32_GlobalAddAtomW_Thunk, 
PROTO64 external,kernel32_GlobalFindAtomW_Thunk, 
PROTO64 external,kernel32_GlobalGetAtomNameW_Thunk, 
PROTO64 external,kernel32_IsBadStringPtrW_Thunk, 
PROTO64 external,kernel32_IsValidCodePage_Thunk, 
PROTO64 external,kernel32_LCMapStringW_Thunk, 
PROTO64 external,kernel32_LoadLibraryExW_Thunk, 
PROTO64 external,kernel32_LoadLibraryW_Thunk, 
PROTO64 external,kernel32_MoveFileW_Thunk, 
PROTO64 external,kernel32_MultiByteToWideChar_Thunk, 
PROTO64 external,kernel32_OpenEventW_Thunk, 
PROTO64 external,kernel32_OpenFileMappingW_Thunk, 
PROTO64 external,kernel32_OpenMutexW_Thunk, 
PROTO64 external,kernel32_OpenSemaphoreW_Thunk, 
PROTO64 external,kernel32_OpenWaitableTimerW_Thunk, 
PROTO64 external,kernel32_OutputDebugStringW_Thunk, 
PROTO64 external,kernel32_PeekConsoleInputW_Thunk, 
PROTO64 external,kernel32_QueryDosDeviceW_Thunk, 
PROTO64 external,kernel32_ReadConsoleInputW_Thunk, 
PROTO64 external,kernel32_ReadConsoleOutputCharacterW_Thunk, 
PROTO64 external,kernel32_ReadConsoleOutputW_Thunk, 
PROTO64 external,kernel32_ReadConsoleW_Thunk, 
PROTO64 external,kernel32_RemoveDirectoryW_Thunk, 
PROTO64 external,kernel32_ScrollConsoleScreenBufferW_Thunk, 
PROTO64 external,kernel32_SearchPathW_Thunk, 
PROTO64 external,kernel32_SetCalendarInfoW_Thunk, 
PROTO64 external,kernel32_SetComputerNameW_Thunk, 
PROTO64 external,kernel32_SetConsoleTitleW_Thunk, 
PROTO64 external,kernel32_SetCurrentDirectoryW_Thunk, 
PROTO64 external,kernel32_SetDefaultCommConfigW_Thunk, 
PROTO64 external,kernel32_SetEnvironmentVariableW_Thunk, 
PROTO64 external,kernel32_SetFileAttributesW_Thunk, 
PROTO64 external,kernel32_SetLocaleInfoW_Thunk, 
PROTO64 external,kernel32_SetVolumeLabelW_Thunk, 
PROTO64 external,kernel32_UpdateResourceA_Thunk, 
PROTO64 external,kernel32_UpdateResourceW_Thunk, 
PROTO64 external,kernel32_VerLanguageNameW_Thunk, 
PROTO64 external,kernel32_WaitNamedPipeW_Thunk, 
PROTO64 external,kernel32_WideCharToMultiByte_Thunk, 
PROTO64 external,kernel32_WriteConsoleInputW_Thunk, 
PROTO64 external,kernel32_WriteConsoleOutputCharacterW_Thunk, 
PROTO64 external,kernel32_WriteConsoleOutputW_Thunk, 
PROTO64 external,kernel32_WriteConsoleW_Thunk, 
PROTO64 external,kernel32_WritePrivateProfileSectionW_Thunk, 
PROTO64 external,kernel32_WritePrivateProfileStringW_Thunk, 
PROTO64 external,kernel32_WritePrivateProfileStructW_Thunk, 
PROTO64 external,kernel32_WriteProfileSectionW_Thunk, 
PROTO64 external,kernel32_WriteProfileStringW_Thunk, 
PROTO64 external,kernel32_lstrcatW_Thunk, 
PROTO64 external,kernel32_lstrcmpW_Thunk, 
PROTO64 external,kernel32_lstrcmpiW_Thunk, 
PROTO64 external,kernel32_lstrcpyW_Thunk, 
PROTO64 external,kernel32_lstrcpynW_Thunk, 
PROTO64 external,kernel32_lstrlenW_Thunk, 
PROTO64 external,lstrcatW, :QWORD,:QWORD
PROTO64 external,lstrcmpW, :QWORD,:QWORD
PROTO64 external,lstrcmpiW, :QWORD,:QWORD
PROTO64 external,lstrcpyW, :QWORD,:QWORD
PROTO64 external,lstrcpynW, :QWORD,:QWORD,:QWORD
PROTO64 external,lstrlenW, :QWORD
PROTO64 external,mciGetDeviceIDW, :QWORD
PROTO64 external,mciGetErrorStringW, :QWORD,:QWORD,:QWORD
PROTO64 external,mciSendCommandW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,mciSendStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,midiInGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,midiInGetErrorTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,midiOutGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,mixerGetControlDetailsW, :QWORD,:QWORD,:QWORD
PROTO64 external,mixerGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,mixerGetLineControlsW, :QWORD,:QWORD,:QWORD
PROTO64 external,mixerGetLineInfoW, :QWORD,:QWORD,:QWORD
PROTO64 external,mmioInstallIOProcW, :QWORD,:QWORD,:QWORD
PROTO64 external,mmioOpenW, :QWORD,:QWORD,:QWORD
PROTO64 external,mmioRenameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,mmioStringToFOURCC, :QWORD,:QWORD
PROTO64 external,mpr_MultinetGetConnectionPerformanceW_Thunk, 
PROTO64 external,mpr_WNetAddConnection2W_Thunk, 
PROTO64 external,mpr_WNetAddConnection3W_Thunk, 
PROTO64 external,mpr_WNetAddConnectionW_Thunk, 
PROTO64 external,mpr_WNetCancelConnection2W_Thunk, 
PROTO64 external,mpr_WNetCancelConnectionW_Thunk, 
PROTO64 external,mpr_WNetConnectionDialog1W_Thunk, 
PROTO64 external,mpr_WNetDisconnectDialog1W_Thunk, 
PROTO64 external,mpr_WNetEnumResourceW_Thunk, 
PROTO64 external,mpr_WNetGetConnectionW_Thunk, 
PROTO64 external,mpr_WNetGetLastErrorW_Thunk, 
PROTO64 external,mpr_WNetGetNetworkInformationW_Thunk, 
PROTO64 external,mpr_WNetGetProviderNameW_Thunk, 
PROTO64 external,mpr_WNetGetResourceInformationW_Thunk, 
PROTO64 external,mpr_WNetGetResourceParentW_Thunk, 
PROTO64 external,mpr_WNetGetUniversalNameW_Thunk, 
PROTO64 external,mpr_WNetGetUserW_Thunk, 
PROTO64 external,mpr_WNetOpenEnumW_Thunk, 
PROTO64 external,mpr_WNetUseConnectionW_Thunk, 
PROTO64 external,msvfw32_GetOpenFileNamePreviewW_Thunk, 
PROTO64 external,msvfw32_GetSaveFileNamePreviewW_Thunk, 
PROTO64 external,msvfw32_MCIWndCreateW_Thunk, 
PROTO64 external,oleacc_CreateStdAccessibleProxyW_Thunk, 
PROTO64 external,oleacc_GetRoleTextW_Thunk, 
PROTO64 external,oleacc_GetStateTextW_Thunk, 
PROTO64 external,oledlg_OleUIAddVerbMenuW_Thunk, 
PROTO64 external,oledlg_OleUIBusyW_Thunk, 
PROTO64 external,oledlg_OleUIChangeIconW_Thunk, 
PROTO64 external,oledlg_OleUIChangeSourceW_Thunk, 
PROTO64 external,oledlg_OleUIConvertW_Thunk, 
PROTO64 external,oledlg_OleUIEditLinksW_Thunk, 
PROTO64 external,oledlg_OleUIInsertObjectW_Thunk, 
PROTO64 external,oledlg_OleUIObjectPropertiesW_Thunk, 
PROTO64 external,oledlg_OleUIPasteSpecialW_Thunk, 
PROTO64 external,oledlg_OleUIPromptUserW_Thunk, 
PROTO64 external,oledlg_OleUIUpdateLinksW_Thunk, 
PROTO64 external,rasapi32_RasConnectionNotificationW_Thunk, 
PROTO64 external,rasapi32_RasCreatePhonebookEntryW_Thunk, 
PROTO64 external,rasapi32_RasDeleteEntryW_Thunk, 
PROTO64 external,rasapi32_RasDeleteSubEntryW_Thunk, 
PROTO64 external,rasapi32_RasDialW_Thunk, 
PROTO64 external,rasapi32_RasEditPhonebookEntryW_Thunk, 
PROTO64 external,rasapi32_RasEnumConnectionsW_Thunk, 
PROTO64 external,rasapi32_RasEnumDevicesW_Thunk, 
PROTO64 external,rasapi32_RasEnumEntriesW_Thunk, 
PROTO64 external,rasapi32_RasGetConnectStatusW_Thunk, 
PROTO64 external,rasapi32_RasGetEntryDialParamsW_Thunk, 
PROTO64 external,rasapi32_RasGetEntryPropertiesW_Thunk, 
PROTO64 external,rasapi32_RasGetErrorStringW_Thunk, 
PROTO64 external,rasapi32_RasGetProjectionInfoW_Thunk, 
PROTO64 external,rasapi32_RasHangUpW_Thunk, 
PROTO64 external,rasapi32_RasRenameEntryW_Thunk, 
PROTO64 external,rasapi32_RasSetEntryDialParamsW_Thunk, 
PROTO64 external,rasapi32_RasSetEntryPropertiesW_Thunk, 
PROTO64 external,rasapi32_RasSetSubEntryPropertiesW_Thunk, 
PROTO64 external,rasapi32_RasValidateEntryNameW_Thunk, 
PROTO64 external,secur32_AcquireCredentialsHandleW_Thunk, 
PROTO64 external,secur32_EnumerateSecurityPackagesW_Thunk, 
PROTO64 external,secur32_FreeContextBuffer_Thunk, 
PROTO64 external,secur32_InitSecurityInterfaceW_Thunk, 
PROTO64 external,secur32_InitializeSecurityContextW_Thunk, 
PROTO64 external,secur32_QueryContextAttributesW_Thunk, 
PROTO64 external,secur32_QueryCredentialsAttributesW_Thunk, 
PROTO64 external,secur32_QuerySecurityPackageInfoW_Thunk, 
PROTO64 external,sensapi_IsDestinationReachableW_Thunk, 
PROTO64 external,setupapi_SetupDiGetClassDevsW_Thunk, 
PROTO64 external,shell32_DragQueryFileW_Thunk, 
PROTO64 external,shell32_ExtractIconExW_Thunk, 
PROTO64 external,shell32_ExtractIconW_Thunk, 
PROTO64 external,shell32_FindExecutableW_Thunk, 
PROTO64 external,shell32_SHBrowseForFolderW_Thunk, 
PROTO64 external,shell32_SHChangeNotify_Thunk, 
PROTO64 external,shell32_SHFileOperationW_Thunk, 
PROTO64 external,shell32_SHGetFileInfoW_Thunk, 
PROTO64 external,shell32_SHGetNewLinkInfoW_Thunk, 
PROTO64 external,shell32_SHGetPathFromIDListW_Thunk, 
PROTO64 external,shell32_ShellAboutW_Thunk, 
PROTO64 external,shell32_ShellExecuteExW_Thunk, 
PROTO64 external,shell32_ShellExecuteW_Thunk, 
PROTO64 external,shell32_Shell_NotifyIconW_Thunk, 
PROTO64 external,sndPlaySoundW, :QWORD,:QWORD
PROTO64 external,strcmpiC, :QWORD,:QWORD
PROTO64 external,strncpyC, :QWORD,:QWORD,:QWORD
PROTO64 external,user32_AppendMenuW_Thunk, 
PROTO64 external,user32_BroadcastSystemMessageW_Thunk, 
PROTO64 external,user32_CallMsgFilterW_Thunk, 
PROTO64 external,user32_CallWindowProcA_Thunk, 
PROTO64 external,user32_CallWindowProcW_Thunk, 
PROTO64 external,user32_ChangeDisplaySettingsExW_Thunk, 
PROTO64 external,user32_ChangeDisplaySettingsW_Thunk, 
PROTO64 external,user32_ChangeMenuW_Thunk, 
PROTO64 external,user32_CharLowerBuffW_Thunk, 
PROTO64 external,user32_CharLowerW_Thunk, 
PROTO64 external,user32_CharNextW_Thunk, 
PROTO64 external,user32_CharPrevW_Thunk, 
PROTO64 external,user32_CharToOemBuffW_Thunk, 
PROTO64 external,user32_CharToOemW_Thunk, 
PROTO64 external,user32_CharUpperBuffW_Thunk, 
PROTO64 external,user32_CharUpperW_Thunk, 
PROTO64 external,user32_CopyAcceleratorTableW_Thunk, 
PROTO64 external,user32_CreateAcceleratorTableW_Thunk, 
PROTO64 external,user32_CreateDialogIndirectParamW_Thunk, 
PROTO64 external,user32_CreateDialogParamW_Thunk, 
PROTO64 external,user32_CreateMDIWindowW_Thunk, 
PROTO64 external,user32_CreateWindowExW_Thunk, 
PROTO64 external,user32_DdeConnectList_Thunk, 
PROTO64 external,user32_DdeConnect_Thunk, 
PROTO64 external,user32_DdeCreateStringHandleW_Thunk, 
PROTO64 external,user32_DdeInitializeW_Thunk, 
PROTO64 external,user32_DdeQueryConvInfo_Thunk, 
PROTO64 external,user32_DdeQueryStringW_Thunk, 
PROTO64 external,user32_DefDlgProcW_Thunk, 
PROTO64 external,user32_DefFrameProcW_Thunk, 
PROTO64 external,user32_DefMDIChildProcW_Thunk, 
PROTO64 external,user32_DefWindowProcW_Thunk, 
PROTO64 external,user32_DialogBoxIndirectParamW_Thunk, 
PROTO64 external,user32_DialogBoxParamW_Thunk, 
PROTO64 external,user32_DispatchMessageW_Thunk, 
PROTO64 external,user32_DlgDirListComboBoxW_Thunk, 
PROTO64 external,user32_DlgDirListW_Thunk, 
PROTO64 external,user32_DlgDirSelectComboBoxExW_Thunk, 
PROTO64 external,user32_DlgDirSelectExW_Thunk, 
PROTO64 external,user32_DrawStateW_Thunk, 
PROTO64 external,user32_DrawTextExW_Thunk, 
PROTO64 external,user32_DrawTextW_Thunk, 
PROTO64 external,user32_EnableWindow_Thunk, 
PROTO64 external,user32_EnumClipboardFormats_Thunk, 
PROTO64 external,user32_EnumDisplayDevicesW_Thunk, 
PROTO64 external,user32_EnumDisplaySettingsExW_Thunk, 
PROTO64 external,user32_EnumDisplaySettingsW_Thunk, 
PROTO64 external,user32_EnumPropsA_Thunk, 
PROTO64 external,user32_EnumPropsExA_Thunk, 
PROTO64 external,user32_EnumPropsExW_Thunk, 
PROTO64 external,user32_EnumPropsW_Thunk, 
PROTO64 external,user32_FindWindowExW_Thunk, 
PROTO64 external,user32_FindWindowW_Thunk, 
PROTO64 external,user32_GetAltTabInfoW_Thunk, 
PROTO64 external,user32_GetClassInfoExW_Thunk, 
PROTO64 external,user32_GetClassInfoW_Thunk, 
PROTO64 external,user32_GetClassLongW_Thunk, 
PROTO64 external,user32_GetClassNameW_Thunk, 
PROTO64 external,user32_GetClipboardData_Thunk, 
PROTO64 external,user32_GetClipboardFormatNameW_Thunk, 
PROTO64 external,user32_GetDlgItemTextW_Thunk, 
PROTO64 external,user32_GetKeyNameTextW_Thunk, 
PROTO64 external,user32_GetKeyboardLayoutNameW_Thunk, 
PROTO64 external,user32_GetMenuItemInfoW_Thunk, 
PROTO64 external,user32_GetMenuStringW_Thunk, 
PROTO64 external,user32_GetMessageW_Thunk, 
PROTO64 external,user32_GetMonitorInfoW_Thunk, 
PROTO64 external,user32_GetPropA_Thunk, 
PROTO64 external,user32_GetPropW_Thunk, 
PROTO64 external,user32_GetTabbedTextExtentW_Thunk, 
PROTO64 external,user32_GetWindowLongA_Thunk, 
PROTO64 external,user32_GetWindowLongW_Thunk, 
PROTO64 external,user32_GetWindowModuleFileNameW_Thunk, 
PROTO64 external,user32_GetWindowTextLengthW_Thunk, 
PROTO64 external,user32_GetWindowTextW_Thunk, 
PROTO64 external,user32_GrayStringW_Thunk, 
PROTO64 external,user32_InsertMenuItemW_Thunk, 
PROTO64 external,user32_InsertMenuW_Thunk, 
PROTO64 external,user32_IsCharAlphaNumericW_Thunk, 
PROTO64 external,user32_IsCharAlphaW_Thunk, 
PROTO64 external,user32_IsCharLowerW_Thunk, 
PROTO64 external,user32_IsCharUpperW_Thunk, 
PROTO64 external,user32_IsClipboardFormatAvailable_Thunk, 
PROTO64 external,user32_IsDialogMessageW_Thunk, 
PROTO64 external,user32_IsWindowUnicode_Thunk, 
PROTO64 external,user32_LoadAcceleratorsW_Thunk, 
PROTO64 external,user32_LoadBitmapW_Thunk, 
PROTO64 external,user32_LoadCursorFromFileW_Thunk, 
PROTO64 external,user32_LoadCursorW_Thunk, 
PROTO64 external,user32_LoadIconW_Thunk, 
PROTO64 external,user32_LoadImageW_Thunk, 
PROTO64 external,user32_LoadKeyboardLayoutW_Thunk, 
PROTO64 external,user32_LoadMenuIndirectW_Thunk, 
PROTO64 external,user32_LoadMenuW_Thunk, 
PROTO64 external,user32_LoadStringW_Thunk, 
PROTO64 external,user32_MapVirtualKeyExW_Thunk, 
PROTO64 external,user32_MapVirtualKeyW_Thunk, 
PROTO64 external,user32_MessageBoxExW_Thunk, 
PROTO64 external,user32_MessageBoxIndirectW_Thunk, 
PROTO64 external,user32_MessageBoxW_Thunk, 
PROTO64 external,user32_ModifyMenuW_Thunk, 
PROTO64 external,user32_OemToCharBuffW_Thunk, 
PROTO64 external,user32_OemToCharW_Thunk, 
PROTO64 external,user32_PeekMessageW_Thunk, 
PROTO64 external,user32_PostMessageW_Thunk, 
PROTO64 external,user32_PostThreadMessageW_Thunk, 
PROTO64 external,user32_RegisterClassExW_Thunk, 
PROTO64 external,user32_RegisterClassW_Thunk, 
PROTO64 external,user32_RegisterClipboardFormatW_Thunk, 
PROTO64 external,user32_RegisterDeviceNotificationW_Thunk, 
PROTO64 external,user32_RegisterWindowMessageW_Thunk, 
PROTO64 external,user32_RemovePropA_Thunk, 
PROTO64 external,user32_RemovePropW_Thunk, 
PROTO64 external,user32_SendDlgItemMessageW_Thunk, 
PROTO64 external,user32_SendMessageCallbackW_Thunk, 
PROTO64 external,user32_SendMessageTimeoutW_Thunk, 
PROTO64 external,user32_SendMessageW_Thunk, 
PROTO64 external,user32_SendNotifyMessageW_Thunk, 
PROTO64 external,user32_SetClassLongW_Thunk, 
PROTO64 external,user32_SetDlgItemTextW_Thunk, 
PROTO64 external,user32_SetMenuItemInfoW_Thunk, 
PROTO64 external,user32_SetPropA_Thunk, 
PROTO64 external,user32_SetPropW_Thunk, 
PROTO64 external,user32_SetWindowLongA_Thunk, 
PROTO64 external,user32_SetWindowLongW_Thunk, 
PROTO64 external,user32_SetWindowTextW_Thunk, 
PROTO64 external,user32_SetWindowsHookExW_Thunk, 
PROTO64 external,user32_SetWindowsHookW_Thunk, 
PROTO64 external,user32_SystemParametersInfoW_Thunk, 
PROTO64 external,user32_TabbedTextOutW_Thunk, 
PROTO64 external,user32_TranslateAcceleratorW_Thunk, 
PROTO64 external,user32_UnregisterClassW_Thunk, 
PROTO64 external,user32_VkKeyScanExW_Thunk, 
PROTO64 external,user32_VkKeyScanW_Thunk, 
PROTO64 external,user32_WinHelpW_Thunk, 
PROTO64 external,user32_wsprintfW_Thunk, 
PROTO64 external,user32_wvsprintfW_Thunk, 
PROTO64 external,version_GetFileVersionInfoSizeW_Thunk, 
PROTO64 external,version_GetFileVersionInfoW_Thunk, 
PROTO64 external,version_VerFindFileW_Thunk, 
PROTO64 external,version_VerInstallFileW_Thunk, 
PROTO64 external,version_VerQueryValueW_Thunk, 
PROTO64 external,waveInGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,waveInGetErrorTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,waveOutGetDevCapsW, :QWORD,:QWORD,:QWORD
PROTO64 external,waveOutGetErrorTextW, :QWORD,:QWORD,:QWORD
PROTO64 external,winmm_PlaySoundW_Thunk, 
PROTO64 external,winmm_auxGetDevCapsW_Thunk, 
PROTO64 external,winmm_joyGetDevCapsW_Thunk, 
PROTO64 external,winmm_mciGetDeviceIDW_Thunk, 
PROTO64 external,winmm_mciGetErrorStringW_Thunk, 
PROTO64 external,winmm_mciSendCommandW_Thunk, 
PROTO64 external,winmm_mciSendStringW_Thunk, 
PROTO64 external,winmm_midiInGetDevCapsW_Thunk, 
PROTO64 external,winmm_midiInGetErrorTextW_Thunk, 
PROTO64 external,winmm_midiOutGetDevCapsW_Thunk, 
PROTO64 external,winmm_mixerGetControlDetailsW_Thunk, 
PROTO64 external,winmm_mixerGetDevCapsW_Thunk, 
PROTO64 external,winmm_mixerGetLineControlsW_Thunk, 
PROTO64 external,winmm_mixerGetLineInfoW_Thunk, 
PROTO64 external,winmm_mmioInstallIOProcW_Thunk, 
PROTO64 external,winmm_mmioOpenW_Thunk, 
PROTO64 external,winmm_mmioRenameW_Thunk, 
PROTO64 external,winmm_mmioStringToFOURCC_Thunk, 
PROTO64 external,winmm_sndPlaySoundW_Thunk, 
PROTO64 external,winmm_waveInGetDevCapsW_Thunk, 
PROTO64 external,winmm_waveInGetErrorTextW_Thunk, 
PROTO64 external,winmm_waveOutGetDevCapsW_Thunk, 
PROTO64 external,winmm_waveOutGetErrorTextW_Thunk, 
PROTO64 external,winspool_AddJobW_Thunk, 
PROTO64 external,winspool_AddPortW_Thunk, 
PROTO64 external,winspool_AddPrintProcessorW_Thunk, 
PROTO64 external,winspool_AddPrintProvidorW_Thunk, 
PROTO64 external,winspool_AddPrinterDriverW_Thunk, 
PROTO64 external,winspool_AddPrinterW_Thunk, 
PROTO64 external,winspool_AdvancedDocumentPropertiesW_Thunk, 
PROTO64 external,winspool_ConfigurePortW_Thunk, 
PROTO64 external,winspool_DeleteMonitorW_Thunk, 
PROTO64 external,winspool_DeletePortW_Thunk, 
PROTO64 external,winspool_DeletePrintProcessorW_Thunk, 
PROTO64 external,winspool_DeletePrintProvidorW_Thunk, 
PROTO64 external,winspool_DeletePrinterDriverW_Thunk, 
PROTO64 external,winspool_DeviceCapabilitiesW_Thunk, 
PROTO64 external,winspool_DocumentPropertiesW_Thunk, 
PROTO64 external,winspool_EnumMonitorsW_Thunk, 
PROTO64 external,winspool_EnumPortsW_Thunk, 
PROTO64 external,winspool_EnumPrintProcessorDatatypesW_Thunk, 
PROTO64 external,winspool_EnumPrintProcessorsW_Thunk, 
PROTO64 external,winspool_EnumPrinterDriversW_Thunk, 
PROTO64 external,winspool_EnumPrintersW_Thunk, 
PROTO64 external,winspool_GetJobW_Thunk, 
PROTO64 external,winspool_GetPrintProcessorDirectoryW_Thunk, 
PROTO64 external,winspool_GetPrinterDataW_Thunk, 
PROTO64 external,winspool_GetPrinterDriverDirectoryW_Thunk, 
PROTO64 external,winspool_GetPrinterDriverW_Thunk, 
PROTO64 external,winspool_GetPrinterW_Thunk, 
PROTO64 external,winspool_OpenPrinterW_Thunk, 
PROTO64 external,winspool_ResetPrinterW_Thunk, 
PROTO64 external,winspool_SetJobW_Thunk, 
PROTO64 external,winspool_SetPrinterDataW_Thunk, 
PROTO64 external,winspool_SetPrinterW_Thunk, 
PROTO64 external,winspool_StartDocPrinterW_Thunk, 
PROTO64 external,wvsprintfW, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file unicows.inc
echo -----------------------------------------
ENDIF

