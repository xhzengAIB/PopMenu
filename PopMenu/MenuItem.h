//
//  MenuItem.h
//  JackFastKit
//
//  Created by 曾 宪华 on 14-10-13.
//  Copyright (c) 2014年 华捷 iOS软件开发工程师 曾宪华. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MenuItem : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) UIImage *iconImage;
@property (nonatomic, strong) UIColor *glowColor;
@property (nonatomic, assign) NSUInteger index;

- (instancetype)initWithTitle:(NSString *)title
                     iconName:(NSString *)iconName
                    glowColor:(UIColor *)glowColor
                        index:(NSUInteger)index;

@end
