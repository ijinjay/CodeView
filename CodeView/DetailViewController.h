//
//  DetailViewController.h
//  CodeView
//
//  Created by 靳杰 on 14/11/22.
//  Copyright (c) 2014年 靳杰. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

