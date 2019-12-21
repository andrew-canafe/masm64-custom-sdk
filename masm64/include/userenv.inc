IFNDEF USERENV_INC
USERENV_INC equ <1>

PROTO64 external,AreThereVisibleLogoffScripts, :QWORD
PROTO64 external,AreThereVisibleShutdownScripts, :QWORD
PROTO64 external,CheckDirectoryOwnership, :QWORD,:QWORD,:QWORD
PROTO64 external,CheckXForestLogon, :QWORD
PROTO64 external,CopyProfileDirectoryEx2, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateAppContainerProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateAppContainerProfileInternal, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateDirectoryJunctionsForSystem, 
PROTO64 external,CreateDirectoryJunctionsForUserProfile, :QWORD
PROTO64 external,CreateEnvironmentBlock, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateGroupEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateLinkFileEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateProfile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteAppContainerProfile, :QWORD
PROTO64 external,DeleteAppContainerProfileInternal, :QWORD,:QWORD
PROTO64 external,DeleteGroup, :QWORD,:QWORD
PROTO64 external,DeleteLinkFile, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,DeleteProfileA, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteProfileDirectory, :QWORD,:QWORD,:QWORD
PROTO64 external,DeleteProfileW, :QWORD,:QWORD,:QWORD
PROTO64 external,DeriveAppContainerSidFromAppContainerName, :QWORD,:QWORD
PROTO64 external,DeriveRestrictedAppContainerSidFromAppContainerSidAndRestrictedName, :QWORD,:QWORD,:QWORD
PROTO64 external,DestroyEnvironmentBlock, :QWORD
PROTO64 external,EnterCriticalPolicySection, :QWORD
PROTO64 external,ExpandEnvironmentStringsForUserA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ExpandEnvironmentStringsForUserW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ForceSyncFgPolicy, :QWORD
PROTO64 external,FreeGPOListA, :QWORD
PROTO64 external,FreeGPOListW, :QWORD
PROTO64 external,GenerateGPNotification, :QWORD,:QWORD,:QWORD
PROTO64 external,GetAllUsersProfileDirectoryA, :QWORD,:QWORD
PROTO64 external,GetAllUsersProfileDirectoryW, :QWORD,:QWORD
PROTO64 external,GetAppContainerFolderPath, :QWORD,:QWORD
PROTO64 external,GetAppContainerRegistryLocation, :QWORD,:QWORD
PROTO64 external,GetAppliedGPOListA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetAppliedGPOListW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetDefaultUserProfileDirectoryA, :QWORD,:QWORD
PROTO64 external,GetDefaultUserProfileDirectoryW, :QWORD,:QWORD
PROTO64 external,GetGPOListA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetGPOListW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetLongProfilePathName, :QWORD,:QWORD,:QWORD
PROTO64 external,GetNextFgPolicyRefreshInfo, :QWORD,:QWORD
PROTO64 external,GetPreviousFgPolicyRefreshInfo, :QWORD,:QWORD
PROTO64 external,GetProfileType, :QWORD
PROTO64 external,GetProfilesDirectoryA, :QWORD,:QWORD
PROTO64 external,GetProfilesDirectoryW, :QWORD,:QWORD
PROTO64 external,GetUserProfileDirectoryA, :QWORD,:QWORD,:QWORD
PROTO64 external,GetUserProfileDirectoryForUserSidW, :QWORD,:QWORD,:QWORD
PROTO64 external,GetUserProfileDirectoryW, :QWORD,:QWORD,:QWORD
PROTO64 external,HasPolicyForegroundProcessingCompleted, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LeaveCriticalPolicySection, :QWORD
PROTO64 external,LoadUserProfileA, :QWORD,:QWORD
PROTO64 external,LoadUserProfileW, :QWORD,:QWORD
PROTO64 external,LookupAppContainerDisplayName, :QWORD,:QWORD
PROTO64 external,PingComputer, :QWORD,:QWORD
PROTO64 external,ProcessGroupPolicyCompleted, :QWORD,:QWORD,:QWORD
PROTO64 external,ProcessGroupPolicyCompletedEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RefreshPolicy, :QWORD
PROTO64 external,RefreshPolicyEx, :QWORD,:QWORD
PROTO64 external,RegisterGPNotification, :QWORD,:QWORD
PROTO64 external,RemapProfile, :QWORD,:QWORD,:QWORD
PROTO64 external,RsopAccessCheckByType, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RsopFileAccessCheck, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RsopResetPolicySettingStatus, :QWORD,:QWORD,:QWORD
PROTO64 external,RsopSetPolicySettingStatus, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UnloadUserProfile, :QWORD,:QWORD
PROTO64 external,UnregisterGPNotification, :QWORD
PROTO64 external,UpdateAppContainerProfile, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WaitForMachinePolicyForegroundProcessing, 
PROTO64 external,WaitForUserPolicyForegroundProcessing, 

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file userenv.inc
echo -----------------------------------------
ENDIF

