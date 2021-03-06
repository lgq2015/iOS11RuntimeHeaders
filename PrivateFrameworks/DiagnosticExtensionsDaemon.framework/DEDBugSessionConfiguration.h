/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDBugSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsCellularUpload;
    long long  _finishingMove;
    NSString * _radarAuthToken;
    NSNumber * _radarProblemID;
    NSString * _seedingDeviceToken;
    long long  _seedingEnvironment;
    NSString * _seedingHost;
    long long  _seedingSubmissionID;
    long long  _seedingSubmissionType;
}

@property bool allowsCellularUpload;
@property long long finishingMove;
@property (retain) NSString *radarAuthToken;
@property (retain) NSNumber *radarProblemID;
@property (retain) NSString *seedingDeviceToken;
@property long long seedingEnvironment;
@property (retain) NSString *seedingHost;
@property long long seedingSubmissionID;
@property long long seedingSubmissionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsCellularUpload;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)finishingMove;
- (id)initWithCoder:(id)arg1;
- (id)radarAuthToken;
- (id)radarProblemID;
- (id)seedingDeviceToken;
- (long long)seedingEnvironment;
- (id)seedingHost;
- (long long)seedingSubmissionID;
- (long long)seedingSubmissionType;
- (void)setAllowsCellularUpload:(bool)arg1;
- (void)setFinishingMove:(long long)arg1;
- (void)setRadarAuthToken:(id)arg1;
- (void)setRadarProblemID:(id)arg1;
- (void)setSeedingDeviceToken:(id)arg1;
- (void)setSeedingEnvironment:(long long)arg1;
- (void)setSeedingHost:(id)arg1;
- (void)setSeedingSubmissionID:(long long)arg1;
- (void)setSeedingSubmissionType:(long long)arg1;

@end
