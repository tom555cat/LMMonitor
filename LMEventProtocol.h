//
//  LMEventProtocol.h
//  Pods
//
//  Created by tom555cat on 2019/4/6.
//

#import <Foundation/Foundation.h>

@protocol LMEventProtocol <NSObject>

@property (nonatomic, strong) NSString *eventName;

@property (nonatomic, strong) NSString *eventTime;

@property (nonatomic, strong) NSString *sessionId;

@property (nonatomic, strong) NSString *appKey;

@property (nonatomic, strong) NSString *deviceId;

@end
