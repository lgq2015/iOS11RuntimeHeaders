/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTHeadline : NSObject <NTHeadlineProviding> {
    NSURL * _NewsURL;
    NTPBHeadlineAdElement * _adElement;
    NSDate * _ageDisplayDate;
    NTPBHeadlineAnalyticsElement * _analyticsElement;
    NTPBHeadlineBackingElement * _backingElement;
    bool  _displaysWithLeadingCellAppearance;
    NSURL * _flintDocumentURL;
    NSString * _identifier;
    bool  _needsSeenStateTracking;
    NTHeadlinePersonalizationMetadata * _personalizationMetadata;
    SFSearchResult * _searchResult;
    NSString * _shortExcerpt;
    NSString * _sourceIdentifier;
    NSString * _sourceName;
    NSURL * _sourceNameImageRemoteURL;
    double  _sourceNameImageScale;
    NSString * _storyType;
    bool  _supportsSavingForLater;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailFocalFrame;
    NSURL * _thumbnailRemoteURL;
    unsigned long long  _thumbnailSizePreset;
    NSString * _title;
    NSString * _titleCompact;
    double  _videoDuration;
    NSURL * _videoURL;
    NSURL * _webURL;
}

@property (nonatomic, copy) NSURL *NewsURL;
@property (nonatomic, copy) NTPBHeadlineAdElement *adElement;
@property (nonatomic, copy) NSDate *ageDisplayDate;
@property (nonatomic, copy) NTPBHeadlineAnalyticsElement *analyticsElement;
@property (nonatomic, copy) NTPBHeadlineBackingElement *backingElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysWithLeadingCellAppearance;
@property (nonatomic, copy) NSURL *flintDocumentURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic) bool needsSeenStateTracking;
@property (nonatomic, copy) NTHeadlinePersonalizationMetadata *personalizationMetadata;
@property (nonatomic, copy) SFSearchResult *searchResult;
@property (nonatomic, copy) NSString *shortExcerpt;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, copy) NSString *sourceName;
@property (nonatomic, copy) NSURL *sourceNameImageRemoteURL;
@property (nonatomic) double sourceNameImageScale;
@property (nonatomic, copy) NSString *storyType;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsSavingForLater;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailFocalFrame;
@property (nonatomic, copy) NSURL *thumbnailRemoteURL;
@property (nonatomic) unsigned long long thumbnailSizePreset;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleCompact;
@property (nonatomic) double videoDuration;
@property (nonatomic, copy) NSURL *videoURL;
@property (nonatomic, copy) NSURL *webURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)NewsURL;
- (id)adElement;
- (id)ageDisplayDate;
- (id)analyticsElement;
- (id)backingElement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)displaysWithLeadingCellAppearance;
- (void)encodeWithCoder:(id)arg1;
- (id)flintDocumentURL;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemType;
- (bool)needsSeenStateTracking;
- (id)personalizationMetadata;
- (id)searchResult;
- (void)setAdElement:(id)arg1;
- (void)setAgeDisplayDate:(id)arg1;
- (void)setAnalyticsElement:(id)arg1;
- (void)setBackingElement:(id)arg1;
- (void)setDisplaysWithLeadingCellAppearance:(bool)arg1;
- (void)setFlintDocumentURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNeedsSeenStateTracking:(bool)arg1;
- (void)setNewsURL:(id)arg1;
- (void)setPersonalizationMetadata:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceNameImageRemoteURL:(id)arg1;
- (void)setSourceNameImageScale:(double)arg1;
- (void)setStoryType:(id)arg1;
- (void)setSupportsSavingForLater:(bool)arg1;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThumbnailRemoteURL:(id)arg1;
- (void)setThumbnailSizePreset:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleCompact:(id)arg1;
- (void)setVideoDuration:(double)arg1;
- (void)setVideoURL:(id)arg1;
- (void)setWebURL:(id)arg1;
- (id)shortExcerpt;
- (id)sourceIdentifier;
- (id)sourceName;
- (id)sourceNameImageRemoteURL;
- (double)sourceNameImageScale;
- (id)storyType;
- (bool)supportsSavingForLater;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailRemoteURL;
- (unsigned long long)thumbnailSizePreset;
- (id)title;
- (id)titleCompact;
- (double)videoDuration;
- (id)videoURL;
- (id)webURL;

@end