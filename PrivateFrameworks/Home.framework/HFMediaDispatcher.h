/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaDispatcher : NSObject <HFAVRoutingControllerObserver> {
    NSHashTable * _appleMusicAccountObservers;
    ACAccountStore * _appleMusicAccountStore;
    NSArray * _appleMusicMagicAuthCapableAccounts;
    NSHashTable * _mediaRouteObservers;
    MPAVRoutingController * _routingController;
}

@property (nonatomic, retain) NSHashTable *appleMusicAccountObservers;
@property (nonatomic, readonly) ACAccountStore *appleMusicAccountStore;
@property (nonatomic, copy) NSArray *appleMusicMagicAuthCapableAccounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUsingiCloud;
@property (nonatomic, retain) NSHashTable *mediaRouteObservers;
@property (nonatomic, retain) MPAVRoutingController *routingController;
@property (readonly) Class superclass;

+ (id)sharedDispatcher;

- (void).cxx_destruct;
- (void)_accountsStoreWasUpdated:(id)arg1;
- (id)_performStateDump;
- (bool)_reloadAppleMusicMagicAuthCapableAccounts;
- (void)_setupAppleMusicAccountStoreIfNecessary;
- (void)addAppleMusicAccountObserver:(id)arg1;
- (void)addMediaRouteObserver:(id)arg1;
- (id)appleMusicAccountObservers;
- (id)appleMusicAccountStore;
- (id)appleMusicMagicAuthCapableAccounts;
- (id)init;
- (bool)isUsingiCloud;
- (id)mediaRouteForIdentifier:(id)arg1;
- (id)mediaRouteObservers;
- (void)removeAppleMusicAccountObserver:(id)arg1;
- (void)removeMediaRouteObserver:(id)arg1;
- (id)routingController;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)routingController:(id)arg1 volumeControlAvailabilityDidChange:(bool)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingControllerDidPauseFromActiveRouteChange:(id)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (void)setAppleMusicAccountObservers:(id)arg1;
- (void)setAppleMusicMagicAuthCapableAccounts:(id)arg1;
- (void)setMediaRouteObservers:(id)arg1;
- (void)setRoutingController:(id)arg1;

@end
