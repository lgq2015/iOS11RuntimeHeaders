/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointRemoteControlSessionOutputContextCommunicationChannelImpl : NSObject <AVOutputContextCommunicationChannelImpl> {
    void * _callbackContextToken;
    AVOutputContextCommunicationChannel * _parentCommunicationChannel;
    AVFigRoutingContextOutputContextImpl * _parentOutputContextImpl;
    struct OpaqueFigEndpointRemoteControlSession { } * _remoteControlSession;
    AVWeakReference * _weakObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property AVOutputContextCommunicationChannel *parentCommunicationChannel;
@property AVFigRoutingContextOutputContextImpl *parentOutputContextImpl;
@property (nonatomic, readonly) struct OpaqueFigEndpointRemoteControlSession { }*remoteControlSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didClose;
- (void)_didReceiveData:(id)arg1;
- (void)_serverConnectionDied;
- (void)dealloc;
- (id)init;
- (id)initWithRemoteControlSession:(struct OpaqueFigEndpointRemoteControlSession { }*)arg1;
- (void)open;
- (id)parentCommunicationChannel;
- (id)parentOutputContextImpl;
- (struct OpaqueFigEndpointRemoteControlSession { }*)remoteControlSession;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setParentCommunicationChannel:(id)arg1;
- (void)setParentOutputContextImpl:(id)arg1;

@end