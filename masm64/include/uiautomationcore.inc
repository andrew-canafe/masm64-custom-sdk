IFNDEF UIAUTOMATIONCORE_INC
UIAUTOMATIONCORE_INC equ <1>

PROTO64 external,DockPattern_SetDockPosition, :QWORD,:QWORD
PROTO64 external,ExpandCollapsePattern_Collapse, :QWORD
PROTO64 external,ExpandCollapsePattern_Expand, :QWORD
PROTO64 external,GridPattern_GetItem, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,InvokePattern_Invoke, :QWORD
PROTO64 external,ItemContainerPattern_FindItemByProperty, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,LegacyIAccessiblePattern_DoDefaultAction, :QWORD
PROTO64 external,LegacyIAccessiblePattern_GetIAccessible, :QWORD,:QWORD
PROTO64 external,LegacyIAccessiblePattern_Select, :QWORD,:QWORD
PROTO64 external,LegacyIAccessiblePattern_SetValue, :QWORD,:QWORD
PROTO64 external,MultipleViewPattern_GetViewName, :QWORD,:QWORD,:QWORD
PROTO64 external,MultipleViewPattern_SetCurrentView, :QWORD,:QWORD
PROTO64 external,RangeValuePattern_SetValue, :QWORD,:QWORD,:QWORD
PROTO64 external,ScrollItemPattern_ScrollIntoView, :QWORD
PROTO64 external,ScrollPattern_Scroll, :QWORD,:QWORD,:QWORD
PROTO64 external,ScrollPattern_SetScrollPercent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,SelectionItemPattern_AddToSelection, :QWORD
PROTO64 external,SelectionItemPattern_RemoveFromSelection, :QWORD
PROTO64 external,SelectionItemPattern_Select, :QWORD
PROTO64 external,SynchronizedInputPattern_Cancel, :QWORD
PROTO64 external,SynchronizedInputPattern_StartListening, :QWORD,:QWORD
PROTO64 external,TextPattern_GetSelection, :QWORD,:QWORD
PROTO64 external,TextPattern_GetVisibleRanges, :QWORD,:QWORD
PROTO64 external,TextPattern_RangeFromChild, :QWORD,:QWORD,:QWORD
PROTO64 external,TextPattern_RangeFromPoint, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TextPattern_get_DocumentRange, :QWORD,:QWORD
PROTO64 external,TextPattern_get_SupportedTextSelection, :QWORD,:QWORD
PROTO64 external,TextRange_AddToSelection, :QWORD
PROTO64 external,TextRange_Clone, :QWORD,:QWORD
PROTO64 external,TextRange_Compare, :QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_CompareEndpoints, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_ExpandToEnclosingUnit, :QWORD,:QWORD
PROTO64 external,TextRange_FindAttribute, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_FindText, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_GetAttributeValue, :QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_GetBoundingRectangles, :QWORD,:QWORD
PROTO64 external,TextRange_GetChildren, :QWORD,:QWORD
PROTO64 external,TextRange_GetEnclosingElement, :QWORD,:QWORD
PROTO64 external,TextRange_GetText, :QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_Move, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_MoveEndpointByRange, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_MoveEndpointByUnit, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TextRange_RemoveFromSelection, :QWORD
PROTO64 external,TextRange_ScrollIntoView, :QWORD,:QWORD
PROTO64 external,TextRange_Select, :QWORD
PROTO64 external,TogglePattern_Toggle, :QWORD
PROTO64 external,TransformPattern_Move, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TransformPattern_Resize, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,TransformPattern_Rotate, :QWORD,:QWORD,:QWORD
PROTO64 external,UiaAddEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaClientsAreListening, 
PROTO64 external,UiaDisconnectAllProviders, 
PROTO64 external,UiaDisconnectProvider, :QWORD
PROTO64 external,UiaEventAddWindow, :QWORD,:QWORD
PROTO64 external,UiaEventRemoveWindow, :QWORD,:QWORD
PROTO64 external,UiaFind, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaGetErrorDescription, :QWORD
PROTO64 external,UiaGetPatternProvider, :QWORD,:QWORD,:QWORD
PROTO64 external,UiaGetPropertyValue, :QWORD,:QWORD,:QWORD
PROTO64 external,UiaGetReservedMixedAttributeValue, :QWORD
PROTO64 external,UiaGetReservedNotSupportedValue, :QWORD
PROTO64 external,UiaGetRootNode, :QWORD
PROTO64 external,UiaGetRuntimeId, :QWORD,:QWORD
PROTO64 external,UiaGetUpdatedCache, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaHPatternObjectFromVariant, :QWORD,:QWORD
PROTO64 external,UiaHTextRangeFromVariant, :QWORD,:QWORD
PROTO64 external,UiaHUiaNodeFromVariant, :QWORD,:QWORD
PROTO64 external,UiaHasServerSideProvider, :QWORD
PROTO64 external,UiaHostProviderFromHwnd, :QWORD,:QWORD
PROTO64 external,UiaIAccessibleFromProvider, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaLookupId, :QWORD,:QWORD
PROTO64 external,UiaNavigate, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaNodeFromFocus, :QWORD,:QWORD,:QWORD
PROTO64 external,UiaNodeFromHandle, :QWORD,:QWORD
PROTO64 external,UiaNodeFromPoint, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaNodeFromProvider, :QWORD,:QWORD
PROTO64 external,UiaNodeRelease, :QWORD
PROTO64 external,UiaPatternRelease, :QWORD
PROTO64 external,UiaProviderForNonClient, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaProviderFromIAccessible, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaRaiseAsyncContentLoadedEvent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaRaiseAutomationEvent, :QWORD,:QWORD
PROTO64 external,UiaRaiseAutomationPropertyChangedEvent, :QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaRaiseStructureChangedEvent, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaRaiseTextEditTextChangedEvent, :QWORD,:QWORD,:QWORD
PROTO64 external,UiaRegisterProviderCallback, :QWORD
PROTO64 external,UiaRemoveEvent, :QWORD
PROTO64 external,UiaReturnRawElementProvider, :QWORD,:QWORD,:QWORD,:QWORD
PROTO64 external,UiaSetFocus, :QWORD
PROTO64 external,UiaTextRangeRelease, :QWORD
PROTO64 external,ValuePattern_SetValue, :QWORD,:QWORD
PROTO64 external,VirtualizedItemPattern_Realize, :QWORD
PROTO64 external,WindowPattern_Close, :QWORD
PROTO64 external,WindowPattern_SetWindowVisualState, :QWORD,:QWORD
PROTO64 external,WindowPattern_WaitForInputIdle, :QWORD,:QWORD,:QWORD

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file uiautomationcore.inc
echo -----------------------------------------
ENDIF

