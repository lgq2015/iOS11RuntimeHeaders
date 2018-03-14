/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHScatterElementBuilder : TSCHLineAreaScatterElementBuilder

- (unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath {}***)arg4 outSelectionKnobLocations:(id*)arg5;
- (bool)needsSeparateHitTestingPaths;
- (void)p_addKnobsForPoint:(struct CGPoint { double x1; double x2; })arg1 strokedUnitSymbolRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toKnobSet:(id)arg3 symbolsShowing:(bool)arg4 includePoint:(bool)arg5;
- (void)p_addTopStroke:(struct { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; id x3; }*)arg1 toPath:(struct CGPath { }*)arg2 withPointsArray:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5;

@end