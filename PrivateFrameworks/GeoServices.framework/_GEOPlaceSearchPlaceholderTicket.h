/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchPlaceholderTicket : NSObject <GEOMapServiceSearchFieldPlaceholderTicket> {
    bool  _canceled;
    GEOPDPlaceRequest * _request;
    GEOPDPlaceResponse * _response;
    GEOMapServiceTraits * _traits;
    NSDictionary * _userInfo;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (bool)isCanceled;
- (id)responseUserInfo;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (id)traits;

@end