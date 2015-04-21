//
//  XHRealTimeBlur.h
//  XHRealTimeBlurExample
//
//  Created by 曾 宪华 on 14-9-7.
//  Copyright (c) 2014年 曾宪华 QQ群: (142557668) QQ:543413507  Gmail:xhzengAIB@gmail.com. All rights reserved.
//
// ==========================================
//  XHRealTimeBlur 蒙版  实时模糊
// ==========================================


#import <UIKit/UIKit.h>
#import <objc/runtime.h>

typedef void(^WillShowBlurViewBlcok)(void);
typedef void(^DidShowBlurViewBlcok)(BOOL finished);

typedef void(^WillDismissBlurViewBlcok)(void);
typedef void(^DidDismissBlurViewBlcok)(BOOL finished);


static NSString * const XHRealTimeBlurKey = @"XHRealTimeBlurKey";

static NSString * const XHRealTimeWillShowBlurViewBlcokBlcokKey = @"XHRealTimeWillShowBlurViewBlcokBlcokKey";
static NSString * const XHRealTimeDidShowBlurViewBlcokBlcokKey = @"XHRealTimeDidShowBlurViewBlcokBlcokKey";

static NSString * const XHRealTimeWillDismissBlurViewBlcokKey = @"XHRealTimeWillDismissBlurViewBlcokKey";
static NSString * const XHRealTimeDidDismissBlurViewBlcokKey = @"XHRealTimeDidDismissBlurViewBlcokKey";

typedef NS_ENUM(NSInteger, XHBlurStyle) {
    // 垂直梯度背景从黑色到半透明的。
    XHBlurStyleBlackGradient = 0,
    // 类似UIToolbar的半透明背景
    XHBlurStyleTranslucent,
    // 黑色半透明背景
    XHBlurStyleBlackTranslucent,
    // 纯白色
    XHBlurStyleWhite
};

@interface XHRealTimeBlur : UIView

/**
 *  Default is XHBlurStyleTranslucent  蒙版动画状态
 */
@property (nonatomic, assign) XHBlurStyle blurStyle;
/**
 *  蒙版是否显示
 */
@property (nonatomic, assign) BOOL showed;

// Default is 0.3  蒙版显示时间 即蒙版从进入 到 动画完成的 时间 默认 0.3 从进入到动画执行 0.3秒
@property (nonatomic, assign) NSTimeInterval showDuration;

// Default is 0.3  蒙版消失时间 即蒙版从消失 到 动画完成的 时间 默认 0.3 从消失到动画执行 0.3秒
@property (nonatomic, assign) NSTimeInterval disMissDuration;

/**
 *  是否触发点击手势，默认关闭 蒙版是否有点击事件
 */
@property (nonatomic, assign) BOOL hasTapGestureEnable;

#pragma mark - 蒙版显示或者消失时， 做的操作
#pragma mark WillShow 即将显示
@property (nonatomic, copy) WillShowBlurViewBlcok willShowBlurViewcomplted;
#pragma mark DidShow  已经显示
@property (nonatomic, copy) DidShowBlurViewBlcok didShowBlurViewcompleted;
#pragma mark WillDismiss 即将消失
@property (nonatomic, copy) WillDismissBlurViewBlcok willDismissBlurViewCompleted;
#pragma mark DidDismiss  已经消失
@property (nonatomic, copy) DidDismissBlurViewBlcok didDismissBlurViewCompleted;


#pragma mark - show
- (void)showBlurViewAtView:(UIView *)currentView;

- (void)showBlurViewAtViewController:(UIViewController *)currentViewContrller;

#pragma mark - disMiss
- (void)disMiss;

@end

// ==========================================
//  UIView (XHRealTimeBlur)蒙版  实时模糊 分类
// ==========================================

@interface UIView (XHRealTimeBlur)

@property (nonatomic, copy) WillShowBlurViewBlcok willShowBlurViewcomplted;
@property (nonatomic, copy) DidShowBlurViewBlcok didShowBlurViewcompleted;


@property (nonatomic, copy) WillDismissBlurViewBlcok willDismissBlurViewCompleted;
@property (nonatomic, copy) DidDismissBlurViewBlcok didDismissBlurViewCompleted;

- (void)showRealTimeBlurWithBlurStyle:(XHBlurStyle)blurStyle;
- (void)showRealTimeBlurWithBlurStyle:(XHBlurStyle)blurStyle hasTapGestureEnable:(BOOL)hasTapGestureEnable;
- (void)disMissRealTimeBlur;

@end
