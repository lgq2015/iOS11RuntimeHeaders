/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGRealtimeContact : NSObject <NSCopying, NSSecureCoding, SGRealtimeSuggestion> {
    NSString * _cnContactIdentifier;
    SGContact * _contact;
    unsigned long long  _extractionType;
    bool  _isHarvested;
    int  _state;
}

@property (nonatomic, readonly) NSString *cnContactIdentifier;
@property (nonatomic, readonly) SGContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long extractionType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHarvested;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;

+ (id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(id)arg2;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cnContactIdentifier;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)extractionType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(int)arg1 contact:(id)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealtimeContact:(id)arg1;
- (bool)isHarvested;
- (id)markedAsHarvested;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setExtractionType;
- (int)state;

@end