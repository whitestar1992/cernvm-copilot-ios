//
//  AppDelegate.h
//  CernVM Co-Pilot
//
//  Created by Eamon Ford on 5/24/12.
//  Copyright (c) 2012 The Byte Factory. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSSFeed.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, RSSFeedDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
