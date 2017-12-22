//
//  WMHomeViewController.h
//  Demo
//
//  Created by Mark on 16/7/25.
//  Copyright © 2016年 Wecan Studio. All rights reserved.
//

#import "WMPageController.h"

#define kScreen_Height   ([UIScreen mainScreen].bounds.size.height)
#define kScreen_Width    ([UIScreen mainScreen].bounds.size.width)
// iPhone X
#define  DD_iPhoneX (kScreen_Width == 375.f && kScreen_Height == 812.f ? YES : NO)

static CGFloat const kWMHeaderViewHeight = 200;
#define kNavigationBarHeight  (DD_iPhoneX?88:64)
@interface WMHomeViewController : WMPageController
@property (nonatomic, assign) CGFloat viewTop;
@end
