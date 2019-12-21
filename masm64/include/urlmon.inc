IFNDEF URLMON_INC
URLMON_INC equ <1>

PROTO64 external,BindAsyncMoniker, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CORPolicyProvider, :QWORD
PROTO64 external,CoGetClassObjectFromURL, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetCanonicalizeIUri, :QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetCombineIUri, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetCombineUrl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetCombineUrlEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetCompareUrl, :QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetCreateSecurityManager, :QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetCreateZoneManager, :QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetGetProtocolFlags, :QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetGetSecurityUrl, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetGetSecurityUrlEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetGetSession, :QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetIsFeatureEnabled, :QWORD,:QWORD
PROTO64 external,CoInternetIsFeatureEnabledForIUri, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetIsFeatureEnabledForUrl, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetIsFeatureZoneElevationEnabled, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetParseIUri, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetParseUrl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetQueryInfo, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CoInternetSetFeatureEnabled, :QWORD,:QWORD,:QWORD
PROTO64 external,CompareSecurityIds, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CompatFlagsFromClsid, :QWORD,:QWORD,:QWORD
PROTO64 external,CopyBindInfo, :QWORD,:QWORD
PROTO64 external,CopyStgMedium, :QWORD,:QWORD
PROTO64 external,CreateAsyncBindCtx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateAsyncBindCtxEx, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateFormatEnumerator, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateIUriBuilder, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateURLMoniker, :QWORD,:QWORD,:QWORD
PROTO64 external,CreateURLMonikerEx2, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateURLMonikerEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateUri, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateUriFromMultiByteString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateUriPriv, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,CreateUriWithFragment, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,Extract, :QWORD,:QWORD
PROTO64 external,FaultInIEFeature, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindMediaType, :QWORD,:QWORD
PROTO64 external,FindMediaTypeClass, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,FindMimeFromData, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetClassFileOrMime, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetClassURL, :QWORD,:QWORD
PROTO64 external,GetComponentIDFromCLSSPEC, :QWORD,:QWORD
PROTO64 external,GetIUriPriv2, :QWORD,:QWORD
PROTO64 external,GetIUriPriv, :QWORD,:QWORD
PROTO64 external,GetLabelsFromNamedHost, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,GetSoftwareUpdateInfo, :QWORD,:QWORD
PROTO64 external,HlinkGoBack, :QWORD
PROTO64 external,HlinkGoForward, :QWORD
PROTO64 external,HlinkNavigateMoniker, :QWORD,:QWORD
PROTO64 external,HlinkNavigateString, :QWORD,:QWORD
PROTO64 external,HlinkSimpleNavigateToMoniker, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,HlinkSimpleNavigateToString, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,IEGetUserPrivateNamespaceName, 
PROTO64 external,IEInstallScope, :QWORD
PROTO64 external,IsAsyncMoniker, :QWORD
PROTO64 external,IsJITInProgress, 
PROTO64 external,IsLoggingEnabledA, :QWORD
PROTO64 external,IsLoggingEnabledW, :QWORD
PROTO64 external,IsValidURL, :QWORD,:QWORD,:QWORD
PROTO64 external,MkParseDisplayNameEx, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,ObtainUserAgentString, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterBindStatusCallback, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterFormatEnumerator, :QWORD,:QWORD,:QWORD
PROTO64 external,RegisterMediaTypeClass, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,RegisterMediaTypes, :QWORD,:QWORD,:QWORD
PROTO64 external,ReleaseBindInfo, :QWORD
PROTO64 external,RevokeBindStatusCallback, :QWORD,:QWORD
PROTO64 external,RevokeFormatEnumerator, :QWORD,:QWORD
PROTO64 external,SetAccessForIEAppContainer, :QWORD,:QWORD,:QWORD
PROTO64 external,SetSoftwareUpdateAdvertisementState, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLDownloadA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLDownloadToCacheFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLDownloadToCacheFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLDownloadToFileA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLDownloadToFileW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLDownloadW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLOpenBlockingStreamA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLOpenBlockingStreamW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLOpenPullStreamA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLOpenPullStreamW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLOpenStreamA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,URLOpenStreamW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlMkBuildVersion, 
PROTO64 external,UrlMkGetSessionOption, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UrlMkSetSessionOption, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,WriteHitLogging, :QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file urlmon.inc
echo -----------------------------------------
ENDIF

