//
//  AttackViewController.h
//  Accelerometer
//
//  Created by Dwayne Mercredi on 10/29/10.
//  Copyright 2010 Invisible Software Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

#import "ShakeEventSource.h"
#import "SoundClipPool.h"

@interface AttackViewController : UIViewController <ShakeDelegate, SoundClipPoolDelegate> {
	ShakeEventSource *shakeEventSource;

	SoundClipPool *slapClips;
	SoundClipPool *responseClips;
	double lastSlapTime;
	
	BOOL slapping;
	
	UIImage *targetImage;
	
	int slapCount;
}

- (id) initWithTargetImage:(UIImage *)image;
	
@end

