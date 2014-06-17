/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVAsset;

@interface MPStoreAsset : NSObject  {
    unsigned long long _storeAssetType;
    AVAsset *_asset;
}

@property unsigned long long storeAssetType;
@property(retain) AVAsset * asset;

+ (id)assetForContext:(id)arg1 allowCloudDialogue:(bool)arg2;
+ (void)setShouldAlwaysAirPlayFromCloud:(bool)arg1;

- (unsigned long long)storeAssetType;
- (void)setStoreAssetType:(unsigned long long)arg1;
- (id)asset;
- (void).cxx_destruct;
- (void)setAsset:(id)arg1;

@end