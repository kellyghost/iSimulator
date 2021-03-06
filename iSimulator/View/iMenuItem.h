//
//  iMenuItem.h
//  iSimulator
//
//  Created by Jakey on 2017/2/21.
//  Copyright © 2017年 Jakey. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "iDevice.h"
#import "iDeviceGroup.h"
#import "iAPP.h"
#import "iDevice.h"
@interface iMenuItem : NSMenuItem
@property (assign,nonatomic) NSInteger index;
@property (strong,nonatomic) iDeviceGroup *deviceGroup;
@property (strong,nonatomic) iDevice *device;
@property (strong,nonatomic) iAPP *app;

@end
