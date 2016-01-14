//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSBaseRenderTile.h"

@class MSContentTile, MSImmutablePage, MSOverlayTile, MSPage, MSTileRenderer, NSArray, NSThread;

@interface MSTile : MSBaseRenderTile
{
    BOOL _drawPixelated;
    BOOL _disableSubpixelAntialiasing;
    BOOL _drawDottedDirtyRect;
    BOOL _shouldHideOverlayControls;
    BOOL _drawingIsCancelled;
    BOOL _didDrawAtLeastOnce;
    id <MSTileDelegate> _tileDelegate;
    double _zoomValue;
    MSOverlayTile *_overlayTile;
    MSContentTile *_contentTile;
    id <MSRenderingContextCacheProvider> _renderingCacheProvider;
    NSThread *_thread;
    MSImmutablePage *_pageForContent;
    MSPage *_pageForOverlay;
    NSArray *_artboardFrames;
    MSTileRenderer *_tileRenderer;
    struct CGPoint _distanceFromScrollOrigin;
}

@property(retain, nonatomic) MSTileRenderer *tileRenderer; // @synthesize tileRenderer=_tileRenderer;
@property(retain, nonatomic) NSArray *artboardFrames; // @synthesize artboardFrames=_artboardFrames;
@property(retain, nonatomic) MSPage *pageForOverlay; // @synthesize pageForOverlay=_pageForOverlay;
@property(retain, nonatomic) MSImmutablePage *pageForContent; // @synthesize pageForContent=_pageForContent;
@property(nonatomic) BOOL didDrawAtLeastOnce; // @synthesize didDrawAtLeastOnce=_didDrawAtLeastOnce;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> renderingCacheProvider; // @synthesize renderingCacheProvider=_renderingCacheProvider;
@property(retain, nonatomic) MSContentTile *contentTile; // @synthesize contentTile=_contentTile;
@property(retain, nonatomic) MSOverlayTile *overlayTile; // @synthesize overlayTile=_overlayTile;
@property(nonatomic) BOOL drawingIsCancelled; // @synthesize drawingIsCancelled=_drawingIsCancelled;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
@property(nonatomic) BOOL disableSubpixelAntialiasing; // @synthesize disableSubpixelAntialiasing=_disableSubpixelAntialiasing;
@property(nonatomic) BOOL drawPixelated; // @synthesize drawPixelated=_drawPixelated;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint distanceFromScrollOrigin; // @synthesize distanceFromScrollOrigin=_distanceFromScrollOrigin;
@property(nonatomic) __weak id <MSTileDelegate> tileDelegate; // @synthesize tileDelegate=_tileDelegate;
- (void).cxx_destruct;
- (id)description;
- (void)moveToPosition:(struct CGPoint)arg1;
- (struct CGRect)rectForContentTile;
- (double)scaleForContentTile;
- (void)pixelGridDidChange;
- (struct CGPoint)scrollOriginAdjustedForPixelZoom;
- (void)cancelDrawing;
- (void)drawImmutablePage:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawArtboardBackgroundsInContext:(struct CGContext *)arg1;
- (void)drawContentInContext:(struct CGContext *)arg1;
- (void)drawOverlayInContext:(struct CGContext *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 origin:(struct CGPoint)arg2;
- (void)refreshOverlayRect:(struct CGRect)arg1 page:(id)arg2;
- (void)scheduleContentRefresh:(id)arg1;
- (void)refreshContentRect:(struct CGRect)arg1 page:(id)arg2;
- (BOOL)shouldDrawPixelated;
- (void)enableDebugFramesInner:(BOOL)arg1 outer:(BOOL)arg2;
- (void)removeFromSuperlayer;
- (id)init;

@end

