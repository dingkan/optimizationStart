//
//  AppDelegate.h
//  optimizationStart
//
//  Created by 丁侃 on 2020/4/16.
//  Copyright © 2020 丁侃. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

