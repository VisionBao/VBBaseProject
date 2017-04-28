//
//  UIAlertController+VBAlert.h
//  VBKitExample
//
//  Created by Vision on 2017/3/9.
//  Copyright © 2017年 VisionBao. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^choiceCompletionBlock)(NSInteger selecteIndex, UIAlertAction *action);
typedef void (^textCompletionBlock)(NSString *text, NSInteger selecteIndex);

@interface UIAlertController (VBAlert)

#pragma mark - alert

/**
 普通提示弹窗 - 消息
 */
+ (void)vb_showTipAlert:(NSString *)message;
+ (void)vb_showTipAlert:(NSString *)message
          completion:(choiceCompletionBlock)completion;
/**
 带标题提示弹窗 - 消息 标题
 */
+ (void)vb_showTipAlert:(NSString *)message
               title:(NSString *)title
          completion:(choiceCompletionBlock)completion;
/**
 自定义单按钮提示弹窗 - 消息 标题 按钮
 */
+ (void)vb_showTipAlert:(NSString *)message
               title:(NSString *)title
         cancelTitle:(NSString *)cancelTitle
          completion:(choiceCompletionBlock)completion;
/**
 双按钮提示弹窗 - 消息 标题 按钮
 */
+ (void)vb_showChoiceAlert:(NSString *)message
                  title:(NSString *)title
              doneTitle:(NSString *)doneTitle
             completion:(choiceCompletionBlock)completion;
/**
 自定义双按钮提示弹窗 - 消息 标题 确认按钮 取消按钮
 */
+ (void)vb_showChoiceAlert:(NSString *)message
                  title:(NSString *)title
              doneTitle:(NSString *)doneTitle
            cancelTitle:(NSString *)cancelTitle
             completion:(choiceCompletionBlock)completion;
/**
 三选择弹窗
 */
+ (void)vb_showChoiceAlert:(NSString *)message
                  title:(NSString *)title
           button1Title:(NSString *)title1
           button2Title:(NSString *)title2
           button3Title:(NSString *)title3
             completion:(choiceCompletionBlock)completion;


/**
 带输入框弹层
 */
+ (void)vb_showTextFiledAlert:(NSString *)message
                     title:(NSString *)title
               placeholder:(NSString *)placeholder
                 doneTitle:(NSString *)doneTitle
                completion:(textCompletionBlock)completion;

#pragma mark - actionSheet

/**
 单选弹层
 */
+ (void)vb_showActionSheet:(NSString *)buttonTitle
             completion:(choiceCompletionBlock)completion;
/**
 单选弹层 - 消息 标题 按钮
 */
+ (void)vb_showActionSheet:(NSString *)message
                  title:(NSString *)title
            buttonTitle:(NSString *)buttonTitle
             completion:(choiceCompletionBlock)completion;
/**
 单选弹层 - 消息 标题 按钮 取消按钮
 */
+ (void)vb_showActionSheet:(NSString *)message
                  title:(NSString *)title
            buttonTitle:(NSString *)buttonTitle
      cancelButtonTitle:(NSString *)cancelButtonTitle
             completion:(choiceCompletionBlock)completion;
/**
 自定义单选弹层
 */
+ (void)vb_showActionSheet:(NSString *)message
                  title:(NSString *)title
           buttonTitles:(NSArray<NSString *> *)buttonTitles
      cancelButtonTitle:(NSString *)cancelButtonTitle
             completion:(choiceCompletionBlock)completion;

#pragma mark - common alertView
/**
 通用提示弹层
 */
+ (void)vb_showCommonAlert:(NSString *)message
                  title:(NSString *)title
                  style:(UIAlertControllerStyle)style
           actionObject:(UIAlertAction *)actionObject, ... NS_REQUIRES_NIL_TERMINATION;


@end