//
//  ViewController.h
//  MVP
//
//  Created by Miguh Ruiz on 10/8/16.
//  Copyright © 2016 Miguh Ruiz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDataSource, UICollectionViewDelegate>

@property (weak, nonatomic) IBOutlet UICollectionView *mejorandoCollectionView;
@property (strong, nonatomic) NSMutableArray *menuItems;

@end

