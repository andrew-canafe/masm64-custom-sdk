IFNDEF CRYPTDLL_INC
CRYPTDLL_INC equ <1>

PROTO64 external,CDBuildIntegrityVect, :QWORD,:QWORD
PROTO64 external,CDBuildVect, :QWORD,:QWORD
PROTO64 external,CDFindCommonCSystem, :QWORD,:QWORD,:QWORD
PROTO64 external,CDFindCommonCSystemWithKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CDGenerateRandomBits, :QWORD,:QWORD
PROTO64 external,CDGetIntegrityVect, :QWORD
PROTO64 external,CDLocateCSystem, :QWORD,:QWORD
PROTO64 external,CDLocateCheckSum, :QWORD,:QWORD
PROTO64 external,CDLocateRng, :QWORD,:QWORD
PROTO64 external,CDRegisterCSystem, :QWORD
PROTO64 external,CDRegisterCheckSum, :QWORD
PROTO64 external,CDRegisterRng, :QWORD
PROTO64 external,HMACwithSHA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,KRBFXCF2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,MD5Final, :QWORD
PROTO64 external,MD5Init, :QWORD
PROTO64 external,MD5Update, :QWORD,:QWORD,:QWORD
PROTO64 external,PBKDF2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,aesCTSDecryptMsg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,aesCTSEncryptMsg, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cryptdll.inc
echo -----------------------------------------
ENDIF

