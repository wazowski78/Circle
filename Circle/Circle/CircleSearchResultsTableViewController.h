//
//  CircleSearchResultsTableViewController.h
//  Circle
//
//  Created by Sam Olson on 4/13/12.
//  Copyright (c) 2012 Northern Arizona University. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Parse/Parse.h"
#import "CircleSearchEventTableViewController.h"
#import "CircleEventDetailViewController.h"


@interface CircleSearchResultsTableViewController : PFQueryTableViewController
@property PFQuery *myQuery;
@end
