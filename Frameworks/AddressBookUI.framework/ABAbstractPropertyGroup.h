/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, NSArray;

@interface ABAbstractPropertyGroup : NSObject {
    BOOL _hasChanges;
    NSArray *_people;
    <ABStyleProvider> *_styleProvider;
}

@property BOOL hasChanges;
@property(retain) NSArray * people;
@property(retain) <ABStyleProvider> * styleProvider;

- (BOOL)canSave;
- (void)dealloc;
- (BOOL)hasChanges;
- (id)init;
- (id)people;
- (int)property;
- (void)reloadFromModel;
- (void)setHasChanges:(BOOL)arg1;
- (void)setPeople:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)updateRecord;

@end