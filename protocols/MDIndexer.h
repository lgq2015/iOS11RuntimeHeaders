/* Generated by RuntimeBrowser.
 */

@protocol MDIndexer <CSSearchableIndexInterface>

@required

- (void)clientDidCheckin:(void *)arg1 protectionClass:(void *)arg2 service:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, <CSSearchableIndexServiceInterface> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CSIndexJob *, NSError *, void*
- (double)lastUpdateTime;
- (void)runMigration;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;

@optional

- (void)deleteAllSearchableItemsWithBundleID:(void *)arg1 protectionClass:(void *)arg2 shouldGC:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<CSIndexExtensionDelegate> *)extensionDelegate;
- (void)recordEngagementForBundleID:(NSString *)arg1 uniqueIdentifier:(NSString *)arg2 protectionClass:(NSString *)arg3 userQuery:(NSString *)arg4 date:(NSDate *)arg5;
- (void)setExtensionDelegate:(id <CSIndexExtensionDelegate>)arg1;
- (SPCoreSpotlightTask *)startQuery:(void *)arg1 withContext:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 12: NSString *, CSSearchQueryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, struct __MDStoreOIDArray { }*, struct __MDPlistBytes { }*, NSString *, void*
- (void)startQueryTask:(SPCoreSpotlightTask *)arg1;
- (SPCoreSpotlightTask *)startQueryWithQueryString:(void *)arg1 queryContext:(void *)arg2 resultsHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 18: NSString *, CSSearchQueryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, struct __MDStoreOIDArray { }*, struct __MDPlistBytes { }*, NSString *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (SPCoreSpotlightTask *)taskForQueryWithQueryString:(void *)arg1 queryContext:(void *)arg2 resultsHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 18: NSString *, CSSearchQueryContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, struct __MDStoreOIDArray { }*, struct __MDPlistBytes { }*, NSString *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
