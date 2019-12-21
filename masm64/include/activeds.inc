IFNDEF ACTIVEDS_INC
ACTIVEDS_INC equ <1>

PROTO64 external,ADsBuildEnumerator, :QWORD,:QWORD
PROTO64 external,ADsDecodeBinaryData, :QWORD,:QWORD,:QWORD
PROTO64 external,ADsEncodeBinaryData, :QWORD,:QWORD,:QWORD
PROTO64 external,ADsEnumerateNext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ADsFreeEnumerator, :QWORD
PROTO64 external,ADsGetLastError, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ADsGetObject, :QWORD,:QWORD,:QWORD
PROTO64 external,ADsOpenObject, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ADsSetLastError, :QWORD,:QWORD,:QWORD
PROTO64 external,AdsFreeAdsValues, :QWORD,:QWORD
PROTO64 external,AdsTypeToPropVariant2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,AdsTypeToPropVariant, :QWORD,:QWORD,:QWORD
PROTO64 external,AllocADsMem, :QWORD
PROTO64 external,AllocADsStr, :QWORD
PROTO64 external,BinarySDToSecurityDescriptor, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertSecDescriptorToVariant, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertSecurityDescriptorToSecDes, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ConvertTrusteeToSid, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FreeADsMem, :QWORD
PROTO64 external,FreeADsStr, :QWORD
PROTO64 external,PropVariantToAdsType2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,PropVariantToAdsType, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReallocADsMem, :QWORD,:QWORD,:QWORD
PROTO64 external,ReallocADsStr, :QWORD,:QWORD
PROTO64 external,SecurityDescriptorToBinarySD, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file activeds.inc
echo -----------------------------------------
ENDIF

