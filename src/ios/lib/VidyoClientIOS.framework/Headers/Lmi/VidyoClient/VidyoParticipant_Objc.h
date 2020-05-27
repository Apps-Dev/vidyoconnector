//
//	VidyoParticipant_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

#import "VidyoContact_Objc.h"
typedef NS_ENUM(NSInteger, VCParticipantApplicationType){
	PARTICIPANT_APPLICATIONTYPE_None,
	PARTICIPANT_APPLICATIONTYPE_Recorder,
	PARTICIPANT_APPLICATIONTYPE_Gateway
};
typedef NS_ENUM(NSInteger, VCParticipantTrust){
	VCParticipantTrustLocal,
	VCParticipantTrustFederated,
	VCParticipantTrustAnonymous
};
@interface VCParticipant : NSObject
{
	void* objPtr;
}

	@property NSMutableString* id;
	@property NSMutableString* name;
	@property VCParticipantTrust trust;
	@property NSMutableString* userId;
	-(void) dealloc;
	-(VCParticipantApplicationType) getApplicationType;
	-(VCContact*) getContact:(VCContact*)contact;
	-(NSString*) getId;
	-(NSString*) getName;
	-(VCParticipantTrust) getTrust;
	-(NSString*) getUserId;
	-(BOOL) isHidden;
	-(BOOL) isLocal;
	-(BOOL) isRecording;
	-(BOOL) isSelectable;
	-(id) initWithObject:(void*)rPtr;
	-(void*)getObjectPtr;
@end
