/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceprint : NSObject <CVMLFaceprintModel, NSCoding> {
    NSData * _faceprint;
    NSString * _faceprintInputPath;
    NSString * _key;
    unsigned int  _platform;
    unsigned int  _profile;
}

@property (retain) NSData *faceprint;
@property (copy) NSString *faceprintInputPath;
@property (copy) NSString *key;
@property unsigned int platform;
@property unsigned int profile;

- (void).cxx_destruct;
- (id)computeDistanceToFaceprint:(id)arg1 withDistanceFunction:(long long)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)faceprint;
- (id)faceprintInputPath;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (unsigned int)platform;
- (unsigned int)profile;
- (void)setFaceprint:(id)arg1;
- (void)setFaceprintInputPath:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setProfile:(unsigned int)arg1;

@end
