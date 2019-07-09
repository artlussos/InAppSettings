//
//  PSToggleSwitchSpecifier.h
//  InAppSettingsTestApp
//
//  Created by David Keegan on 11/21/09.
//  Copyright 2009 InScopeApps{+}. All rights reserved.
//

#import "InAppSettingsTableCell.h"
#import <UIKit/UIKit.h>

@interface InAppSettingsPSToggleSwitchSpecifierCell : InAppSettingsTableCell

@property (nonatomic, strong) UISwitch *valueSwitch;

- (BOOL)getBool;
- (void)setBool:(BOOL)newValue;
- (void)switchAction;

@end
