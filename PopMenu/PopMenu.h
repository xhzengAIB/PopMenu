//
//  MenuView.h
//  JackFastKit
//
//  Created by 曾 宪华 on 14-10-13.
//  Copyright (c) 2014年 华捷 iOS软件开发工程师 曾宪华. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuItem.h"

typedef NS_ENUM(NSInteger, PopMenuAnimationType) {
    kPopMenuAnimationTypeSina = 0,
    kPopMenuAnimationTypeNetEase = 1,
};

typedef void(^DidSelectedItemBlock)(MenuItem *selectedItem);

@interface PopMenu : UIView

@property (nonatomic, assign) PopMenuAnimationType menuAnimationType;

@property (nonatomic, assign, readonly) BOOL isShowed;

@property (nonatomic, strong, readonly) NSArray *items;

@property (nonatomic, copy) DidSelectedItemBlock didSelectedItemCompletion;

- (instancetype)initWithFrame:(CGRect)frame
                        items:(NSArray *)items;

- (void)showMenuAtView:(UIView *)containerView;
- (void)showMenuAtView:(UIView *)containerView
            startPoint:(CGPoint)startPoint
              endPoint:(CGPoint)endPoint;
- (void)dismissMenu;

@end
