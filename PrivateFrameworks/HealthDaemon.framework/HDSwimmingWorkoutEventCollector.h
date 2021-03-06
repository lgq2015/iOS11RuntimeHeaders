/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSwimmingWorkoutEventCollector : HDWorkoutEventCollector {
    NSDate * _currentSegmentStartDate;
    CMSwimData * _lastSwimData;
    CMSwimData * _referenceSwimData;
    CMSwimTracker * _swimTracker;
    NSObject<OS_dispatch_queue> * _workoutEventQueue;
}

+ (bool)isAvailableInCurrentHardware;

- (void).cxx_destruct;
- (void)_queue_addLapEventForSwimData:(id)arg1;
- (void)_queue_addSegmentEventForSwimData:(id)arg1;
- (void)_queue_addSegmentEventWithFallbackEndDate:(id)arg1;
- (void)_queue_errorOccurred:(id)arg1;
- (void)_queue_processSwimData:(id)arg1 error:(id)arg2;
- (void)_queue_querySwimDataWithCompletion:(id /* block */)arg1;
- (void)_queue_startCollectionWithSessionId:(id)arg1;
- (void)_queue_stopCollection;
- (void)immediateUpdateWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (bool)supportsWorkoutActivityType:(unsigned long long)arg1;

@end
