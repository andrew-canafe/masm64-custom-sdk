IFNDEF APPMGMTS_INC
APPMGMTS_INC equ <1>

PROTO64 external,CsCreateClassStore, :QWORD,:QWORD
PROTO64 external,CsEnumApps, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CsGetAppCategories, :QWORD
PROTO64 external,CsGetClassAccess, :QWORD
PROTO64 external,CsGetClassStore, :QWORD,:QWORD
PROTO64 external,CsGetClassStorePath, :QWORD,:QWORD
PROTO64 external,CsRegisterAppCategory, :QWORD
PROTO64 external,CsServerGetClassStore, :QWORD,:QWORD,:QWORD
PROTO64 external,CsUnregisterAppCategory, :QWORD
PROTO64 external,GenerateGroupPolicy, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ProcessGroupPolicyObjectsEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ReleaseAppCategoryInfoList, :QWORD
PROTO64 external,ReleasePackageDetail, :QWORD
PROTO64 external,ReleasePackageInfo, :QWORD
PROTO64 external,ServiceMain, :QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file appmgmts.inc
echo -----------------------------------------
ENDIF

