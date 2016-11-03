//
//  UIView+SHBHelps.h
//  SHBTools
//
//  Created by shenhongbang on 2016/11/3.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (SHBHelps)

/**
 发送一个方法到它最近的一个可以执行该方法的响应者上

 @param actionName 要发送的方法名， 如果带一个入参则是self
 @return 是否发送成功
 */
- (BOOL)shb_sendActionWithName:(NSString *)actionName;

@end
