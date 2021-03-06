/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRPunchoutCommand : CRBasicPayloadCommand <CRPayloadCommand> {
    SFPunchout * _punchout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NSSecureCoding> *payload;
@property (nonatomic, retain) SFPunchout *punchout;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (void).cxx_destruct;
- (id)payload;
- (id)punchout;
- (void)setPunchout:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (id)crk_backingPunchout;
- (unsigned long long)crk_intrinsicInteractiveBehavior;
- (bool)handleForCardViewController:(id)arg1;

@end
