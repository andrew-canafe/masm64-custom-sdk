IFNDEF WINSCARD_INC
WINSCARD_INC equ <1>

PROTO64 external,SCardAccessStartedEvent, 
PROTO64 external,SCardAddReaderToGroupA, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardAddReaderToGroupW, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardAudit, :QWORD,:QWORD
PROTO64 external,SCardBeginTransaction, :QWORD
PROTO64 external,SCardCancel, :QWORD
PROTO64 external,SCardConnectA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardConnectW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardControl, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardDisconnect, :QWORD,:QWORD
PROTO64 external,SCardEndTransaction, :QWORD,:QWORD
PROTO64 external,SCardEstablishContext, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardForgetCardTypeA, :QWORD,:QWORD
PROTO64 external,SCardForgetCardTypeW, :QWORD,:QWORD
PROTO64 external,SCardForgetReaderA, :QWORD,:QWORD
PROTO64 external,SCardForgetReaderGroupA, :QWORD,:QWORD
PROTO64 external,SCardForgetReaderGroupW, :QWORD,:QWORD
PROTO64 external,SCardForgetReaderW, :QWORD,:QWORD
PROTO64 external,SCardFreeMemory, :QWORD,:QWORD
PROTO64 external,SCardGetAttrib, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetCardTypeProviderNameA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetCardTypeProviderNameW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetDeviceTypeIdA, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetDeviceTypeIdW, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetProviderIdA, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetProviderIdW, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetReaderDeviceInstanceIdA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetReaderDeviceInstanceIdW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetReaderIconA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetReaderIconW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetStatusChangeA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetStatusChangeW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardGetTransmitCount, :QWORD,:QWORD
PROTO64 external,SCardIntroduceCardTypeA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardIntroduceCardTypeW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardIntroduceReaderA, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardIntroduceReaderGroupA, :QWORD,:QWORD
PROTO64 external,SCardIntroduceReaderGroupW, :QWORD,:QWORD
PROTO64 external,SCardIntroduceReaderW, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardIsValidContext, :QWORD
PROTO64 external,SCardListCardsA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardListCardsW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardListInterfacesA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardListInterfacesW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardListReaderGroupsA, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardListReaderGroupsW, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardListReadersA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardListReadersW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardListReadersWithDeviceInstanceIdA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardListReadersWithDeviceInstanceIdW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardLocateCardsA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardLocateCardsByATRA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardLocateCardsByATRW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardLocateCardsW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardReadCacheA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardReadCacheW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardReconnect, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardReleaseContext, :QWORD
PROTO64 external,SCardReleaseStartedEvent, 
PROTO64 external,SCardRemoveReaderFromGroupA, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardRemoveReaderFromGroupW, :QWORD,:QWORD,:QWORD
PROTO64 external,SCardSetAttrib, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardSetCardTypeProviderNameA, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardSetCardTypeProviderNameW, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardState, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardStatusA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardStatusW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardTransmit, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardWriteCacheA, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SCardWriteCacheW, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file winscard.inc
echo -----------------------------------------
ENDIF

