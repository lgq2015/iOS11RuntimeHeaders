/* Generated by RuntimeBrowser.
 */

@protocol HFAccessorySettingsObserver <HMAccessorySettingsDelegate>

@optional

- (void)accessorySettings:(HMAccessorySettings *)arg1 didUpdateSetting:(HMAccessorySetting *)arg2;
- (void)accessorySettings:(HMAccessorySettings *)arg1 didWriteValueForSettings:(NSSet *)arg2 failedSettings:(NSSet *)arg3;
- (void)accessorySettings:(HMAccessorySettings *)arg1 willWriteValueForSettings:(NSSet *)arg2;

@end