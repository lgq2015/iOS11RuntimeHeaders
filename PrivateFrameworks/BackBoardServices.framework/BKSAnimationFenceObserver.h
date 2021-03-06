/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAnimationFenceObserver : NSObject {
    unsigned int  _encodeCount;
    NSMapTable * _fenceNameToDeathSentinelMap;
    NSMapTable * _fenceNameToHandleNamesMap;
    NSMapTable * _handleNameToFenceNameMap;
    NSMapTable * _handleNameToTraceMap;
    unsigned int  _lastHandleName;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _validDeathSentinelsTable;
}

+ (unsigned int)countFromEncodeIdentifier:(unsigned long long)arg1;
+ (int)pidFromEncodeIdentifier:(unsigned long long)arg1;
+ (id)sharedInstance;

- (unsigned long long)addHandle:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)nextEncodeIdentifier;
- (void)removeHandleWithName:(unsigned long long)arg1;

@end
