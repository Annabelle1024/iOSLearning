//
//  UISearchContainerViewController.h
//  UIKit
//
//  Copyright © 2015 Apple Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UISearchController;

// If intending to use a UISearchController in a non-presentation manner, use this container view controller.
UIKIT_AVAILABLE_IOS_TVOS(9_1, 9_0) @interface UISearchContainerViewController : UIViewController
@property (nonatomic, strong, readonly) UISearchController *searchController;

- (instancetype)initWithSearchController:(UISearchController *)searchController;

@end
NS_ASSUME_NONNULL_END
