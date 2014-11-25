//
//  DetailViewController.h
//  travis_ci_demo
//
//  Created by Gaurav Thummar on 11/25/14.
//  Copyright (c) 2014 V2Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

