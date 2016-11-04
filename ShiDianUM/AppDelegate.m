//
//  AppDelegate.m
//  ShiDianUM
//
//  Created by Charlin on 2016/11/2.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#import "AppDelegate.h"
#import "ShiDianUMHeader.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    [ShiDianUM um_registerUMAppKey:@"56962856e0f55afd8f002984" openLog:NO];

    //设置微信的appKey和appSecret
    [ShiDianUM um_regiserWXAppKey:@"wxa96be782c0c6c46e" appSecret:@"c6c83bc6aebbdd1758d8af38ca8bb70c" redirectURL:@"http://mobile.umeng.com/social"];

    //设置分享到QQ互联的appKey和appSecret
    [ShiDianUM um_regiserQQAppKey:@"1104942784" appSecret:nil redirectURL:@"http://mobile.umeng.com/social"];
    
    return YES;
}


- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    BOOL result = [ShiDianUM um_handleOpenURL:url];
    if (!result) {
        // 其他如支付等SDK的回调
    }
    return result;
}


@end
