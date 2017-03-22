//
//  AppDelegate.h
//  LoginWithFacebook
//
//  Created by Huenei desarrollo on 22/3/17.
//  Copyright © 2017 Huenei desarrollo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

