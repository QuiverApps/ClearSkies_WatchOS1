//
//  Minutely.h
//  ClearSkies
//
//  Created by Jeremy Roberts on 11/13/15.
//  Copyright © 2015 Jeremy Roberts. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@interface Minutely : MTLModel <MTLJSONSerializing>
@property (nonatomic, strong) NSString *summary;
@end
