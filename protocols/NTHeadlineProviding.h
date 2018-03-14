/* Generated by RuntimeBrowser.
 */

@protocol NTHeadlineProviding <NSObject, NSCopying, NSSecureCoding, NTTodayItem>

@required

- (NSURL *)NewsURL;
- (NSObject<NTHeadlineAdElement> *)adElement;
- (NSDate *)ageDisplayDate;
- (NSObject<NTHeadlineAnalyticsElementProviding> *)analyticsElement;
- (NSObject<NTHeadlineBackingElement> *)backingElement;
- (bool)displaysWithLeadingCellAppearance;
- (NSURL *)flintDocumentURL;
- (NSString *)identifier;
- (NSObject<NTHeadlinePersonalizationMetadata> *)personalizationMetadata;
- (SFSearchResult *)searchResult;
- (NSString *)shortExcerpt;
- (NSString *)sourceIdentifier;
- (NSString *)sourceName;
- (NSURL *)sourceNameImageRemoteURL;
- (double)sourceNameImageScale;
- (NSString *)storyType;
- (bool)supportsSavingForLater;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (NSURL *)thumbnailRemoteURL;
- (unsigned long long)thumbnailSizePreset;
- (NSString *)title;
- (NSString *)titleCompact;
- (double)videoDuration;
- (NSURL *)videoURL;
- (NSURL *)webURL;

@end