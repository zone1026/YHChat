//
//  YHDownLoadManager.h
//  PikeWay
//
//  Created by YHIOS002 on 17/1/12.
//  Copyright © 2017年 YHSoft. All rights reserved.
//

#import <Foundation/Foundation.h>

//#import "YHSqliteManager.h"

@interface YHDownLoadManager : NSObject

+ (YHDownLoadManager *)sharedInstance;

/*
 *  下载聊天语音 (文件方式保存)  若下载过,会从加载缓存
 *  @param requestUrl       后台返回的Url
 *  @param progress         下载进度
 *  @param complete         成功失败回调
 */
- (void)downLoadAudioWithRequestUrl:(NSString *)requestUrl complete:(void (^)(BOOL success,id obj))complete progress:(void(^)(int64_t bytesWritten, int64_t totalBytesWritten))progress;

//下载办公文件（pdf,word,ppt,xls）
- (void)downOfficeDocWithRequestUrl:(NSString *)requestUrl sessionID:(NSString *)sessionID complete:(void (^)(BOOL success,id obj))complete progress:(void(^)(int64_t bytesWritten, int64_t totalBytesWritten))progress;

@end