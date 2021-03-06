/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFHTTPResponseInternal : NSObject <NSCopying> {
    NSData * _body;
    NSDictionary * _headerFields;
    long long  _statusCode;
}

@property (nonatomic, copy) NSData *body;
@property (nonatomic, readonly) NSDictionary *headerFields;
@property (nonatomic, readonly) long long statusCode;

- (void).cxx_destruct;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)headerFields;
- (id)init;
- (id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3;
- (void)setBody:(id)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;
- (long long)statusCode;

@end
