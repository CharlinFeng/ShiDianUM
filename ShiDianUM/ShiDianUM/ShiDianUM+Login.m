//
//  ShiDianUM+Login.m
//  ShiDianUM
//
//  Created by Charlin on 2016/11/3.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#import "ShiDianUM+Login.h"

@implementation ShiDianUM (Login)

+(void)um_authWithPlatform:(UMSocialPlatformType)platformType vc:(UIViewController *)vc completionBlock:(void(^)(NSString *uid, NSString *token, NSError *error))completionBlock{
    
    [[UMSocialManager defaultManager]  authWithPlatform:platformType currentViewController:vc completion:^(id result, NSError *error) {
        
        UMSocialAuthResponse *authresponse = result;
        
        if (completionBlock != nil) {
            completionBlock(authresponse.uid,authresponse.accessToken,error);
        }
    }];
}

+(void)um_getUserInfoForPlatform:(UMSocialPlatformType)platformType vc:(UIViewController *)vc completionBlock:(void(^)(NSString *name, NSString *iconURL, NSString *gender, NSError *error))completionBlock{
    
    [[UMSocialManager defaultManager] getUserInfoWithPlatform:platformType currentViewController:vc completion:^(id result, NSError *error) {
        
        UMSocialUserInfoResponse *userinfo =result;
        
        if (completionBlock != nil) {
            completionBlock(userinfo.name,userinfo.iconurl,userinfo.gender,error);
        }
    }];
}


@end
