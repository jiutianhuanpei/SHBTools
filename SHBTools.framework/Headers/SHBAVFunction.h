//
//  SHBAVFunction.h
//  SHBFunction
//
//  Created by shenhongbang on 2016/11/3.
//  Copyright © 2016年 中移(杭州)信息技术有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 把本地的视频转化为MP4格式

 @param localUrl 本地视频路径
 @param handler 回调结果，可能为nil
 */
void SHBMovConvertToMP4(NSURL *localUrl, void(^handler)(NSURL *mp4Url));

/**
 把本地音频转化为mp3格式

 @param localUrl 本地音频路径
 @param handler 回调结果，可能为nil
 */
void SHBVoiceToMP3(NSURL *localUrl, void(^handler)(NSURL *mp3Url));

/**
 获取视频首帧截图

 @param url 视频路径
 @param handler 回调结果，可能为nil
 */
void SHBImageForVideo(NSURL *url, void(^handler)(UIImage *image));
