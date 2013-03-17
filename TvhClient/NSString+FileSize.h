//
//  TVHStringHelper.h
//  TvhClient
//
//  Created by zipleen on 06/03/13.
//  Copyright (c) 2013 zipleen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (NSStringWithFileSize)
+ (NSString *)stringFromFileSize:(unsigned long long)theSize;
+ (NSString *)stringFromFileSizeInBits:(unsigned long long)theSize;
@end
