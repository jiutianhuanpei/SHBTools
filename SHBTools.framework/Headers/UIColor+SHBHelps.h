//
//  UIColor+SHBHelps.h
//  SHBTools
//
//  Created by shenhongbang on 2016/11/3.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (SHBHelps)

/**
 十六进制色彩
 
 @param hexString 十六进制的字符串
 @param alpha     透明度
 
 @return 返回颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;
+ (UIColor *)colorWithHexString:(NSString *)hexString;


@end
