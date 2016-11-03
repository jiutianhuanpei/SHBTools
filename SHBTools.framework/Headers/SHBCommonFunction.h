//
//  SHBCommonFunction.h
//  SHBFunction
//
//  Created by shenhongbang on 2016/11/2.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

void SHBLog(NSString *mat, ...);

/**
 适配宽度

 @param width 传入的宽度
 @return 适配后的宽度
 */
CGFloat SHBFitWidth(CGFloat width);

/**
 适配高度

 @param height 传入的高度
 @return 适配后的高度
 */
CGFloat SHBFitHeight(CGFloat height);

/**
 生成一个唯一的UUID

 @return uuid
 */
NSString * SHBGenerateUUID();

/**
 获取当前的 ViewController

 @return 当前的 ViewController
 */
UIViewController * SHBAPPCurrentVC();


/**
 Hook 一个方法

 @param fromClass 要hook的方法所在的类
 @param fromSelector 要hook的方法
 @param toClass 要关联的方法所在的类
 @param toSelector 要关联的方法
 */
void SHB_ReplaceSelector(Class fromClass, SEL fromSelector, Class toClass, SEL toSelector);


/**
 把一个对象转化为字典

 @param obj 要转化的对象
 @return 返回一个字典 
 */
NSDictionary * SHB_DictionaryByObject(id obj);

