/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPersonChange : CPLRecordChange {
    NSString * _fullName;
    long long  _manualSortOrder;
    NSString * _personID;
    long long  _personType;
}

@property (nonatomic, copy) NSString *fullName;
@property (nonatomic) long long manualSortOrder;
@property (nonatomic, copy) NSString *personID;
@property (nonatomic) long long personType;

- (void).cxx_destruct;
- (id)fullName;
- (long long)manualSortOrder;
- (id)personID;
- (long long)personType;
- (void)setFullName:(id)arg1;
- (void)setManualSortOrder:(long long)arg1;
- (void)setPersonID:(id)arg1;
- (void)setPersonType:(long long)arg1;
- (bool)supportsDeletion;

@end