//
//  XYZToDoItem.h
//  Organizer
//
//  Created by devmachine on 6/17/14.
//  Copyright (c) 2014 VVF. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
