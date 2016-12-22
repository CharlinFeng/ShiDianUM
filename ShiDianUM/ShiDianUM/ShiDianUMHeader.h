//
//  ShiDianUMHeader.h
//  ShiDianUM
//
//  Created by Charlin on 2016/11/3.
//  Copyright © 2016年 Charlin. All rights reserved.
//

#ifndef ShiDianUMHeader_h
#define ShiDianUMHeader_h

#import "ShiDianUM.h"
#import "ShiDianUM+Register.h"
#import "ShiDianUM+Login.h"
#import "ShiDianUM+Share.h"

#endif 
/* ShiDianUMHeader_h */


/*
 *  集成步骤
 1.下载并导入SocialLibraries，UMSocialSDK
 2.设置Other Linker Flags为-Objc
 3.依次引入一下框架：
     libc++.tbd,
     libz.tbd,
     libsqlite3.tbd,
     ImageIO.framework,
     CoreTelephony.framework,
     SystemConfiguration.framework
 4.添加URL Types： http://dev.umeng.com/social/ios/quick-integration
 5.适配iOS9/10系统：http://dev.umeng.com/social/ios/ios9
 6.调用AppDelegate的um_handleOpenURL方法。
 */
