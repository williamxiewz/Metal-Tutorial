//
//  WXMetalView.h
//  HelloWorld
//
//  Created by williamxie on 14/05/2017.
//  Copyright © 2017 williamxie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WXMetalView : UIView
@property(nonatomic,weak) CAMetalLayer * metalLayer;
@property(nonatomic,readonly)id <MTLDevice> device;

@end
