/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeData : HMFObject {
    bool  _accessAllowedWhenLocked;
    NSArray * _accessories;
    HMDAccount * _account;
    HMDApplicationData * _applicationData;
    unsigned long long  _assistantGenerationCounter;
    NSArray * _cloudZones;
    NSString * _currentDevice;
    NSUUID * _dataTag;
    long long  _dataVersion;
    NSDictionary * _demoAccessories;
    bool  _demoFinalized;
    NSArray * _homes;
    NSArray * _incomingInvitations;
    NSUUID * _lastCurrentHomeUUID;
    NSArray * _pendingReasonSaved;
    NSArray * _pendingUserManagementOperations;
    NSUUID * _primaryHomeUUID;
    long long  _residentEnabledState;
    long long  _schemaVersion;
    NSArray * _unprocessedOperationIdentifiers;
    NSArray * _uuidsOfRemovedHomes;
}

@property (nonatomic, readonly) bool accessAllowedWhenLocked;
@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly) HMDAccount *account;
@property (nonatomic, readonly, copy) HMDApplicationData *applicationData;
@property (nonatomic, readonly) unsigned long long assistantGenerationCounter;
@property (nonatomic, readonly, copy) NSArray *cloudZones;
@property (nonatomic, readonly, copy) NSString *currentDevice;
@property (nonatomic, readonly, copy) NSUUID *dataTag;
@property (nonatomic) long long dataVersion;
@property (nonatomic, readonly, copy) NSDictionary *demoAccessories;
@property (nonatomic, readonly) bool demoFinalized;
@property (nonatomic, readonly, copy) NSArray *homes;
@property (nonatomic, readonly, copy) NSArray *incomingInvitations;
@property (nonatomic, readonly, copy) NSUUID *lastCurrentHomeUUID;
@property (nonatomic, readonly, copy) NSArray *pendingReasonSaved;
@property (nonatomic, readonly, copy) NSArray *pendingUserManagementOperations;
@property (nonatomic, readonly, copy) NSUUID *primaryHomeUUID;
@property (nonatomic, readonly) long long residentEnabledState;
@property (nonatomic, readonly) long long schemaVersion;
@property (nonatomic, readonly, copy) NSArray *unprocessedOperationIdentifiers;
@property (nonatomic, readonly, copy) NSArray *uuidsOfRemovedHomes;

- (void).cxx_destruct;
- (bool)accessAllowedWhenLocked;
- (id)accessories;
- (id)account;
- (id)applicationData;
- (unsigned long long)assistantGenerationCounter;
- (id)cloudZones;
- (id)currentDevice;
- (id)dataTag;
- (long long)dataVersion;
- (id)demoAccessories;
- (bool)demoFinalized;
- (id)homes;
- (id)incomingInvitations;
- (id)initWithHomes:(id)arg1 accessories:(id)arg2 primaryHomeUUID:(id)arg3 lastCurrentHomeUUID:(id)arg4 dataVersion:(long long)arg5 schemaVersion:(long long)arg6 dataTag:(id)arg7 uuidsOfRemovedHomes:(id)arg8 cloudZones:(id)arg9 incomingInvitations:(id)arg10 assistantGenerationCounter:(unsigned long long)arg11 currentDevice:(id)arg12 pendingReasonSaved:(id)arg13 pendingUserManagementOperations:(id)arg14 unprocessedOperationIdentifiers:(id)arg15 applicationData:(id)arg16 residentEnabledState:(long long)arg17 account:(id)arg18 accessAllowedWhenLocked:(bool)arg19 demoAccessories:(id)arg20 demoFinalized:(bool)arg21;
- (id)lastCurrentHomeUUID;
- (id)pendingReasonSaved;
- (id)pendingUserManagementOperations;
- (id)primaryHomeUUID;
- (long long)residentEnabledState;
- (long long)schemaVersion;
- (void)setDataVersion:(long long)arg1;
- (id)unprocessedOperationIdentifiers;
- (id)uuidsOfRemovedHomes;

@end