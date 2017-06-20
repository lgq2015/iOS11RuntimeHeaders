/* Generated by RuntimeBrowser.
 */

@protocol UICollectionViewDropCoordinator <NSObject>

@required

- (NSIndexPath *)destinationIndexPath;
- (void)dropItem:(UIDragItem *)arg1 intoItemAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)dropItem:(UIDragItem *)arg1 toItemAtIndexPath:(NSIndexPath *)arg2;
- (<UICollectionViewDropPlaceholderContext> *)dropItem:(void *)arg1 toPlaceholderInsertedAtIndexPath:(void *)arg2 withReuseIdentifier:(void *)arg3 cellUpdateHandler:(void *)arg4; // needs 4 arg types, found 9: UIDragItem *, NSIndexPath *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UICollectionViewCell *, void*
- (void)dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (NSArray *)items;
- (UICollectionViewDropProposal *)proposal;
- (<UIDropSession> *)session;

@end