//
//  ShiDianUM+Share.h
//  ShiDianUM
//
//  Created by Charlin on 2016/12/22.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#import "ShiDianUM.h"
#import <UMSocialCore/UMSocialCore.h>

@interface ShiDianUM (Share)

+(void)shareInVC:(UIViewController *)vc platformType:(UMSocialPlatformType)platformType title:(NSString *)title desc:(NSString *)desc thumImage:(UIImage *)thumImage webpageUrl:(NSString *)webpageUrl;


@end
