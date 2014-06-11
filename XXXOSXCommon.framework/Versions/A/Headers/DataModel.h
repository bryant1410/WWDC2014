//
//  DataModel.h
//  XXXARC
//
//  Created by @iosxtools on Twitter on on 7/4/13.
//  Copyright (c) http://www.iosxtools.com All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject
- (id)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary*)JSONKeyPathsByPropertyKey;
- (void)executeTransform;
@end
