//
//  MUAppDelegate.h
//  Klester
//
//  Created by Stefan Brankovic on 8/7/14.
//  Copyright (c) 2014 Mesh Unlimited, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MUAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
