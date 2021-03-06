//  FMCBinaryFrameHeader.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>

@interface FMCBinaryFrameHeader : NSObject {
	Byte _rpcType;
	UInt32 _functionID;
	UInt32 _correlationID;
	UInt32 _jsonSize;
	NSData*  _jsonData;
	NSData*  _bulkData;
}

@property(assign) Byte _rpcType;
@property(assign) UInt32 _functionID;
@property(assign) UInt32 _correlationID;
@property(assign) UInt32 _jsonSize;

@property(retain) NSData* _jsonData;
@property(retain) NSData* _bulkData;

+(FMCBinaryFrameHeader*) parseBinaryHeader:(NSData*) binHeader;
-(NSData*) assembleHeaderBytes;

@end
