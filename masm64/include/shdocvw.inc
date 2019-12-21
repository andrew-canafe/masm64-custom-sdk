IFNDEF SHDOCVW_INC
SHDOCVW_INC equ <1>

PROTO64 external,AddUrlToFavorites, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DllRegisterWindowClasses, :QWORD
PROTO64 external,DoAddToFavDlg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DoAddToFavDlgW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DoFileDownload, :QWORD
PROTO64 external,DoFileDownloadEx, :QWORD,:QWORD
PROTO64 external,DoOrganizeFavDlg, :QWORD,:QWORD
PROTO64 external,DoOrganizeFavDlgW, :QWORD,:QWORD
PROTO64 external,DoPrivacyDlg, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkFindFrame, :QWORD,:QWORD
PROTO64 external,HlinkFrameNavigate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkFrameNavigateNHL, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImportPrivacySettings, :QWORD,:QWORD,:QWORD
PROTO64 external,OpenURL, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SHGetIDispatchForFolder, :QWORD,:QWORD
PROTO64 external,SetQueryNetSessionCount, :QWORD
PROTO64 external,SoftwareUpdateMessageBox, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLQualifyA, :QWORD,:QWORD,:QWORD
PROTO64 external,URLQualifyW, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file shdocvw.inc
echo -----------------------------------------
ENDIF

