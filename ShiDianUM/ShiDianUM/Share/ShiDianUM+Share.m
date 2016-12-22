//
//  ShiDianUM+Share.m
//  ShiDianUM
//
//  Created by Charlin on 2016/12/22.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#import "ShiDianUM+Share.h"

@implementation ShiDianUM (Share)

+(void)shareInVC:(UIViewController *)vc platformType:(UMSocialPlatformType)platformType title:(NSString *)title desc:(NSString *)desc thumImage:(UIImage *)thumImage webpageUrl:(NSString *)webpageUrl{

    
    //创建分享消息对象
    UMShareWebpageObject *wo = [UMShareWebpageObject shareObjectWithTitle:title descr:desc thumImage:thumImage];
    //设置文本
    wo.webpageUrl = webpageUrl;
    
    //创建分享消息对象
    UMSocialMessageObject *messageObject = [UMSocialMessageObject messageObject];
    //设置文本
    messageObject.text = title;
    messageObject.shareObject = wo;
    
    //调用分享接口
    [[UMSocialManager defaultManager] shareToPlatform:platformType messageObject:messageObject currentViewController:vc completion:^(id data, NSError *error) {
        
        if (error) {
            NSLog(@"************Share fail with error %@*********",error.localizedDescription);
        }else{
            NSLog(@"response data is %@",data);
        }
    }];

}



@end
