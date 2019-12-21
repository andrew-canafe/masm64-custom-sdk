IFNDEF CRYPTXML_INC
CRYPTXML_INC equ <1>

PROTO64 external,CryptXmlAddObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlClose, :QWORD
PROTO64 external,CryptXmlCreateReference, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlDigestReference, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlEnumAlgorithmInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlFindAlgorithmInfo, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlGetAlgorithmInfo, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlGetDocContext, :QWORD,:QWORD
PROTO64 external,CryptXmlGetReference, :QWORD,:QWORD
PROTO64 external,CryptXmlGetSignature, :QWORD,:QWORD
PROTO64 external,CryptXmlGetStatus, :QWORD,:QWORD
PROTO64 external,CryptXmlGetTransforms, :QWORD
PROTO64 external,CryptXmlImportPublicKey, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlOpenToDecode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlOpenToEncode, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlSetHMACSecret, :QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlSign, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CryptXmlVerifySignature, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file cryptxml.inc
echo -----------------------------------------
ENDIF

