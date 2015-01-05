//
//  LeafNotification.h
//  LeafNotification
//
//  Created by mini4s215 on 14/12/17.
//  Copyright (c) 2014年 mini4s220. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum {
    LeafNotificationTypeWarrning,
    LeafNotificationTypeSuccess
}LeafNotificationType;
@interface LeafNotification : UIView

-(instancetype)initWithController:(UIViewController *)controller text:(NSString *)text;
/**
 *  停留时间
 */
@property (nonatomic,assign) NSTimeInterval duration;
@property(nonatomic,assign) LeafNotificationType type;
-(void)showWithAnimation:(BOOL)animation;
-(void)dismissWithAnimation:(BOOL)animation;

+(void)showInController:(UIViewController *)controller withText:(NSString *)text type:(LeafNotificationType)type;
/**
 *  默认是warring
 *
 *  @param controller
 *  @param text       
 */
+(void)showInController:(UIViewController *)controller withText:(NSString *)text;

@end
