//
//  UINavigationBar+ZYW.h
//  ZWAlphaNavigation
//
//  Created by 郑亚伟 on 2017/2/20.
//  Copyright © 2017年 zhengyawei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (ZYW)
//设置背景颜色
- (void)setBackgroundColor:(UIColor *)backgroundColor;
//设置leftItem、rightItem、titleView的alpha
- (void)setElementsAlpha:(CGFloat)alpha;
//重置回原来的样式
- (void)reset;
@end
