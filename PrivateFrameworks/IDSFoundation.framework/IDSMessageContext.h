/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSMutableDictionary, NSString;

@interface IDSMessageContext : NSObject {
    id _boostContext;
    NSMutableDictionary *_dict;
}

@property(retain) id boostContext;
@property BOOL expectsPeerResponse;
@property(copy) NSString * incomingResponseIdentifier;
@property(copy) NSString * outgoingResponseIdentifier;
@property(copy) NSString * storageGuid;
@property BOOL wantsAppAck;

- (id)boostContext;
- (void)dealloc;
- (BOOL)expectsPeerResponse;
- (id)incomingResponseIdentifier;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)outgoingResponseIdentifier;
- (void)setBoostContext:(id)arg1;
- (void)setExpectsPeerResponse:(BOOL)arg1;
- (void)setIncomingResponseIdentifier:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOutgoingResponseIdentifier:(id)arg1;
- (void)setStorageGuid:(id)arg1;
- (void)setWantsAppAck:(BOOL)arg1;
- (id)storageGuid;
- (BOOL)wantsAppAck;

@end
