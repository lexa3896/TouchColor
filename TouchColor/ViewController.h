//
//  ViewController.h
//  TouchColor
//
//  Created by Александр Галкин on 05.11.15.
//  Copyright © 2015 iCoder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *view1; // left top
@property (weak, nonatomic) IBOutlet UIImageView *view2; // central top
@property (weak, nonatomic) IBOutlet UIImageView *view3; // right top
@property (weak, nonatomic) IBOutlet UIImageView *view4; // left bottom
@property (weak, nonatomic) IBOutlet UIImageView *view5; // central bottom
@property (weak, nonatomic) IBOutlet UIImageView *view6; // right bottmon
@property (weak, nonatomic) IBOutlet UIImageView *rView; // VIEW

@property (weak, nonatomic) IBOutlet UILabel *recordLabel;

@property (weak, nonatomic) IBOutlet UILabel *chetLabel;

@property (weak, nonatomic) IBOutlet UILabel *levelLabel;



@end

