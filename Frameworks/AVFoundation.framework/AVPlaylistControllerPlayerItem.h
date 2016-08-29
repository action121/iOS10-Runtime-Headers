/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaylistControllerPlayerItem : AVPlayerItem {
    bool  _duringInit;
    struct OpaqueFigPlaybackItem { } * _figPlaybackItem;
}

+ (id)playerItemWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 player:(id)arg2;

- (void)dealloc;
- (id)initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 player:(id)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;

@end