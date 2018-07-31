//
//  SearchViewController.h
//  IcyInstaller3
//
//  Created by ArtikusHG on 7/20/18.
//  Copyright © 2018 ArtikusHG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"

@interface SearchViewController : UIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, NSURLConnectionDataDelegate>

- (void)showPackageOptions;
+ (int)getPackageIndex;
+ (NSMutableArray *)getSearchFilenames;
- (void)downloadWithProgressAndURLString:(NSString *)urlString saveFilename:(NSString *)filename;
@property (strong, nonatomic) UIProgressView *progressView;
@property (strong, nonatomic) NSURLConnection *connectionManager;
@property (strong, nonatomic) NSMutableData *downloadedMutableData;
@property (strong, nonatomic) NSURLResponse *urlResponse;
@property (strong, nonatomic) UIWebView *depictionWebView;
@property (strong, nonatomic) UITextField *searchField;
@property (strong, nonatomic) UITableView *searchTableView;
@property (strong, nonatomic) NSMutableArray *searchPackages;
@property (strong, nonatomic) NSMutableArray *searchNames;
@property (strong, nonatomic) NSMutableArray *searchDescs;
@property (strong, nonatomic) NSMutableArray *searchDepictions;
@property (strong, nonatomic) NSString *filename;

@end