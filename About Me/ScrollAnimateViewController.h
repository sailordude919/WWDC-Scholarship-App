//
//  ScrollAnimateViewController.h
//  About Me
//
//  Created by Mason Wolters on 4/29/13.
//  Copyright (c) 2013 Big Head Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ScrollAnimateItem.h"
#import "TitleAnimateItem.h"
#import "CardView.h"
#import "Constants.h"
#import <QuartzCore/QuartzCore.h>
#import "HeaderAnimateItem.h"
#import "ImageAnimateItem.h"
#import "WebVideoViewController.h"

@interface ScrollAnimateViewController : UIViewController <UIScrollViewDelegate> {
    NSMutableArray *triggerPoints;
    NSMutableArray *triggerEndPoints;
    NSMutableArray *indexesAnimating;
    
    NSMutableArray *itemsOrderedByStart;
    NSMutableArray *itemsOrderedByFinish;
    
    NSMutableArray *backwardIndexes;
    
    NSMutableArray *originalTransforms;
        
    int numberOfPointsTriggered;
    int numberOfPointsEndTriggered;
}

@property (strong, nonatomic) UIScrollView *scrollView;
@property (strong, nonatomic) NSArray *animateItems;

- (id)initWithFrame:(CGRect)frame scrollViewContentSize:(CGSize)contentSize;

- (void)showYoutubeVideoWithLink:(NSString*)link;

@end
