//
//  XYZDetailViewController.h
//  ControllingSource
//
//  Created by Nigel Hamilton on 16/12/2013.
//  Copyright (c) 2013 HamiltonTutorials. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYZDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
