/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYDeviceSetupSourceSession : NSObject <BYBuddyDaemonProximitySourceProtocol, SASProximitySessionDelegate> {
    double  _backupProgress;
    BYBuddyDaemonProximitySourceClient * _client;
    unsigned long long  _currentPhase;
    bool  _hasBackupCompleted;
    bool  _hasSyncCompleted;
    CUMessageSession * _messageSession;
    id /* block */  _progressHandler;
    id /* block */  _sendObjectHandler;
    double  _syncProgress;
    double  _timeRemaining;
}

@property double backupProgress;
@property (retain) BYBuddyDaemonProximitySourceClient *client;
@property unsigned long long currentPhase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool hasBackupCompleted;
@property bool hasSyncCompleted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CUMessageSession *messageSession;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ sendObjectHandler;
@property (readonly) Class superclass;
@property double syncProgress;
@property double timeRemaining;

- (void).cxx_destruct;
- (void)activate;
- (void)backupCompletedWithError:(id)arg1;
- (double)backupProgress;
- (void)backupProgress:(double)arg1 estimatedTimeRemaining:(long long)arg2;
- (id)client;
- (unsigned long long)currentPhase;
- (void)finishedWithError:(id)arg1;
- (bool)hasBackupCompleted;
- (bool)hasSyncCompleted;
- (void)invalidate;
- (id)messageSession;
- (id /* block */)progressHandler;
- (void)receivedObject:(id)arg1;
- (id /* block */)sendObjectHandler;
- (void)setBackupProgress:(double)arg1;
- (void)setClient:(id)arg1;
- (void)setCurrentPhase:(unsigned long long)arg1;
- (void)setHasBackupCompleted:(bool)arg1;
- (void)setHasSyncCompleted:(bool)arg1;
- (void)setMessageSession:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setSendObjectHandler:(id /* block */)arg1;
- (void)setSyncProgress:(double)arg1;
- (void)setTimeRemaining:(double)arg1;
- (void)syncCompletedWithErrors:(id)arg1;
- (double)syncProgress;
- (void)syncProgress:(double)arg1;
- (double)timeRemaining;
- (void)updateProgress;

@end
