//
//  iSimulator.h
//  iSimulator
//
//  Created by Jakey on 2016/03/27.
//  Copyright © 2016年 Jakey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "iSandBox.h"
@interface iSimulator : NSObject
+ (instancetype)shared;
- (NSDictionary*)simulatorData;
- (NSString *)getDevicePath:(iSandBox *)sandbox;
@end
