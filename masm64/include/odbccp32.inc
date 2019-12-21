IFNDEF ODBCCP32_INC
ODBCCP32_INC equ <1>

PROTO64 external,ODBC___GetSetupProc, :QWORD
PROTO64 external,SQLConfigDataSource, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLConfigDataSourceW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLConfigDriver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLConfigDriverW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLCreateDataSource, :QWORD,:QWORD
PROTO64 external,SQLCreateDataSourceW, :QWORD,:QWORD
PROTO64 external,SQLGetAvailableDrivers, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLGetAvailableDriversW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLGetConfigMode, :QWORD
PROTO64 external,SQLGetInstalledDrivers, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLGetInstalledDriversW, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLGetPrivateProfileString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLGetPrivateProfileStringW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLGetTranslator, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLGetTranslatorW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallDriver, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallDriverEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallDriverExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallDriverManager, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallDriverManagerW, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallDriverW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallODBC, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallODBCW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallTranslator, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallTranslatorEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallTranslatorExW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallTranslatorW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallerError, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLInstallerErrorW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLManageDataSources, :QWORD
PROTO64 external,SQLPostInstallerError, :QWORD,:QWORD
PROTO64 external,SQLPostInstallerErrorW, :QWORD,:QWORD
PROTO64 external,SQLReadFileDSN, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLReadFileDSNW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLRemoveDSNFromIni, :QWORD
PROTO64 external,SQLRemoveDSNFromIniW, :QWORD
PROTO64 external,SQLRemoveDefaultDataSource, 
PROTO64 external,SQLRemoveDriver, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLRemoveDriverManager, :QWORD
PROTO64 external,SQLRemoveDriverW, :QWORD,:QWORD,:QWORD
PROTO64 external,SQLRemoveTranslator, :QWORD,:QWORD
PROTO64 external,SQLRemoveTranslatorW, :QWORD,:QWORD
PROTO64 external,SQLSetConfigMode, :QWORD
PROTO64 external,SQLValidDSN, :QWORD
PROTO64 external,SQLValidDSNW, :QWORD
PROTO64 external,SQLWriteDSNToIni, :QWORD,:QWORD
PROTO64 external,SQLWriteDSNToIniW, :QWORD,:QWORD
PROTO64 external,SQLWriteFileDSN, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLWriteFileDSNW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLWritePrivateProfileString, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SQLWritePrivateProfileStringW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,StringCchCopyW, :QWORD,:QWORD,:QWORD
PROTO64 external,guard_check_icall_nop, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file odbccp32.inc
echo -----------------------------------------
ENDIF

