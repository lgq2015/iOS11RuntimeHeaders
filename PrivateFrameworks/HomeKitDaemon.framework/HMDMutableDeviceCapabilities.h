/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMutableDeviceCapabilities : HMDDeviceCapabilities

@property (getter=isRemoteGatewayCapable, nonatomic) bool remoteGatewayCapable;
@property (getter=isResidentCapable, nonatomic) bool residentCapable;
@property (nonatomic) bool supportsAssistantAccessControl;
@property (nonatomic) bool supportsCloudDataSync;
@property (nonatomic) bool supportsDeviceSetup;
@property (nonatomic) bool supportsKeyTransferClient;
@property (nonatomic) bool supportsKeyTransferServer;
@property (nonatomic) bool supportsKeychainSync;
@property (nonatomic) bool supportsStandaloneMode;
@property (nonatomic) bool supportsWholeHouseAudio;

+ (id)deviceCapabilities;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setRemoteGatewayCapable:(bool)arg1;
- (void)setResidentCapable:(bool)arg1;
- (void)setSupportsAssistantAccessControl:(bool)arg1;
- (void)setSupportsCloudDataSync:(bool)arg1;
- (void)setSupportsDeviceSetup:(bool)arg1;
- (void)setSupportsKeyTransferClient:(bool)arg1;
- (void)setSupportsKeyTransferServer:(bool)arg1;
- (void)setSupportsKeychainSync:(bool)arg1;
- (void)setSupportsStandaloneMode:(bool)arg1;
- (void)setSupportsWholeHouseAudio:(bool)arg1;

@end
