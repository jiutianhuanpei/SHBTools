//
//  NSString+SHBHelps.h
//  SHBTools
//
//  Created by shenhongbang on 2016/11/3.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (SHBHelps)

/**
 *  进行MD5加密
 *  @return 加密后NSString
 */
- (NSString *)MD5;

/**
 把汉字转为拼音

 @return 拼音
 */
- (NSString *)toPinyin;


@end
