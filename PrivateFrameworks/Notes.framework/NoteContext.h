/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class CPExclusiveLock, NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSNumber, NSPersistentStoreCoordinator, NSPredicate, NSString, NoteAccountObject, NoteStoreObject;

@interface NoteContext : NSObject {
    struct __CXIndex { } *__SharedNoteStoreSearchIndex;
    int __SharedNoteStoreSearchIndexCount;
    CPExclusiveLock *__SharedNoteStoreSearchIndexLock;
    BOOL _hasPriorityInSaveConflicts;
    BOOL _inMigrator;
    BOOL _indexInBatches;
    BOOL _isIndexing;
    NoteAccountObject *_localAccount;
    NoteStoreObject *_localStore;
    BOOL _logChanges;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSNumber *_nextId;
    NSManagedObjectContext *_nextIdContext;
    CPExclusiveLock *_nextIdLock;
    NSMutableDictionary *_notePropertyObjectsRealized;
    unsigned int _notificationCount;
    CPExclusiveLock *_objectCreationLock;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_searchPredicate;
    NSString *_testingFilePath;
    NSString *_testingFilePrefix;
}

@property(readonly) BOOL isIndexing;
@property(retain,readonly) NSManagedObjectContext * managedObjectContext;

+ (BOOL)shouldLogIndexing;

- (void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2;
- (id)_notePropertyObjectForKey:(id)arg1;
- (id)accountForAccountId:(id)arg1;
- (id)allAccounts;
- (id)allNotes;
- (id)allNotesInCollection:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)allStores;
- (id)allVisibleNotes;
- (id)allVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (void)cleanUpLocks;
- (void)clearCaches;
- (id)collectionForInfo:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (id)copyNotesForSearch:(void*)arg1 complete:(char *)arg2;
- (id)copyNotesForSearch:(void*)arg1 predicate:(id)arg2 complete:(char *)arg3;
- (unsigned int)countOfNotes;
- (unsigned int)countOfNotesInCollection:(id)arg1;
- (unsigned int)countOfNotesMatchingPredicate:(id)arg1;
- (unsigned int)countOfStores;
- (unsigned int)countOfVisibleNotes;
- (unsigned int)countOfVisibleNotesInCollection:(id)arg1;
- (unsigned int)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (void)dealloc;
- (id)defaultStoreForNewNote;
- (BOOL)deleteAccount:(id)arg1;
- (void)deleteChanges:(id)arg1;
- (BOOL)deleteIndexFile;
- (void)deleteNote:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (BOOL)deleteStore:(id)arg1;
- (void)destroySearchIndex;
- (void)enableChangeLogging:(BOOL)arg1;
- (BOOL)forceDeleteAccount:(id)arg1;
- (void)forceSetUpUniqueObjects;
- (id)getNextIdObject;
- (void)handleMigration;
- (BOOL)handleSaveErrors:(id)arg1;
- (BOOL)hasMultipleEnabledStores;
- (void)indexInBatches:(BOOL)arg1;
- (void)indexNotes:(id)arg1;
- (id)init;
- (id)initForMigrator;
- (id)initWithTestingFilePrefix:(id)arg1 atPath:(id)arg2 inMigrator:(BOOL)arg3;
- (id)initWithTestingFilePrefix:(id)arg1 inMigrator:(BOOL)arg2;
- (id)initWithTestingFilePrefix:(id)arg1;
- (void)invalidate;
- (BOOL)isIndexing;
- (id)liveNotesNeedingBodiesPredicate;
- (id)localAccount;
- (id)localStore;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)newFetchRequestForNotes;
- (void*)newSearchContextWithText:(id)arg1;
- (id)newlyAddedAccount;
- (id)newlyAddedNote;
- (id)newlyAddedStore;
- (id)nextIndex;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (id)noteForObjectID:(id)arg1;
- (BOOL)noteIsSafeToAccess:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesToResumeIndexing;
- (id)pathForIndex;
- (id)pathForPersistentStore;
- (id)persistentStoreCoordinator;
- (id)propertyValueForKey:(id)arg1;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1;
- (void)removeConflictingSqliteAndIdxFiles;
- (void)removeSqliteAndIdxFiles;
- (void)resetNotificationCount;
- (void)resumeIndexing;
- (id)rootDirectory;
- (BOOL)save:(id*)arg1;
- (void)saveNotesToResumeIndexing:(id)arg1;
- (BOOL)saveOutsideApp:(id*)arg1;
- (BOOL)saveSilently:(id*)arg1;
- (struct __CXIndex { }*)searchIndex:(char *)arg1;
- (void)setHasPriorityInSaveConflicts:(BOOL)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)setUpCoreDataStack;
- (BOOL)setUpLastIndexTid;
- (BOOL)setUpLocalAccountAndStore;
- (void)setUpUniqueObjects;
- (BOOL)shouldDisableLocalStore;
- (BOOL)shouldResumeIndexing;
- (void)sortNotes:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (void)tearDownCoreDataStack;
- (void)trackChanges:(id)arg1;
- (void)updateSearchIndex:(id)arg1;
- (id)urlForPersistentStore;
- (id)visibleNoteForObjectID:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNotesPredicate;
- (void)wrapUpIndexing;

@end