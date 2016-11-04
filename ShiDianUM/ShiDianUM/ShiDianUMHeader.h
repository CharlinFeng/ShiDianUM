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

#endif 
/* ShiDianUMHeader_h */


/*
 *  集成步骤
 1.下载并导入SocialLibraries，UMSocialSDK
 2.依次引入一下框架：
     libc++.tbd,
     libz.tbd,
     libsqlite3.tbd,
     ImageIO.framework,
     CoreTelephony.framework,
     SystemConfiguration.framework
 3.添加URL Types: http://dev.umeng.com/social/ios/quick-integration
 4.适配iOS9/10系统，在info.plist:
 
     <key>NSAppTransportSecurity</key>
     <dict>
     <!-- 配置允许 http的任意网络Begin-->
     <key>NSAllowsArbitraryLoads</key>
     <true/>
     <!-- 配置允许 http的任意网络End-->
     <key>NSExceptionDomains</key>
     <dict>
     <!-- U-Share必须配置的HTTP白名单-->
     <key>log.umsns.com</key>
     <dict>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSTemporaryExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSTemporaryExceptionMinimumTLSVersion</key>
     <string>TLSv1.1</string>
     </dict>
     <key>sns.whalecloud.com</key>
     <dict>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSTemporaryExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSTemporaryExceptionMinimumTLSVersion</key>
     <string>TLSv1.1</string>
     </dict>
     <!-- U-Share-->
     <!-- 集成微信、QQ、Qzone、腾讯微博授权对应的HTTP白名单-->
     <key>qq.com</key>
     <dict>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSThirdPartyExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <!-- 腾讯授权-->
     <!-- 集成新浪微博对应的HTTP白名单-->
     <key>sina.com.cn</key>
     <dict>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSThirdPartyExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <key>sinaimg.cn</key>
     <dict>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSThirdPartyExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <key>sinajs.cn</key>
     <dict>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSThirdPartyExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <key>sina.cn</key>
     <dict>
     <!-- 适配iOS10 -->
     <key>NSExceptionMinimumTLSVersion</key>
     <string>TLSv1.0</string>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <key>weibo.cn</key>
     <dict>
     <!-- 适配iOS10 -->
     <key>NSExceptionMinimumTLSVersion</key>
     <string>TLSv1.0</string>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <key>weibo.com</key>
     <dict>
     <!-- 适配iOS10 -->
     <key>NSExceptionMinimumTLSVersion</key>
     <string>TLSv1.0</string>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSThirdPartyExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <!-- 新浪微博-->
     
     <!-- 集成人人授权对应的HTTP白名单-->
     <key>renren.com</key>
     <dict>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSThirdPartyExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSThirdPartyExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <!-- 人人授权-->
     <!-- 集成Facebook授权对应的HTTP白名单-->
     <key>facebook.com</key>
     <dict>
     <key>NSExceptionRequiresForwardSecrecy</key>
     <false/>
     <key>NSIncludesSubdomains</key>
     <true/>
     </dict>
     <key>fbcdn.net</key>
     <dict>
     <key>NSExceptionRequiresForwardSecrecy</key>
     <false/>
     <key>NSIncludesSubdomains</key>
     <true/>
     </dict>
     <key>akamaihd.net</key>
     <dict>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <!-- Facebook授权-->
     <!-- 集成Twitter授权对应的HTTP白名单-->
     <key>twitter.com</key>
     <dict>
     <key>NSExceptionRequiresForwardSecrecy</key>
     <false/>
     <key>NSIncludesSubdomains</key>
     <true/>
     </dict>
     <!-- Twitter授权-->
     <!-- 集成Llinkedin授权对应的HTTP白名单-->
     <key>linkedin.com</key>
     <dict>
     <key>NSExceptionAllowsInsecureHTTPLoads</key>
     <true/>
     <key>NSIncludesSubdomains</key>
     <true/>
     <key>NSExceptionRequiresForwardSecrecy</key>
     <false/>
     </dict>
     <!-- Llinkedin授权-->
     </dict>
     </dict>
 
 
 
 
 
 
     
     <key>LSApplicationQueriesSchemes</key>
     <array>
     <!-- 微信 URL Scheme 白名单-->
     <string>wechat</string>
     <string>weixin</string>
     
     <!-- 新浪微博 URL Scheme 白名单-->
     <string>sinaweibohd</string>
     <string>sinaweibo</string>
     <string>sinaweibosso</string>
     <string>weibosdk</string>
     <string>weibosdk2.5</string>
     
     <!-- QQ、Qzone URL Scheme 白名单-->
     <string>mqqapi</string>
     <string>mqq</string>
     <string>mqqOpensdkSSoLogin</string>
     <string>mqqconnect</string>
     <string>mqqopensdkdataline</string>
     <string>mqqopensdkgrouptribeshare</string>
     <string>mqqopensdkfriend</string>
     <string>mqqopensdkapi</string>
     <string>mqqopensdkapiV2</string>
     <string>mqqopensdkapiV3</string>
     <string>mqqopensdkapiV4</string>
     <string>mqzoneopensdk</string>
     <string>wtloginmqq</string>
     <string>wtloginmqq2</string>
     <string>mqqwpa</string>
     <string>mqzone</string>
     <string>mqzonev2</string>
     <string>mqzoneshare</string>
     <string>wtloginqzone</string>
     <string>mqzonewx</string>
     <string>mqzoneopensdkapiV2</string>
     <string>mqzoneopensdkapi19</string>
     <string>mqzoneopensdkapi</string>
     <string>mqqbrowser</string>
     <string>mttbrowser</string>
     
     <!-- 支付宝 URL Scheme 白名单-->
     <string>alipay</string>
     <string>alipayshare</string>
     
     <!-- 人人 URL Scheme 白名单-->
     <string>renrenios</string>
     <string>renrenapi</string>
     <string>renren</string>
     <string>renreniphone</string>
     
     <!-- 来往 URL Scheme 白名单-->
     <string>laiwangsso</string>
     
     <!-- 易信 URL Scheme 白名单-->
     <string>yixin</string>
     <string>yixinopenapi</string>
     
     <!-- instagram URL Scheme 白名单-->
     <string>instagram</string>
     
     <!-- whatsapp URL Scheme 白名单-->
     <string>whatsapp</string>
     
     <!-- line URL Scheme 白名单-->
     <string>line</string>
     
     <!-- Facebook URL Scheme 白名单-->
     <string>fbapi</string>
     <string>fb-messenger-api</string>
     <string>fbauth2</string>
     <string>fbshareextension</string>
     </array>

 */
