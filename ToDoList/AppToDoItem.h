//
//  AppToDoItem.h
//  ToDoList
//
//  Created by Abhishek Rai on 12/5/13.
//  Copyright (c) 2013 Abhishek Rai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@end
