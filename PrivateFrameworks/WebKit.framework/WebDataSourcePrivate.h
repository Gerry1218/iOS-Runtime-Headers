/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <WebDocumentRepresentation>, NSError, NSURLRequest, NSURLResponse, WebUnarchivingState;

@interface WebDataSourcePrivate : NSObject {
    struct WebDocumentLoaderMac { int (**x1)(); NSInteger x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct Frame {} *x4; struct RefPtr<WebCore::MainResourceLoader> { 
            struct MainResourceLoader {} *m_ptr; 
        } x5; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
            struct HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<int32_t>,WTF::HashTraits<int32_t>,WTF::HashTraits<int32_t> > { 
                NSInteger *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x6; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
            struct HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<int32_t>,WTF::HashTraits<int32_t>,WTF::HashTraits<int32_t> > { 
                NSInteger *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x7; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
            struct HashTable<int,int,WTF::IdentityExtractor<int>,WTF::IntHash<int32_t>,WTF::HashTraits<int32_t>,WTF::HashTraits<int32_t> > { 
                NSInteger *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x8; struct RefPtr<WebCore::SharedBuffer> { 
            struct SharedBuffer {} *m_ptr; 
        } x9; struct ResourceRequest { 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_mainDocumentURL; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HashMap<WebCore::String,WebCore::String,WebCore::CaseFoldingHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::String> > { 
                struct HashTable<WebCore::StringImpl*,std::pair<WebCore::StringImpl*, int>,WTF::PairFirstExtractor<std::pair<WebCore::StringImpl*, int> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::StringImpl*>, WTF::HashTraits<int32_t> >,WTF::HashTraits<WebCore::StringImpl*> > { 
                    struct pair<WebCore::StringImpl*,int> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowHTTPCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x10; struct SubstituteData { 
            struct RefPtr<WebCore::SharedBuffer> { 
                struct SharedBuffer {} *m_ptr; 
            } m_content; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_mimeType; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_textEncoding; 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_failingURL; 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_responseURL; 
        } x11; struct ResourceRequest { 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_mainDocumentURL; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HashMap<WebCore::String,WebCore::String,WebCore::CaseFoldingHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::String> > { 
                struct HashTable<WebCore::StringImpl*,std::pair<WebCore::StringImpl*, int>,WTF::PairFirstExtractor<std::pair<WebCore::StringImpl*, int> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::StringImpl*>, WTF::HashTraits<int32_t> >,WTF::HashTraits<WebCore::StringImpl*> > { 
                    struct pair<WebCore::StringImpl*,int> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowHTTPCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x12; struct ResourceRequest { 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_mainDocumentURL; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HashMap<WebCore::String,WebCore::String,WebCore::CaseFoldingHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::String> > { 
                struct HashTable<WebCore::StringImpl*,std::pair<WebCore::StringImpl*, int>,WTF::PairFirstExtractor<std::pair<WebCore::StringImpl*, int> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::StringImpl*>, WTF::HashTraits<int32_t> >,WTF::HashTraits<WebCore::StringImpl*> > { 
                    struct pair<WebCore::StringImpl*,int> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowHTTPCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x13; struct ResourceRequest { 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_mainDocumentURL; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HashMap<WebCore::String,WebCore::String,WebCore::CaseFoldingHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::String> > { 
                struct HashTable<WebCore::StringImpl*,std::pair<WebCore::StringImpl*, int>,WTF::PairFirstExtractor<std::pair<WebCore::StringImpl*, int> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::StringImpl*>, WTF::HashTraits<int32_t> >,WTF::HashTraits<WebCore::StringImpl*> > { 
                    struct pair<WebCore::StringImpl*,int> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowHTTPCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x14; struct ResourceResponse { 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_url; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_mimeType; 
            long long m_expectedContentLength; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_textEncodingName; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_suggestedFilename; 
            NSInteger m_httpStatusCode; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpStatusText; 
            struct HashMap<WebCore::String,WebCore::String,WebCore::CaseFoldingHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::String> > { 
                struct HashTable<WebCore::StringImpl*,std::pair<WebCore::StringImpl*, int>,WTF::PairFirstExtractor<std::pair<WebCore::StringImpl*, int> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::StringImpl*>, WTF::HashTraits<int32_t> >,WTF::HashTraits<WebCore::StringImpl*> > { 
                    struct pair<WebCore::StringImpl*,int> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            NSInteger m_expirationDate; 
            NSInteger m_lastModifiedDate; 
            void*m_isUpToDate; 
            void*m_isNull; 
            struct RetainPtr<NSURLResponse> { 
                NSURLResponse *m_ptr; 
            } m_nsResponse; 
        } x15; struct ResourceError { 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_domain; 
            NSInteger m_errorCode; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_failingURL; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_localizedDescription; 
            void*m_dataIsUpToDate; 
            struct RetainPtr<NSError> { 
                NSError *m_ptr; 
            } m_platformError; 
            void*m_isNull; 
        } x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x24; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x25; struct NavigationAction { 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_URL; 
            NSInteger m_type; 
            struct RefPtr<WebCore::Event> { 
                struct Event {} *m_ptr; 
            } m_event; 
        } x26; struct ResourceRequest { 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct DeprecatedString { 
                    struct DeprecatedStringData {} **dataHandle; 
                    struct DeprecatedStringData { 
                        NSUInteger refCount; 
                        NSUInteger _length; 
                        struct DeprecatedChar {} *_unicode; 
                        char *_ascii; 
                        unsigned int _maxUnicode : 30; 
                        unsigned int _isUnicodeValid : 1; 
                        unsigned int _isHeapAllocated : 1; 
                        unsigned int _maxAscii : 31; 
                        unsigned int _isAsciiValid : 1; 
                        BOOL _internalBuffer[20]; 
                    } internalData; 
                } urlString; 
                void*m_isValid; 
                NSInteger schemeEndPos; 
                NSInteger userStartPos; 
                NSInteger userEndPos; 
                NSInteger passwordEndPos; 
                NSInteger hostEndPos; 
                NSInteger portEndPos; 
                NSInteger pathEndPos; 
                NSInteger queryEndPos; 
                NSInteger fragmentEndPos; 
            } m_mainDocumentURL; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HashMap<WebCore::String,WebCore::String,WebCore::CaseFoldingHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::String> > { 
                struct HashTable<WebCore::StringImpl*,std::pair<WebCore::StringImpl*, int>,WTF::PairFirstExtractor<std::pair<WebCore::StringImpl*, int> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::StringImpl*>, WTF::HashTraits<int32_t> >,WTF::HashTraits<WebCore::StringImpl*> > { 
                    struct pair<WebCore::StringImpl*,int> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowHTTPCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x27; struct Vector<WebCore::ResourceResponse,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::ResourceResponse,0ul> { 
                struct ResourceResponse {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x28; void*x29; struct HashMap<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::SubstituteResource>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > > { 
            struct HashTable<int,std::pair<int, int>,WTF::PairFirstExtractor<std::pair<int, int> >,WTF::IntHash<int32_t>,WTF::PairHashTraits<WTF::HashTraits<int32_t>, WTF::HashTraits<int32_t> >,WTF::HashTraits<int32_t> > { 
                struct pair<int,int> {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x30; struct Timer<WebCore::DocumentLoader> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            NSInteger m_heapIndex; 
            NSUInteger m_heapInsertionOrder; 
            struct DocumentLoader {} *m_object; 
            struct { 
                void**__pfn; 
            } m_function; 
        } x31; struct RefPtr<WebCore::ApplicationCache> { 
            struct ApplicationCache {} *m_ptr; 
        } x32; struct ApplicationCacheGroup {} *x33; struct RefPtr<WebCore::ApplicationCache> { 
            struct ApplicationCache {} *m_ptr; 
        } x34; id x35; void*x36; void*x37; void*x38; unsigned int x39/* : ? */; void*x40; void*x41; void*x42; void*x43; unsigned short x44; out void*x45; const BOOL x46; void*x47; void*x48; void*x49; struct RetainPtr<objc_object*> { 
            id m_ptr; 
        } x50; struct RetainPtr<objc_object*> { 
            id m_ptr; 
        } x51; struct HashSet<long unsigned int,WTF::IntHash<uintptr_t>,WTF::HashTraits<long unsigned int> > { 
            struct HashTable<long unsigned int,long unsigned int,WTF::IdentityExtractor<long unsigned int>,WTF::IntHash<uintptr_t>,WTF::HashTraits<long unsigned int>,WTF::HashTraits<long unsigned int> > { 
                unsigned long *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x52; } *loader;
    <WebDocumentRepresentation> *representation;
    BOOL representationFinishedLoading;
    WebUnarchivingState *unarchivingState;
}

+ (void)initialize;

- (void)dealloc;
- (void)finalize;

@end