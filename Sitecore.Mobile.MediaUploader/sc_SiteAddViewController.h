//
//  sc_SiteAddViewController.h
//  Sitecore.Mobile.MediaUploader
//
//  Created by andrea bellagamba on 7/26/13.
//  Copyright (c) 2013 Sitecore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "sc_Site.h"
#import "sc_GlobalDataObject.h"
#import "sc_ReloadableViewProtocol.h"

@interface sc_SiteAddViewController : UITableViewController <UITextFieldDelegate, UIAlertViewDelegate>

@property (strong, nonatomic) sc_Site *site;

@property (nonatomic) IBOutlet UIBarButtonItem *saveButton;
@property (nonatomic) IBOutlet UIBarButtonItem *cancelButton;
@property (nonatomic) IBOutlet UITextField *usernameTextField;
@property (nonatomic) IBOutlet UITextField *passwordTextField;
@property (nonatomic) IBOutlet UITextField *urlTextField;
@property (nonatomic) IBOutlet UITextField *siteTextField;
@property (nonatomic) IBOutlet UITableView *siteTableView;
@property sc_GlobalDataObject *appDataObject;

@end
