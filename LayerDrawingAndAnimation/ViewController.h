//
//  ViewController.h
//  LayerDrawingAndAnimation
//
//  Created by Anil Upadhyay on 8/13/16.
//  Copyright (c) 2016 Anil Upadhyay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *centerButton;
@property (weak, nonatomic) IBOutlet UIButton *magentoButton;
@property (weak, nonatomic) IBOutlet UIButton *blueButton;
@property (weak, nonatomic) IBOutlet UIButton *orangeButton;
- (IBAction)actionForCenterButton:(UIButton *)sender;

@end
