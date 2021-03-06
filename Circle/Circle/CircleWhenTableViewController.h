//
//  MSEWhenTableViewController.h
//  MultiStepEditor
//
//  Created by Eddie Hillenbrand on 4/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PFObject;

@interface CircleWhenTableViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UITableViewCell *startsCell;
@property (weak, nonatomic) IBOutlet UITableViewCell *endsCell;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *plusOneDayButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *plusOneWeekButton;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *plusOneMonthButton;

@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *nextButton;

@property (strong, nonatomic) PFObject *event;


@property (weak, nonatomic) IBOutlet UILabel *startCellDetail;
@property (weak, nonatomic) IBOutlet UILabel *endCellDetail;
@property (weak, nonatomic) IBOutlet UIButton *clearTextButton;


-(IBAction)clearDateButtonClicked:(id)sender;

- (IBAction)changeDate:(id)sender;

- (IBAction)plusOneDay:(id)sender;
- (IBAction)plusOneWeek:(id)sender;
- (IBAction)plusOneMonth:(id)sender;

@end
