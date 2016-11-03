//
//  SHBUIFunction.h
//  SHBFunction
//
//  Created by shenhongbang on 2016/11/3.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 读取图片中二维码信息

 @param image 含有二维码的图片
 @return 二维码信息数组
 */
NSArray <NSString *>* SHBReadQRImage(UIImage *image);

/**
 读取图片中文本信息

 @param image 含有文本的图片
 @return 文本信息数组
 */
NSArray <NSString *>* SHBReadTextImage(UIImage *image);

/**
 生成一个二维码图片

 @param content 要生成二维码的文本
 @return 二维码图片
 */
UIImage * SHBQRImageWithContent(NSString *content);
