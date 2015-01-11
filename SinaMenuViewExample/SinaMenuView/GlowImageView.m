//
//  GlowImageView.m
//  JackFastKit
//
//  Created by 曾 宪华 on 14-10-13.
//  Copyright (c) 2014年 华捷 iOS软件开发工程师 曾宪华. All rights reserved.
//

#import "GlowImageView.h"

@interface GlowImageView () {
    CGColorSpaceRef colorSpaceRef;
    CGColorRef glowColorRef;
}

@end

@implementation GlowImageView

- (void)setGlowColor:(UIColor *)newGlowColor {
    if (newGlowColor != _glowColor) {
        CGColorRelease(glowColorRef);
        
        _glowColor = newGlowColor;
        glowColorRef = CGColorCreate(colorSpaceRef, CGColorGetComponents(_glowColor.CGColor));
    }
    [self setNeedsDisplay];
}

- (id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
        colorSpaceRef = CGColorSpaceCreateDeviceRGB();
        
        self.glowOffset = CGSizeMake(0.0, 0.0);
        self.glowAmount = 30.0;
        self.glowColor = [UIColor greenColor];
    }
    return self;
}

- (void)dealloc {
    CGColorRelease(glowColorRef);
    CGColorSpaceRelease(colorSpaceRef);
}

// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    
    // Drawing code
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSaveGState(context);
    
    CGContextSetShadow(context, self.glowOffset, self.glowAmount);
    CGContextSetShadowWithColor(context, self.glowOffset, self.glowAmount, glowColorRef);
    
    CGContextRestoreGState(context);
}

@end
