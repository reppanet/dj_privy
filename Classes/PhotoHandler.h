//
//  PhotoHandler.h
//  DJ Privy
//
//  Created by Robert Brauer on 11/10/12.
//
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface PhotoHandler : NSObject
{
    @private
    double luminosity;
    AVCaptureSession *session;
    BOOL running;
}

- (id)init;
- (void)startSession;
- (void)pauseSession;
- (void)resumeSession;
- (double)luminosity;
- (BOOL)running;
@end