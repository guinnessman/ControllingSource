//
//  XYZMasterViewController.h
//  ControllingSource
//
//  Created by Nigel Hamilton on 16/12/2013.
//  Copyright (c) 2013 HamiltonTutorials. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface XYZMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
