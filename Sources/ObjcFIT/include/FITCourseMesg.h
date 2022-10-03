/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2022 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.94Release
// Tag = production/akw/21.94.00-0-g0f668193
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITCourseMesg : FITMessage
- (id)init;
// Sport 
- (BOOL)isSportValid;
- (FITSport)getSport;
- (void)setSport:(FITSport)sport;
// Name 
- (BOOL)isNameValid;
- (NSString *)getName;
- (void)setName:(NSString *)name;
// Capabilities 
- (BOOL)isCapabilitiesValid;
- (FITCourseCapabilities)getCapabilities;
- (void)setCapabilities:(FITCourseCapabilities)capabilities;
// SubSport 
- (BOOL)isSubSportValid;
- (FITSubSport)getSubSport;
- (void)setSubSport:(FITSubSport)subSport;

@end

NS_ASSUME_NONNULL_END