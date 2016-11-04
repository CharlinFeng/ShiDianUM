//
//  ShiDianUM+ThirdLogin.h
//  ShiDianUM
//
//  Created by Charlin on 2016/11/3.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#import "ShiDianUM.h"
#import <UMSocialCore/UMSocialCore.h>

@interface ShiDianUM (Register)

+(void)um_registerUMAppKey:(NSString *)UMAppKey openLog:(BOOL)openLog;

+(void)um_regiserWXAppKey:(NSString *)WXAppKey appSecret:(NSString *)appSecret redirectURL:(NSString *)redirectURL;

+(void)um_regiserQQAppKey:(NSString *)QQAppKey appSecret:(NSString *)appSecret redirectURL:(NSString *)redirectURL;

+(BOOL)um_handleOpenURL:(NSURL *)openURL;

@end
