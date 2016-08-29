/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFCollectionView : UICollectionView {
    id  _dataSourceAdaptor;
    id  _delegateAdaptor;
    UIColor * _pdfBackgroundColor;
    <PDFCollectionViewDataSource> * _pdfDataSource;
    <PDFCollectionViewDelegate> * _pdfDelegate;
}

@property (nonatomic, copy) UIColor *pdfBackgroundColor;
@property (nonatomic, retain) <PDFCollectionViewDataSource> *pdfDataSource;
@property (nonatomic, retain) <PDFCollectionViewDelegate> *pdfDelegate;

+ (Class)classForPlatform;
+ (id)instanceForPlatform;

- (void).cxx_destruct;
- (id)pdfBackgroundColor;
- (id)pdfDataSource;
- (id)pdfDelegate;
- (void)setPdfBackgroundColor:(id)arg1;
- (void)setPdfDataSource:(id)arg1;
- (void)setPdfDelegate:(id)arg1;

@end