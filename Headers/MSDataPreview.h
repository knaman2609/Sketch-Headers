//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MSDataPreferenceItem, NSBezierPath, NSImage;

@interface MSDataPreview : NSView
{
    MSDataPreferenceItem *_localDataItem;
    NSImage *_preview;
}

@property(retain, nonatomic) NSImage *preview; // @synthesize preview=_preview;
@property(nonatomic) __weak MSDataPreferenceItem *localDataItem; // @synthesize localDataItem=_localDataItem;
- (void).cxx_destruct;
- (id)firstFourDataImages;
- (id)firstThreeDataTextItems;
@property(readonly) struct CGRect imageFrameInPreviewFrame;
@property(readonly) struct CGSize imageSize;
- (id)thumbWithSize:(struct CGSize)arg1 byDrawingImage:(id)arg2 inRect:(struct CGRect)arg3 fromRect:(struct CGRect)arg4;
@property(readonly, nonatomic) NSBezierPath *contentPath;
@property(readonly, nonatomic) struct CGRect previewFrame;
- (id)thumbFromImage:(id)arg1 centeredInSize:(struct CGSize)arg2;
- (id)centeredThumbFromImage:(id)arg1;
- (id)generateTextDataPreview;
- (id)generateImageDataPreview;
- (void)generatePreview;
- (id)placeHolderImage;
- (void)drawRect:(struct CGRect)arg1;

@end

