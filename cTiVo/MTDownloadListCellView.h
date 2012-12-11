//
//  MTDownloadListCellView.h
//  cTiVo
//
//  Created by Scott Buchanan on 12/11/12.
//  Copyright (c) 2012 Scott Buchanan. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MTDownloadListCellView : NSTableCellView

@property (nonatomic, readonly) IBOutlet NSProgressIndicator *progressIndicator;
@property (nonatomic, readonly) IBOutlet NSTextField *downloadStage;

@end
