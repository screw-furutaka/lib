//
//  NSData+hex2bin.h
//
//  Created by 八幡 洋一 on 10/12/02.
//  Copyright (c) 2010 八幡 洋一. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface NSData (HexStringConvert)
+(NSData*) dataWithHexString:(NSString*)string;
-(id) initWithHexString:(NSString*)string;
@end
