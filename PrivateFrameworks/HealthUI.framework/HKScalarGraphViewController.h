/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKScalarGraphViewController : HKGraphViewController {
    double  _minimumHeight;
}

@property (nonatomic, readonly) double minimumHeight;

- (id)_buildGraphViewWithLabelDimension:(id)arg1;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (void)_setupGraphViewSelectionStyle;
- (id)initWithMinimumHeight:(double)arg1;
- (id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2;
- (void)loadView;
- (double)minimumHeight;
- (void)viewDidLoad;

@end