//
//  ShiDianUM+ThirdLogin.m
//  ShiDianUM
//
//  Created by Charlin on 2016/11/3.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#import "ShiDianUM+Register.h"

@implementation ShiDianUM (Register)

+(void)um_registerUMAppKey:(NSString *)UMAppKey openLog:(BOOL)openLog{
    
    //打开调试日志
    [[UMSocialManager defaultManager] openLog:openLog];
    
    //设置友盟appkey
    [[UMSocialManager defaultManager] setUmSocialAppkey:UMAppKey];
    
}

+(void)um_regiserWXAppKey:(NSString *)WXAppKey appSecret:(NSString *)appSecret redirectURL:(NSString *)redirectURL{
    
    //设置微信的appKey和appSecret
    [[UMSocialManager defaultManager] setPlaform:UMSocialPlatformType_WechatSession appKey:WXAppKey appSecret:appSecret redirectURL:redirectURL];
}


+(void)um_regiserQQAppKey:(NSString *)QQAppKey appSecret:(NSString *)appSecret redirectURL:(NSString *)redirectURL{
    
    //设置微信的appKey和appSecret
    [[UMSocialManager defaultManager] setPlaform:UMSocialPlatformType_QQ appKey:QQAppKey appSecret:appSecret redirectURL:redirectURL];
}


+(BOOL)um_handleOpenURL:(NSURL *)openURL{

    return  [[UMSocialManager defaultManager] handleOpenURL:openURL];
}





@end
