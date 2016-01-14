//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseRenderer.h"

@class MSImmutableStyle, MSRenderingContext, NSBezierPath;

@interface MSStyleRenderer : MSBaseRenderer
{
    NSBezierPath *_path;
    MSImmutableStyle *_style;
    MSRenderingContext *_context;
    struct CGRect _rect;
}

@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) __weak MSRenderingContext *context; // @synthesize context=_context;
@property(retain, nonatomic) MSImmutableStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)drawBorders;
- (void)applyDashPatternToBezierPath;
- (void)drawFills;
- (BOOL)shouldSkipDrawingShadow:(id)arg1;
- (BOOL)shouldAdvancedClipToAvoidOuterStrokeStrokeBleed;
- (BOOL)shouldAdvancedClipToAvoidInnerStrokeBleed;
- (id)clipPathForOuterStroke;
- (void)addClipForBlock:(CDUnknownBlockType)arg1;

@end

