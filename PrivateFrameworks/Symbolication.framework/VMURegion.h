/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUSymbolOwner, NSString;



@interface VMURegion : VMUAddressRange <NSCoding, NSCopying>
{
    VMUSymbolOwner *_owner;
    NSString *_name;
}

+ (id)regionWithOwner:(id)arg1 name:(id)arg2 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3;

- (id)initWithOwner:(id)arg1 name:(id)arg2 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3;
- (BOOL)isEqualToRegion:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (id)owner;
- (void)setOwner:(id)arg1;
- (NSInteger)compare:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end