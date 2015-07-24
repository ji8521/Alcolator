//
//  ViewController.h
//  Alcolator
//
//  Created by Jeffrey Isaray on 7/21/15.
//  Copyright (c) 2015 Jeffrey Isaray. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;
@property (weak, nonatomic) UILabel *sliderValueLabel;
@property (weak, nonatomic) IBOutlet UILabel *numberOfBeersLabel;
@property (weak, nonatomic) IBOutlet UIButton *buttonPressed;


@end

