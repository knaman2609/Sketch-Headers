//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MSMeasurementData : NSObject
{
    NSArray *_targetLines;
    struct CGRect _sourceRect;
    struct CGRect _targetRect;
}

@property(retain, nonatomic) NSArray *targetLines; // @synthesize targetLines=_targetLines;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (void).cxx_destruct;

@end

