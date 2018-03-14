/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSession : NSObject <RTCPReportProvider, VCMediaStreamNotification, VCSecurityEventHandler, VCSessionParticipantStreamDelegate> {
    VCSessionConfiguration * _configuration;
    VCDatagramChannelIDS * _datagramChannel;
    <VCSessionDelegate> * _delegate;
    bool  _encryptionInfoReceived;
    NSString * _idsDestination;
    NSMutableArray * _initializingParticipants;
    VCSessionParticipant * _localParticipant;
    bool  _localSourceNeedsReset;
    NSMutableDictionary * _remoteParticipants;
    struct opaqueRTCReporting { } * _reportingAgent;
    VCSecurityKeyManager * _securityKeyManager;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    NSMutableArray * _startingParticipants;
    unsigned int  _state;
    NSMutableArray * _stoppingParticipants;
    bool  _useReducedSizeRTCP;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <VCSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *idsDestination;
@property (nonatomic, readonly) VCSessionParticipant *localParticipant;
@property (readonly) Class superclass;

- (void)addParticipant:(id)arg1;
- (bool)createDatagramChannel;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)detectSSRCCollision:(id)arg1 resetNeeded:(bool*)arg2;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; unsigned char x4[1472]; unsigned int x5; unsigned char x6[1472]; }*)arg1;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (void)dispatchedAddParticipant:(id)arg1;
- (void)dispatchedParticipant:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)dispatchedParticipant:(id)arg1 didStopWithError:(id)arg2;
- (void)dispatchedRemoveParticipant:(id)arg1;
- (void)dispatchedStart;
- (void)dispatchedStop;
- (void)dispatchedUpdateConfiguration:(id)arg1;
- (bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9; }*)arg1 reportCount:(char *)arg2;
- (void)handleEncryptionInfoChange:(id)arg1;
- (void)handleIDSEncryptionInfoEvent:(id)arg1;
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;
- (id)idsDestination;
- (id)initWithIDSDestination:(id)arg1 configurationDict:(id)arg2 delegate:(id)arg3 localParticipant:(id)arg4;
- (id)localParticipant;
- (void)mediaStream:(id)arg1 didReceiveNewMasterKeyIndex:(unsigned int)arg2;
- (void)optInStreamWithIDSStreamIDs:(id)arg1;
- (void)optOutStreamWithIDSStreamIDs:(id)arg1;
- (id)participantsToString;
- (void)registerRTCPCallbackForParticipant:(id)arg1;
- (void)registerRemoteParticipant:(id)arg1;
- (void)removeParticipant:(id)arg1;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 keyChangeReason:(id)arg2 newMKI:(id)arg3;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2;
- (void)reportingSessionParticipantEvent:(unsigned short)arg1 withParticipant:(id)arg2 streamID:(unsigned int)arg3 keyChangeReason:(id)arg4 newMKI:(id)arg5;
- (char *)sessionStateToString:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)start;
- (void)stop;
- (void)stopAllParticipants;
- (void)unregisterRTCPCallbackForParticipant:(id)arg1;
- (void)unregisterRemoteParticipant:(id)arg1;
- (void)updateConfiguration:(id)arg1;
- (void)updateLocalStreamConfiguration;
- (void)vcSessionParticipant:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)vcSessionParticipant:(id)arg1 didStopWithError:(id)arg2;

@end