/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic, copy) NSString *clientModelVersion;
@property (nonatomic) bool eyesFree;
@property (nonatomic) bool handsFree;
@property (nonatomic) bool talkOnly;
@property (nonatomic) bool textToSpeechIsMuted;
@property (nonatomic, copy) NSArray *voiceTriggerPhrases;
@property (nonatomic) bool wasLaunchedForRequest;

+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientModelVersion;
- (id)encodedClassName;
- (bool)eyesFree;
- (id)groupIdentifier;
- (bool)handsFree;
- (bool)requiresResponse;
- (void)setClientModelVersion:(id)arg1;
- (void)setEyesFree:(bool)arg1;
- (void)setHandsFree:(bool)arg1;
- (void)setTalkOnly:(bool)arg1;
- (void)setTextToSpeechIsMuted:(bool)arg1;
- (void)setVoiceTriggerPhrases:(id)arg1;
- (void)setWasLaunchedForRequest:(bool)arg1;
- (bool)talkOnly;
- (bool)textToSpeechIsMuted;
- (id)voiceTriggerPhrases;
- (bool)wasLaunchedForRequest;

@end