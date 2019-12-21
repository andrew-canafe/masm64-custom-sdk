IFNDEF WECAPI_INC
WECAPI_INC equ <1>

PROTO64 external,EcClose, :QWORD
PROTO64 external,EcDeleteSubscription, :QWORD,:QWORD
PROTO64 external,EcEnumNextSubscription, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EcGetObjectArrayProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EcGetObjectArraySize, :QWORD,:QWORD
PROTO64 external,EcGetSubscriptionProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EcGetSubscriptionRunTimeStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EcInsertObjectArrayElement, :QWORD,:QWORD
PROTO64 external,EcOpenSubscription, :QWORD,:QWORD,:QWORD
PROTO64 external,EcOpenSubscriptionEnum, :QWORD
PROTO64 external,EcRemoveObjectArrayElement, :QWORD,:QWORD
PROTO64 external,EcRetrySubscription, :QWORD,:QWORD,:QWORD
PROTO64 external,EcSaveSubscription, :QWORD,:QWORD
PROTO64 external,EcSetObjectArrayProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,EcSetSubscriptionProperty, :QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file wecapi.inc
echo -----------------------------------------
ENDIF

