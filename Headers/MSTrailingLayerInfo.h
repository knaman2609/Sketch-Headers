//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface MSTrailingLayerInfo : NSObject
{
    NSMapTable *_trailingLayers;
    long long _direction;
    struct CGRect _oldRect;
}

@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSMapTable *trailingLayers; // @synthesize trailingLayers=_trailingLayers;
@property(nonatomic) struct CGRect oldRect; // @synthesize oldRect=_oldRect;
- (void).cxx_destruct;

@end

