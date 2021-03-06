/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportExpandPersistenceGapOperation : FCOperation {
    <FCAppConfiguration> * _appConfiguration;
    FCFeedViewportBookmark * _bookmark;
    bool  _cachedOnly;
    FCCloudContext * _context;
    id /* block */  _expandGapCompletionHandler;
    FCFeedViewportPersistenceGap * _gap;
    unsigned long long  _gapExpansionDirection;
    long long  _gapExpansionPolicy;
    FCDeflatedFeedGroup * _groupToInflate;
    unsigned long long  _indexOfGroupToInflate;
    FCFeedGroup * _inflatedGroup;
    FCFeedViewport * _viewport;
}

@property (nonatomic, copy) <FCAppConfiguration> *appConfiguration;
@property (nonatomic, copy) FCFeedViewportBookmark *bookmark;
@property (nonatomic) bool cachedOnly;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, copy) id /* block */ expandGapCompletionHandler;
@property (nonatomic, copy) FCFeedViewportPersistenceGap *gap;
@property (nonatomic) unsigned long long gapExpansionDirection;
@property (nonatomic) long long gapExpansionPolicy;
@property (nonatomic, retain) FCDeflatedFeedGroup *groupToInflate;
@property (nonatomic) unsigned long long indexOfGroupToInflate;
@property (nonatomic, retain) FCFeedGroup *inflatedGroup;
@property (nonatomic, retain) FCFeedViewport *viewport;

- (void).cxx_destruct;
- (id)appConfiguration;
- (id)bookmark;
- (bool)cachedOnly;
- (id)context;
- (id /* block */)expandGapCompletionHandler;
- (id)gap;
- (unsigned long long)gapExpansionDirection;
- (long long)gapExpansionPolicy;
- (id)groupToInflate;
- (unsigned long long)indexOfGroupToInflate;
- (id)inflatedGroup;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setAppConfiguration:(id)arg1;
- (void)setBookmark:(id)arg1;
- (void)setCachedOnly:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setExpandGapCompletionHandler:(id /* block */)arg1;
- (void)setGap:(id)arg1;
- (void)setGapExpansionDirection:(unsigned long long)arg1;
- (void)setGapExpansionPolicy:(long long)arg1;
- (void)setGroupToInflate:(id)arg1;
- (void)setIndexOfGroupToInflate:(unsigned long long)arg1;
- (void)setInflatedGroup:(id)arg1;
- (void)setViewport:(id)arg1;
- (bool)validateOperation;
- (id)viewport;

@end
