//
//  MenuCollectionViewCell.h
//  LuisXKit
//
//  Created by LuisX on 16/9/19.
//  Copyright © 2016年 LuisX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MenuCollectionViewCell : UICollectionViewCell
- (void)updateMenuCollectionViewCellDataWithTitle:(NSString *)title imageName:(NSString *)imageName TitleFont:(UIFont *)titleFont TitleColor:(UIColor *)titleColor;
@end
