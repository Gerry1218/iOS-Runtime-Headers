/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSString;

@interface SWSyncHost : NSObject {
    NSString *_hostName;
    BOOL _secure;
}

@property(readonly) NSString * hostName;
@property(readonly) NSString * scheme;
@property(getter=isSecure) BOOL secure;

+ (id)developmentSyncHost;
+ (id)productionLandingPageHost;
+ (id)productionSyncHost;

- (void)dealloc;
- (id)generatePINServiceURL;
- (id)generateTokenServiceURL;
- (id)getPINStatusServiceURL;
- (id)hostName;
- (id)initWithHostName:(id)arg1 secure:(BOOL)arg2;
- (BOOL)isSecure;
- (id)loginURLForToken:(id)arg1;
- (id)scheme;
- (void)setSecure:(BOOL)arg1;
- (id)syncCompleteServiceURL;
- (id)syncServiceURL;

@end
