//
//  FlapHistoryCell.h
//  FlapMyPort
//
//  Created by Vladislav Pavkin on 30.09.16.
//  Copyright (c) 2016 Vladislav Pavkin. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface FlapHistoryCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;

@end
