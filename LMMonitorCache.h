//
//  LMMonitorCache.h
//  Pods
//
//  Created by tom555cat on 2019/4/6.
//

#import <Foundation/Foundation.h>

@protocol LMEventProtocol;
@class LMEventModel;

@interface LMMonitorCache : NSObject


/**
 缓存事件
 */
- (void)addEvent:(LMEventModel<LMEventProtocol> *)event;

@end
