IFNDEF INFOCARDAPI_INC
INFOCARDAPI_INC equ <1>

PROTO64 external,CloseCryptoHandle, :QWORD
PROTO64 external,Decrypt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Encrypt, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeToken, :QWORD
PROTO64 external,GenerateDerivedKey, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetBrowserToken, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetCryptoTransform, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetKeyedHash, :QWORD,:QWORD
PROTO64 external,GetToken, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HashCore, :QWORD,:QWORD,:QWORD
PROTO64 external,HashFinal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ImportInformationCard, :QWORD
PROTO64 external,ManageCardSpace, 
PROTO64 external,SignHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TransformBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TransformFinalBlock, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,VerifyHash, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file infocardapi.inc
echo -----------------------------------------
ENDIF

