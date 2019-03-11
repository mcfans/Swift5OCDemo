//
//  SomeObject.h
//  Swift5Demo
//
//  Created by 杨学思 on 2019/3/11.
//  Copyright © 2019 杨学思. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SomeObject : NSObject
+ (void)init:(nullable NSString *)appID withChannelId:(nullable NSString *)channelId;
@end

NS_ASSUME_NONNULL_END
