//
//  ViewItemCell.h
//  KMCVStab
//
//  Created by 张俊 on 26/06/2017.
//  Copyright © 2017 ksyun. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "VideoListModel.h"

@interface ViewItemCell : UICollectionViewCell

@property(nonatomic, strong) VideoListModel *model;

@end
