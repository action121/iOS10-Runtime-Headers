/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICSearchIndexTransactionInfo : NSObject <ICPropertyListSerializable, NSCopying, NSMutableCopying> {
    NSDictionary * _transactionInfoDictionary;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, copy) NSDictionary *transactionInfoDictionary;
@property (nonatomic, readonly) bool valid;

+ (id)completionTransactionID;
+ (id)invalidTransactionID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (bool)guaranteesCompletionOfTransactionInfo:(id)arg1;
- (id)init;
- (id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2;
- (id)initWithTransactionInfoDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyListObjectRepresentation;
- (void)setTransactionInfoDictionary:(id)arg1;
- (id)transactionIDForName:(id)arg1;
- (id)transactionInfoDictionary;
- (bool)valid;

@end
