//
//  PSToggleSwitchSpecifier.h
//  InAppSettingsTestApp
//
//  Created by David Keegan on 11/21/09.
//  Copyright 2009 InScopeApps{+}. All rights reserved.
//

#import "InAppSettingsTableCell.h"
#import <UIKit/UIKit.h>

@interface InAppSettingsPSTextFieldSpecifierCell : InAppSettingsTableCell

@property (nonatomic, strong) UITextField *textField;

- (BOOL)                        isSecure;
- (UIKeyboardType)              getKeyboardType;
- (UITextAutocapitalizationType)getAutocapitalizationType;
- (UITextAutocorrectionType)    getAutocorrectionType;
- (void)                        textChangeAction;

@end
