//
//  MenuButton.h
//  JackFastKit
//
//  Created by 曾 宪华 on 14-10-13.
//  Copyright (c) 2014年 华捷 iOS软件开发工程师 曾宪华. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MenuItem;

typedef void(^DidSelctedItemCompletedBlock)(MenuItem *menuItem);


@interface MenuButton : UIView

@property (nonatomic, copy) DidSelctedItemCompletedBlock didSelctedItemCompleted;

- (instancetype)initWithFrame:(CGRect)frame
                     menuItem:(MenuItem *)menuItem;

@end
