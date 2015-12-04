#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@protocol PPSSignatureDelegate <NSObject>

@optional

- (void)onErase:(id)sender;
- (void)onStrokeBegin:(id)sender;

@end

@interface PPSSignatureView : GLKView

@property (nonatomic, assign) UIColor *strokeColor;
@property (nonatomic, assign) BOOL hasSignature;
@property (nonatomic, strong) UIImage *signatureImage;

@property (nonatomic, weak) id<PPSSignatureDelegate> signatureDelegate;

- (void)erase;

@end
