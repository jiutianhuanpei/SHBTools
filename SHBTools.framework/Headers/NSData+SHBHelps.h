//
//  NSData+SHBHelps.h
//  SHBTools
//
//  Created by shenhongbang on 2016/11/3.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (SHBHelps)

/**
 AES加密
 方式：AES+ECB+kCCOptionPKCS7Padding
 
 @return 加密之后data
 */
- (NSData *)encryptAES;

/**
 AES解密
 方式：AES+ECB+kCCOptionPKCS7Padding

 @return 解密之后data
 */
- (NSData *)decryptAES;

@end
