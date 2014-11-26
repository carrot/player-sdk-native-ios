//
//  NSDictionary+Strategy.h
//  KALTURAPlayerSDK
//
//  Created by Nissim Pardo on 11/23/14.
//  Copyright (c) 2014 Kaltura. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KPShareManager.h"

@interface NSDictionary (Strategy) <KPShareParams>
@property (nonatomic, assign, readonly) NSInteger actionType;
@end
