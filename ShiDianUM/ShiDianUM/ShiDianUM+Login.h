//
//  ShiDianUM+Login.h
//  ShiDianUM
//
//  Created by Charlin on 2016/11/3.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#import "ShiDianUM.h"
#import <UMSocialCore/UMSocialCore.h>

@interface ShiDianUM (Login)

+(void)um_authWithPlatform:(UMSocialPlatformType)platformType vc:(UIViewController *)vc completionBlock:(void(^)(NSString *uid, NSString *token, NSError *error))completionBlock;

+(void)um_getUserInfoForPlatform:(UMSocialPlatformType)platformType vc:(UIViewController *)vc completionBlock:(void(^)(NSString *name, NSString *iconURL, NSString *gender, NSError *error))completionBlock;

@end
