//
//  ViewController.h
//  Tap to Win
//
//  Created by Chad Nachiappan on 2/2/14.
//  Copyright (c) 2014 Chad Nachiappan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface ViewController : UIViewController<UIAlertViewDelegate> {
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    IBOutlet UIButton *tapMeButton;
    
    
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
}

- (IBAction)buttonPressed;

@end
