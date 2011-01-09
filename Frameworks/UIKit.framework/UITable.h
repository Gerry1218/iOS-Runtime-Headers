/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFloatArray, UIView, _UITableReorderingSupport, UITableCountView, _UITableDeleteAnimationSupport, NSMutableArray;



@interface UITable : UIScroller 
{
    id _dataSource;
    NSMutableArray *_tableColumns;
    SEL _doubleAction;
    UIFloatArray *_rowHeights;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _visibleRows;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _visibleCols;
    NSMutableArray *_visibleCells;
    _UITableDeleteAnimationSupport *_deleteAnimationSupport;
    NSUInteger _selectedRow;
    NSUInteger _lastHighlightedRow;
    NSInteger _rowCount;
    NSInteger _tableReloadingSuspendedCount;
    float _padding;
    UIView *_accessoryView;
    UITableCountView *_countLabel;
    NSMutableArray *_reusableTableCells;
    NSInteger _reusableCapacity;
    NSMutableArray *_extraSeparators;
    NSInteger _swipeToDeleteRow;
    struct { 
        unsigned int separatorStyle : 3; 
        unsigned int rowDeletionEnabled : 1; 
        unsigned int allowSelectionDuringRowDeletion : 1; 
        unsigned int dataSourceHeightForRow : 1; 
        unsigned int dataSourceSetObjectValue : 1; 
        unsigned int dataShowDisclosureForRow : 1; 
        unsigned int dataDisclosureClickableForRow : 1; 
        unsigned int dataSourceWantsHints : 1; 
        unsigned int dataSourceCanDeleteRow : 1; 
        unsigned int dataSourceConfirmDeleteRow : 1; 
        unsigned int delegateTableSelectionDidChange : 1; 
        unsigned int scrollsToSelection : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int reuseTableCells : 1; 
        unsigned int delegateUpdateVisibleCellsNote : 1; 
        unsigned int delegateTableRowSelected : 1; 
        unsigned int rowAlreadyHighlighted : 1; 
        unsigned int needsReload : 1; 
        unsigned int delegateCanSwipe : 1; 
        unsigned int updatingVisibleCellsManually : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int warnForForcedCellUpdateDisabled : 1; 
        unsigned int delaySendingSelectionChanged : 1; 
        unsigned int dataSourceCanInsertAtRow : 1; 
        unsigned int shouldDisplayTopSeparator : 1; 
        unsigned int displayTopSeparator : 1; 
        unsigned int needToAdjustExtraSeparators : 1; 
        unsigned int ignoreDragSwipe : 1; 
        unsigned int lastHighlightedRowActive : 1; 
        unsigned int reloading : 1; 
        unsigned int countStringInsignificantRowCount : 4; 
        unsigned int dataSourceCanReuseCell : 1; 
        unsigned int reserved : 27; 
    } _tableFlags;
    _UITableReorderingSupport *_reorderingSupport;
}

