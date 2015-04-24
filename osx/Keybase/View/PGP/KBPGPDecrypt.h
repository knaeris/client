//
//  KBPGPDecrypt.h
//  Keybase
//
//  Created by Gabriel on 3/27/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "KBReader.h"
#import "KBWriter.h"
#import "KBRPC.h"
#import "KBWork.h"
#import "KBStream.h"

@interface KBPGPDecrypt : NSObject

- (void)decryptWithOptions:(KBRPgpDecryptOptions *)options streams:(NSArray *)streams client:(KBRPClient *)client sender:(id)sender completion:(void (^)(NSArray *works))completion;

- (void)decryptWithOptions:(KBRPgpDecryptOptions *)options stream:(KBStream *)stream client:(KBRPClient *)client sender:(id)sender completion:(KBWorkCompletion)completion;

@end
