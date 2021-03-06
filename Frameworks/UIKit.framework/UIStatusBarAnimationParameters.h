/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIBasicAnimationFactory>;

@interface UIStatusBarAnimationParameters : NSObject {
    <_UIBasicAnimationFactory> *_animationFactory;
    int _curve;
    double _delay;
    double _duration;
    double _startTime;
}

@property(retain) <_UIBasicAnimationFactory> * animationFactory;
@property int curve;
@property double delay;
@property double duration;
@property double startTime;

+ (void)animateWithParameters:(id)arg1 animations:(id)arg2 completion:(id)arg3;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 animations:(id)arg3 completion:(id)arg4;
+ (void)animateWithParameters:(id)arg1 fromCurrentState:(BOOL)arg2 frameInterval:(float)arg3 animations:(id)arg4 completion:(id)arg5;

- (id)animationFactory;
- (int)curve;
- (void)dealloc;
- (double)delay;
- (double)duration;
- (id)init;
- (id)initWithDefaultParameters;
- (id)initWithEmptyParameters;
- (void)setAnimationFactory:(id)arg1;
- (void)setCurve:(int)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setStartTime:(double)arg1;
- (BOOL)shouldAnimate;
- (double)startTime;

@end
