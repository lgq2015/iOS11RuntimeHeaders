/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigRoutingContextOutputContextImpl : NSObject <AVOutputContextImpl> {
    struct __CFDictionary { } * _communicationChannelsForRemoteControlSessions;
    NSDictionary * _destinationChangesForRouteChangeIDs;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    struct OpaqueFigEndpointRemoteControlSession { } * _outgoingRemoteControlSession;
    AVOutputContext * _parentContext;
    struct OpaqueFigRoutingContext { } * _routingContext;
    id /* block */  _routingContextCreator;
    AVWeakReference * _weakObserver;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly, copy) NSString *associatedAudioDeviceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct OpaqueFigRoutingContext { }*figRoutingContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property (readonly) AVOutputDeviceGroup *outputDeviceGroup;
@property (readonly) NSArray *outputDevices;
@property AVOutputContext *parentOutputContext;
@property (nonatomic, readonly) NSUUID *routingContextUUID;
@property (readonly) Class superclass;

+ (id)auxiliaryOutputContext;
+ (struct OpaqueFigRoutingContext { }*)copySystemVideoRoutingContext;
+ (Class)defaultOutputDeviceFactory;
+ (id)iTunesAudioContext;
+ (void)initialize;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextForControllingOutputDeviceGroup:(id)arg1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1;
+ (id)platformDependentScreenOrVideoContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (struct { int (*x1)(); int (*x2)(); })routingContextFactory;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ID;
- (void)_currentRouteChanged;
- (void)_groupConfigurationChanged;
- (void)_remoteControlChannelAvailabilityChanged;
- (void)_routeChangeEndedWithID:(id)arg1 reason:(struct __CFString { }*)arg2;
- (void)_routeChangeStartedWithID:(id)arg1;
- (bool)_selectOutputDevice:(id)arg1 forProcessWithID:(int)arg2 withPassword:(id)arg3;
- (void)_serverConnectionDied;
- (void)_systemPickerVideoRouteChanged;
- (void)addOutputDevice:(id)arg1;
- (id)associatedAudioDeviceID;
- (void)communicationChannelImpl:(id)arg1 didReceiveData:(id)arg2;
- (void)communicationChannelImplDidClose:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct OpaqueFigRoutingContext { }*)figRoutingContext;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFigRoutingContextCreator:(id /* block */)arg1;
- (id)initWithRoutingContextUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)outgoingCommunicationChannel;
- (void)outputContextDidChangeApplicationProcessID:(id)arg1;
- (id)outputDevice;
- (id)outputDeviceGroup;
- (id)outputDevices;
- (id)parentOutputContext;
- (void)removeOutputDevice:(id)arg1;
- (id)routingContextUUID;
- (bool)setOutputDevice:(id)arg1 options:(id)arg2;
- (void)setOutputDevices:(id)arg1;
- (void)setParentOutputContext:(id)arg1;

@end