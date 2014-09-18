//
//  AePubReaderAppDelegate.h
//  AePubReader
//
//  Created by Federico Frappi on 04/04/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@class DetailViewController;

@interface AePubReaderAppDelegate : NSObject <UIApplicationDelegate> {

    UIWindow *window;

    DetailViewController *detailViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@end
