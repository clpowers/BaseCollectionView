//
//  ViewController.h
//  DiscoverCollectionView
//
//  Created by Chelsea Chanay on 12/16/13.
//  Copyright (c) 2013 Chelsea Chanay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseCollectionView.h"

@interface ViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    IBOutlet BaseCollectionView *collection;
}

@end
