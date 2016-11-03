//
//  UIImage+SHBHelps.h
//  SHBTools
//
//  Created by shenhongbang on 2016/11/3.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SHBHelps)

/**
 生成一个纯色图片 size：{1, 1}

 @param color 颜色
 @return 图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

@end
