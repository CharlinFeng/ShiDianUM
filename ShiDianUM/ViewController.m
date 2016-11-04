//
//  ViewController.m
//  ShiDianUM
//
//  Created by Charlin on 2016/11/2.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#import "ViewController.h"
#import "ShiDianUMHeader.h"



@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)btnClick:(id)sender {
   
    [ShiDianUM um_authWithPlatform:UMSocialPlatformType_WechatSession vc:self completionBlock:^(NSString *uid, NSString *token, NSError *error) {
        
        NSLog(@"-------------%@,%@,%@",uid,token,error.localizedDescription);
    }];
    
//    [ShiDianUM um_getUserInfoForPlatform:UMSocialPlatformType_WechatSession vc:self completionBlock:^(NSString *name, NSString *iconURL, NSString *gender, NSError *error) {
//
//        NSLog(@"%@,%@,%@,%@",name,iconURL,gender,error);
//    }];
}






@end
