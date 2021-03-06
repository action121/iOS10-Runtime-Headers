/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGQPResponseKitPredictor : NSObject {
    NSString * _language;
    RKMessageResponseManager * _manager;
    double  _responseKitTypeWeight;
    struct NSDictionary { Class x1; } * _whitelist;
}

+ (id)predictorWithLanguage:(id)arg1 whitelist:(struct NSDictionary { Class x1; }*)arg2 weights:(struct NSDictionary { Class x1; }*)arg3;
+ (void)seedRng:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLanguage:(id)arg1 whitelist:(id)arg2 responseKitTypeWeight:(double)arg3;
- (id)predictionsForMessages:(id)arg1;
- (id)relevantTranscriptFromMessages:(id)arg1;

@end
