//
//  PSMultiValueSpecifierTable.h
//  InAppSettings
//
//  Created by David Keegan on 11/3/09.
//  Copyright 2009 InScopeApps{+}. All rights reserved.
//

#import "InAppSettingsSpecifier.h"
#import <UIKit/UIKit.h>

@interface InAppSettingsPSMultiValueSpecifierTable : UITableViewController

@property (nonatomic, strong) InAppSettingsSpecifier *setting;

- (id)initWithSetting:(InAppSettingsSpecifier *)inputSetting;
- (id)  getValue;
- (void)setValue:(id)newValue;

@end
