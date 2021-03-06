//
//  AppDelegate.h
//  OSXSharing
//
//	Created for “Learning Cocoa with Objective-C Third Edition”
//	Copyright (c) 2012-2013 the authors of the book. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (weak) IBOutlet NSImageView *imageView;
@property (weak) IBOutlet NSTextField *textField;

@property (assign) IBOutlet NSWindow *window;

- (IBAction)shareImage:(id)sender;
- (IBAction)shareText:(id)sender;
@end
