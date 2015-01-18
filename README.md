PopMenu
====================

![License](https://img.shields.io/cocoapods/l/TWPhotoPicker.svg)
![Platform](https://img.shields.io/cocoapods/p/TWPhotoPicker.svg)

PopMenu is pop animation menu inspired by Sina weibo / NetEase app.

## Screenshots
![image](https://github.com/xhzengAIB/LearnEnglish/raw/master/Screenshots/XHSinaMenuViewExample.gif)

## Installation

With [CocoaPods](http://cocoapods.org/), add this line to your `Podfile`.

```
pod 'PopMenu'
```

and run `pod install`, then you're all done!

## How to use

```objc
NSMutableArray *items = [[NSMutableArray alloc] initWithCapacity:3];
MenuItem *menuItem = [[MenuItem alloc] initWithTitle:@"Flickr" iconName:@"post_type_bubble_flickr" glowColor:[UIColor grayColor] index:0];
[items addObject:menuItem];
    
menuItem = [[MenuItem alloc] initWithTitle:@"Googleplus" iconName:@"post_type_bubble_googleplus" glowColor:[UIColor colorWithRed:0.000 green:0.840 blue:0.000 alpha:1.000] index:0];
[items addObject:menuItem];
    
menuItem = [[MenuItem alloc] initWithTitle:@"Instagram" iconName:@"post_type_bubble_instagram" glowColor:[UIColor colorWithRed:0.687 green:0.000 blue:0.000 alpha:1.000] index:0];
[items addObject:menuItem];
    
menuItem = [[MenuItem alloc] initWithTitle:@"Twitter" iconName:@"post_type_bubble_twitter" glowColor:[UIColor colorWithRed:0.687 green:0.000 blue:0.000 alpha:1.000] index:0];
[items addObject:menuItem];
    
menuItem = [[MenuItem alloc] initWithTitle:@"Youtube" iconName:@"post_type_bubble_youtube" glowColor:[UIColor colorWithRed:0.687 green:0.000 blue:0.000 alpha:1.000] index:0];
[items addObject:menuItem];
    
menuItem = [[MenuItem alloc] initWithTitle:@"Facebook" iconName:@"post_type_bubble_facebook" glowColor:[UIColor colorWithRed:0.687 green:0.000 blue:0.000 alpha:1.000] index:0];
[items addObject:menuItem];
    
PopMenu *popMenu = [[PopMenu alloc] initWithFrame:self.view.bounds items:items];
[popMenu showMenuAtView:self.view];

```

## Requirements

* iOS 7.0+ 
* ARC

## License

English: PopMenu is available under the MIT license, see the LICENSE file for more information.     