+ (void)_initializeSafeCategory;
+ (id)standardTableWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (id)tableColumns;
- (void)removeTableColumn:(id)arg1;
- (NSInteger)columnWithIdentifier:(id)arg1;
- (id)tableColumnWithIdentifier:(id)arg1;
- (void)clearAllData;
- (void)_updateOriginOfCells:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)reloadDataForInsertionOfRows:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)reloadCellAtRow:(NSInteger)arg1 column:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)reloadDataForInsertionOfRows:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 animated:(BOOL)arg2;
- (void)setNeedsDisplayInRowRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setDoubleAction:(SEL)arg1;
- (SEL)doubleAction;
- (void)animateDeletionOfCellAtRow:(NSInteger)arg1 column:(NSInteger)arg2 viaEdge:(NSInteger)arg3;
- (void)animateDeletionOfRowWithCell:(id)arg1 viaEdge:(NSInteger)arg2 animatingOthersUp:(BOOL)arg3;
- (void)completeRowDeletionAnimation;
- (void)enableRowDeletion:(BOOL)arg1;
- (void)_enableRowDeletion:(BOOL)arg1 forCell:(id)arg2 atRow:(NSInteger)arg3 allowInsert:(BOOL)arg4 allowReorder:(BOOL)arg5 animated:(BOOL)arg6;
- (NSInteger)deleteConfirmationRow;
- (void)setDeleteConfirmationRow:(NSInteger)arg1;
- (void)_disableInteraction;
- (void)_enableInteraction;
- (BOOL)isRowDeletionEnabled;
- (void)updateDisclosures;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfViewAtColumn:(NSInteger)arg1 row:(NSInteger)arg2;
- (id)viewAtColumn:(NSInteger)arg1 row:(NSInteger)arg2;
- (void)setAllowsReordering:(BOOL)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })columnsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)columnAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)visibleCellsWithoutUpdatingLayout;
- (void)_userSelectRow:(NSInteger)arg1;
- (void)_sendSelectionDidChange;
- (void)_delaySendSelectionDidChange;
- (void)_selectRow:(NSInteger)arg1 byExtendingSelection:(BOOL)arg2 withFade:(BOOL)arg3 scrollingToVisible:(BOOL)arg4 withSelectionNotifications:(BOOL)arg5;
- (void)selectRow:(NSInteger)arg1 byExtendingSelection:(BOOL)arg2 withFade:(BOOL)arg3 scrollingToVisible:(BOOL)arg4;
- (BOOL)shouldDelaySendingSelectionChanged;
- (NSInteger)selectedRow;
- (NSInteger)lastHighlightedRow;
- (BOOL)highlightRow:(NSInteger)arg1;
- (BOOL)highlightNextRowByDelta:(NSInteger)arg1;
- (BOOL)selectHighlightedRow;
- (void)setScrollsToSelection:(BOOL)arg1;
- (struct { float x1; float x2; float x3; float x4; })adornmentMargins;
- (struct { float x1; float x2; float x3; float x4; })pressedAdornmentMargins;
- (BOOL)_checkCanSelectRow:(NSInteger)arg1 view:(id)arg2;
- (void)setAccessoryView:(id)arg1;
- (void)drawExtraSeparator:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_endCellReorderAnimation;
- (void)_deleteRowAlertDidEndWithResult:(BOOL)arg1 contextInfo:(id)arg2;
- (void)_deleteRowAlertDidEndContinuation:(id)arg1;
- (void)_animateRowsForDeletionOfRow:(NSInteger)arg1 withSep:(id)arg2;
- (void)_saveTableStateBeforeAnimationForRow:(NSInteger)arg1;
- (void)_restoreTableStateAfterAnimation;
- (NSInteger)_removeFromVisibleRows:(id)arg1;
- (void)_getRowCount:(NSInteger*)arg1 andHeight:(float*)arg2 beforeVisibleCellsForRows:(id)arg3;
- (void)_animateRemovalOfCell:(id)arg1 atRow:(NSInteger)arg2 col:(NSInteger)arg3 viaEdge:(NSInteger)arg4 withAmountToSlideUp:(float*)arg5;
- (void)_animateRemovalOfVisibleRows:(id)arg1 viaEdge:(NSInteger)arg2 withAmountToSlideUp:(float*)arg3;
- (void)_animateNewCells:(id)arg1 bySlidingUpAmount:(float)arg2;
- (void)_animateNewCells:(id)arg1 bySlidingDownAmount:(float)arg2;
- (float)_partOfRow:(NSInteger)arg1 thatIsHidden:(BOOL)arg2;
- (void)deleteRows:(id)arg1 viaEdge:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)insertRows:(id)arg1 deleteRows:(id)arg2 reloadRows:(id)arg3;
- (void)_willDeleteRow:(NSInteger)arg1 forTableCell:(id)arg2 viaEdge:(NSInteger)arg3 animateOthers:(BOOL)arg4;
- (void)_enableAndRestoreTableStateAfterAnimation;
- (void)highlightView:(id)arg1 state:(BOOL)arg2;
- (void)setResusesTableCells:(BOOL)arg1;
- (void)setAllowSelectionDuringRowDeletion:(BOOL)arg1;
- (BOOL)getRow:(NSInteger*)arg1 column:(NSInteger*)arg2 ofTableCell:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfCellAtColumn:(NSInteger)arg1 row:(NSInteger)arg2;
- (NSInteger)_rowForTableCell:(id)arg1;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectOfRow:(NSInteger)arg1 usingRowHeights:(id)arg2;
- (BOOL)canDeleteRow:(NSInteger)arg1;
- (BOOL)canInsertAtRow:(NSInteger)arg1;
- (BOOL)canSelectRow:(NSInteger)arg1;
- (BOOL)validateDataSource;
- (NSInteger)dataSourceGetRowCount;
- (id)dataSourceCreateCellForRow:(NSInteger)arg1 column:(NSInteger)arg2 reusing:(id)arg3;
- (BOOL)dataSourceSupportsVariableRowHeights;
- (void)animateDeletionOfRowWithCell:(id)arg1 viaEdge:(NSInteger)arg2;
- (BOOL)shouldIndentRow:(NSInteger)arg1;
- (void)deleteRows:(id)arg1 viaEdge:(NSInteger)arg2;
- (void)_fadeCellOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_removeContextFromSuperview:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)enableRowDeletion:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_userCanDeleteRows;
- (void)scrollAndCenterTableCell:(id)arg1 animated:(BOOL)arg2;
- (float)animationDuration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfColumn:(NSInteger)arg1;
- (void)_addSubview:(id)arg1 atTop:(BOOL)arg2;
- (id)accessoryView;
- (NSInteger)rowAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)selectRow:(NSInteger)arg1 byExtendingSelection:(BOOL)arg2;
- (id)createPreparedCellForRow:(NSInteger)arg1 column:(NSInteger)arg2;
- (void)_updateVisibleCellsNow;
- (void)scrollRowToVisible:(NSInteger)arg1;
- (void)_reloadRowHeights;
- (BOOL)floatArray:(id)arg1 loadValues:(float*)arg2 count:(NSInteger)arg3;
- (void)floatArray:(id)arg1 getValueCount:(NSInteger*)arg2 gapIndexCount:(NSInteger*)arg3;
- (void)_endReorderingForCell:(id)arg1;
- (BOOL)_shouldDeleteRowForTableCell:(id)arg1;
- (void)_didDeleteRowForTableCell:(id)arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)_scheduleAdjustExtraSeparators;
- (void)_adjustCountLabel;
- (void)_adjustReusableTableCells;
- (void)_suspendReloads;
- (void)_resumeReloads;
- (NSUInteger)_countStringRowCount;
- (void)_setRowCount:(NSInteger)arg1;
- (void)setCountStringInsignificantRowCount:(NSUInteger)arg1;
- (void)setCountString:(id)arg1;
- (void)_updateContentSize;
- (void)_updateVisibleCellsImmediatelyIfNecessary;
- (void)_adjustExtraSeparators;
- (void)noteNumberOfRowsChanged;
- (id)visibleCells;
- (void)setSeparatorStyle:(NSInteger)arg1;
- (NSInteger)separatorStyle;
- (void)_stopAutoscrollTimer;
- (void)_beginReorderingForCell:(id)arg1;
- (void)_tableCellAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_finishedAnimatingCellReorder:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_autoscroll:(id)arg1;
- (void)_reorderPositionChangedForCell:(id)arg1;
- (void)_didInsertRowForTableCell:(id)arg1;
- (void)_finishedRemovingRemovalButtonForTableCell:(id)arg1;
- (void)animateDeletionOfRowWithCell:(id)arg1;
- (NSInteger)swipe:(NSInteger)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (id)_scriptingInfo;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)cancelTouchTracking;
- (BOOL)cancelMouseTracking;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)selectRow:(NSInteger)arg1 byExtendingSelection:(BOOL)arg2 withFade:(BOOL)arg3;
- (id)cellAtRow:(NSInteger)arg1 column:(NSInteger)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfCellAtRow:(NSInteger)arg1 column:(NSInteger)arg2;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPadding:(float)arg1;
- (void)addTableColumn:(id)arg1;
- (void)setReusesTableCells:(BOOL)arg1;
- (NSInteger)numberOfRows;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfRow:(NSInteger)arg1;
- (id)visibleCellForRow:(NSInteger)arg1 column:(NSInteger)arg2;
- (float)rowHeight;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })visibleRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)canHandleSwipes;
- (void)selectCell:(id)arg1 inRow:(NSInteger)arg2 column:(NSInteger)arg3 withFade:(BOOL)arg4;
- (void)contentMouseUpInView:(id)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)setRowHeight:(float)arg1;
- (void)removeFromSuperview;
- (id)_resuableObjectForTableCell:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)reloadData;
- (NSInteger)numberOfColumns;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })visibleRows;
- (id)_accessibilityInternalData;
- (id)_accessibilityAccessoryView;
- (id)accessibilityLabel;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityScrollStatus;

@end