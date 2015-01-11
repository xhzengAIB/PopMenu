//
//  MenuView.h
//  JackFastKit
//
//  Created by 曾 宪华 on 14-10-13.
//  Copyright (c) 2014年 华捷 iOS软件开发工程师 曾宪华. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MenuItem.h"

typedef void(^DidSelectedItemBlock)(MenuItem *selectedItem);

@interface MenuView : UIView

@property (nonatomic, strong, readonly) NSArray *items;

@property (nonatomic, copy) DidSelectedItemBlock didSelectedItemCompletion;

- (instancetype)initWithFrame:(CGRect)frame
                        items:(NSArray *)items;

- (void)showMenuAtView:(UIView *)containerView;
- (void)dismissMenu;

@end
