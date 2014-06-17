/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class <RUIWebContainerViewDelegate>, UIWebView;

@interface RUIWebContainerView : UIView <UIWebViewDelegate> {
    bool_highlighted;
    bool_reallyHighlighted;
    UIWebView *_webView;
    <RUIWebContainerViewDelegate> *_delegate;
}

@property(readonly) UIWebView * webView;
@property(getter=isHighlighted) bool highlighted;
@property <RUIWebContainerViewDelegate> * delegate;


- (double)heightForWidth:(double)arg1;
- (id)initWithContent:(id)arg1 baseURL:(id)arg2;
- (void)_setHighlightedNow;
- (id)webView;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)setUserStyleSheet:(id)arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)layoutSubviews;

@end