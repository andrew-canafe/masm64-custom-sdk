IFNDEF MSRATING_INC
MSRATING_INC equ <1>

PROTO64 external,ChangeSupervisorPassword, :QWORD,:QWORD
PROTO64 external,ClickedOnPRF, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ClickedOnRAT, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingAccessDeniedDialog2, :QWORD,:QWORD,:QWORD
PROTO64 external,RatingAccessDeniedDialog2W, :QWORD,:QWORD,:QWORD
PROTO64 external,RatingAccessDeniedDialog, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingAccessDeniedDialogW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingAddPropertyPages, :QWORD,:QWORD,:QWORD
PROTO64 external,RatingAddToApprovedSites, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingCheckUserAccess, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingCheckUserAccessW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingClickedOnPRFInternal, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingClickedOnRATInternal, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingCustomAddRatingHelper, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingCustomAddRatingSystem, :QWORD,:QWORD
PROTO64 external,RatingCustomCrackData, :QWORD,:QWORD,:QWORD
PROTO64 external,RatingCustomDeleteCrackedData, :QWORD
PROTO64 external,RatingCustomInit, :QWORD
PROTO64 external,RatingCustomRemoveRatingHelper, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingCustomSetDefaultBureau, :QWORD
PROTO64 external,RatingCustomSetUserOptions, :QWORD,:QWORD
PROTO64 external,RatingEnable, :QWORD,:QWORD,:QWORD
PROTO64 external,RatingEnableW, :QWORD,:QWORD,:QWORD
PROTO64 external,RatingEnabledQuery, 
PROTO64 external,RatingFreeDetails, :QWORD
PROTO64 external,RatingInit, 
PROTO64 external,RatingObtainCancel, :QWORD
PROTO64 external,RatingObtainQuery, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingObtainQueryW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RatingSetupUI, :QWORD,:QWORD
PROTO64 external,RatingSetupUIW, :QWORD,:QWORD
PROTO64 external,VerifySupervisorPassword, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file msrating.inc
echo -----------------------------------------
ENDIF

