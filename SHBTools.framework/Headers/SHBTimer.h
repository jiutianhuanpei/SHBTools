//
//  SHBTimer.h
//  SHBCustom
//
//  Created by shenhongbang on 2016/9/22.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SHBTimer : NSObject


/**
 初始化一个timer

 @param interval 时间间隔
 @param repeats 是否重复
 @param block 执行方法
 @return 一个timer
 */
+ (instancetype)scheduledTimerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)())block;

/**
 取消执行
 */
- (void)cancel;

@end
