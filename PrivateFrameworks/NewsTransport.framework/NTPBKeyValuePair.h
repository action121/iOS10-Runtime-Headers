/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBKeyValuePair : PBCodable <NSCopying> {
    NTPBCacheCoordinatorHints * _cacheCoordinatorHintsValue;
    NSData * _dataValue;
    NTPBDate * _dateValue;
    struct { 
        unsigned int valueType : 1; 
    }  _has;
    NSString * _key;
    NTPBNetworkSessionList * _networkSessionList;
    NTPBPersonalizationLocalData * _personalizationLocalData;
    NTPBReadingHistoryItem * _readingHistoryItem;
    NSData * _recordData;
    NSString * _stringValue;
    int  _valueType;
}

@property (nonatomic, retain) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) NTPBDate *dateValue;
@property (nonatomic, readonly) bool hasCacheCoordinatorHintsValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasDateValue;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasNetworkSessionList;
@property (nonatomic, readonly) bool hasPersonalizationLocalData;
@property (nonatomic, readonly) bool hasReadingHistoryItem;
@property (nonatomic, readonly) bool hasRecordData;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasValueType;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NTPBNetworkSessionList *networkSessionList;
@property (nonatomic, retain) NTPBPersonalizationLocalData *personalizationLocalData;
@property (nonatomic, retain) NTPBReadingHistoryItem *readingHistoryItem;
@property (nonatomic, retain) NSData *recordData;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int valueType;

- (id)cacheCoordinatorHintsValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)dateValue;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCacheCoordinatorHintsValue;
- (bool)hasDataValue;
- (bool)hasDateValue;
- (bool)hasKey;
- (bool)hasNetworkSessionList;
- (bool)hasPersonalizationLocalData;
- (bool)hasReadingHistoryItem;
- (bool)hasRecordData;
- (bool)hasStringValue;
- (bool)hasValueType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (id)networkSessionList;
- (id)personalizationLocalData;
- (bool)readFrom:(id)arg1;
- (id)readingHistoryItem;
- (id)recordData;
- (void)setCacheCoordinatorHintsValue:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setHasValueType:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setNetworkSessionList:(id)arg1;
- (void)setPersonalizationLocalData:(id)arg1;
- (void)setReadingHistoryItem:(id)arg1;
- (void)setRecordData:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setValueType:(int)arg1;
- (id)stringValue;
- (int)valueType;
- (void)writeTo:(id)arg1;

@end