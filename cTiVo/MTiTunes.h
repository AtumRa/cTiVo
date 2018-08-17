//
//  MTiTunes.h
//  cTiVo
//
//  Copyright (c) 2012 Scott Buchanan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class iTunesApplication, iTunesSource, iTunesLibraryPlaylist, iTunesPlaylist,
		MTDownload;

@interface MTiTunes : NSObject {
	
}

@property (nonatomic, strong) iTunesApplication *iTunes;
@property (nonatomic, strong) iTunesSource *iTunesLibrary;
@property (nonatomic, strong) iTunesLibraryPlaylist *libraryPlayList;
@property (nonatomic, strong) iTunesPlaylist *tivoPlayList;

-(BOOL) preflightiTunesCheck;
//returns Yes if good to go for iTunes:
//  either not on Mojave yet, or we can access iTunes
// unfortunately has to launch iTunes if necessary to check.
//if not accessible, walks user through fixes

-(NSString *) importIntoiTunes: (MTDownload * ) download withArt:(NSImage *) image;
//returns nil if can't add; location of video file if it can
//this may be a new file if iTunes copies
//or  download.encodePath if iTunes references existing path

-(void) updateAllIDevices;
//-(void) testModule;

@end
