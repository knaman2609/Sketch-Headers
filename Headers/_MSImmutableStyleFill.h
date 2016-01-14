//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSImmutableStyleBasicFill.h"

@class MSImageData;

@interface _MSImmutableStyleFill : MSImmutableStyleBasicFill
{
    MSImageData *_image;
    long long _noiseIndex;
    double _noiseIntensity;
    long long _patternFillType;
    double _patternTileScale;
}

+ (Class)mutableClass;
@property(nonatomic) double patternTileScale; // @synthesize patternTileScale=_patternTileScale;
@property(nonatomic) long long patternFillType; // @synthesize patternFillType=_patternFillType;
@property(nonatomic) double noiseIntensity; // @synthesize noiseIntensity=_noiseIntensity;
@property(nonatomic) long long noiseIndex; // @synthesize noiseIndex=_noiseIndex;
@property(retain, nonatomic) MSImageData *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (BOOL)attributesEqualAttributesForObject:(id)arg1;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;

@end

