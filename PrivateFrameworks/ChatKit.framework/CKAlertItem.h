/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAlertItem : SBAlertItem {
    long long  _alignment;
    bool  _alignmentHasBeenSet;
    bool  _displayingEntireMessage;
    bool  _shouldHideSMSPreview;
}

- (void)_deactivateAllTaggedAlertItems;
- (void)_deactivateTaggedAlertItem;
- (void)_tag;
- (id)_taggedAlertItems;
- (void)_untag;
- (void)didDeactivateForReason:(int)arg1;
- (bool)forcesModalAlertAppearance;
- (id)init;
- (id)lockLabel;
- (id)messageText;
- (id)name;
- (bool)shouldHideSMSPreview;
- (bool)shouldShowInEmergencyCall;
- (bool)shouldShowInLockScreen;
- (void)willActivate;
- (bool)willShowInAwayItems;

@end
