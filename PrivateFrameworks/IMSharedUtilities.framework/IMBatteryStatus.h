/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMBatteryStatus : NSObject {
    <IMBatteryStatusTestDelegate> * _testDelegate;
}

@property (getter=isCharging, readonly) bool charging;

- (bool)isCharging;
- (void)setTestDelegate:(id)arg1;

@end
