//
//  ViewController.m
//  SinaMenuViewExample
//
//  Created by 曾宪华 iMac on 15/1/11.
//  Copyright (c) 2015年 iOS软件开发工程师 曾宪华 热衷于简洁的UI QQ:543413507 http://www.pailixiu.com/blog   http://www.pailixiu.com/Jack/personal. All rights reserved.
//

#import "ViewController.h"

#import "PopMenu.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *iconView;

@property (nonatomic, strong) PopMenu *popMenu;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}

- (void)showMenu {
    NSMutableArray *items = [[NSMutableArray alloc] initWithCapacity:3];
    
    MenuItem *menuItem = [MenuItem itemWithTitle:@"Flickr" iconName:@"post_type_bubble_flickr"];
    [items addObject:menuItem];
    
    menuItem = [MenuItem itemWithTitle:@"Googleplus" iconName:@"post_type_bubble_googleplus" glowColor:[UIColor colorWithRed:0.840 green:0.264 blue:0.208 alpha:0.800]];
    [items addObject:menuItem];
    
    menuItem = [MenuItem itemWithTitle:@"Instagram" iconName:@"post_type_bubble_instagram" glowColor:[UIColor colorWithRed:0.232 green:0.442 blue:0.687 alpha:0.800]];
    [items addObject:menuItem];
    
    menuItem = [MenuItem itemWithTitle:@"Twitter" iconName:@"post_type_bubble_twitter" glowColor:[UIColor colorWithRed:0.000 green:0.509 blue:0.687 alpha:0.800]];
    [items addObject:menuItem];
    
    menuItem = [MenuItem itemWithTitle:@"Youtube" iconName:@"post_type_bubble_youtube" glowColor:[UIColor colorWithRed:0.687 green:0.164 blue:0.246 alpha:0.800]];
    [items addObject:menuItem];
    
    menuItem = [MenuItem itemWithTitle:@"Facebook" iconName:@"post_type_bubble_facebook" glowColor:[UIColor colorWithRed:0.258 green:0.245 blue:0.687 alpha:0.800]];
    [items addObject:menuItem];
    
    if (!_popMenu) {
        _popMenu = [[PopMenu alloc] initWithFrame:self.view.bounds items:items];
        _popMenu.menuAnimationType = kPopMenuAnimationTypeNetEase;
    }
    if (_popMenu.isShowed) {
        return;
    }
    _popMenu.didSelectedItemCompletion = ^(MenuItem *selectedItem) {
        NSLog(@"%@",selectedItem.title);
    };
    
    [_popMenu showMenuAtView:self.view];
    
//    [_popMenu showMenuAtView:self.view startPoint:CGPointMake(CGRectGetWidth(self.view.bounds) - 60, CGRectGetHeight(self.view.bounds)) endPoint:CGPointMake(60, CGRectGetHeight(self.view.bounds))];
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
    [self showMenu];
}

@end
