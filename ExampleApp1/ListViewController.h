//
//  ListViewController.h
//  ExampleApp1
//
//  Created by Spencer Atkin on 6/23/15.
//  Copyright (c) 2015 Spencer Atkin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>


@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (strong) NSArray *items;

@end
