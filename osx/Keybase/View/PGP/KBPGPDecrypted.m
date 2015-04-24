//
//  KBPGPDecrypted.m
//  Keybase
//
//  Created by Gabriel on 4/24/15.
//  Copyright (c) 2015 Gabriel Handford. All rights reserved.
//

#import "KBPGPDecrypted.h"

@interface KBPGPDecrypted ()
@property KBStream *stream;
@property KBRPgpSigVerification *pgpSigVerification;
@end

@implementation KBPGPDecrypted

+ (instancetype)decryptedWithStream:(KBStream *)stream pgpSigVerification:(KBRPgpSigVerification *)pgpSigVerification {
  KBPGPDecrypted *decrypted = [[KBPGPDecrypted alloc] init];
  decrypted.stream = stream;
  decrypted.pgpSigVerification = pgpSigVerification;
  return decrypted;
}

@end
