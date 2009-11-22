//
//  PSToggleSwitchSpecifier.m
//  InAppSettingsTestApp
//
//  Created by David Keegan on 11/21/09.
//  Copyright 2009 InScopeApps{+}. All rights reserved.
//

#import "PSSliderSpecifierCell.h"
#import "InAppSettingConstants.h"

@implementation PSSliderSpecifierCell

- (void)slideAction{
    [self setValue:[NSNumber numberWithFloat:[valueSlider value]]];
}

- (void)setValue{
    [super setValue];
    
    valueSlider.value = [[self getValue] floatValue];
}

- (void)setupCell{
    [super setupCell];
    
    valueSlider = [[UISlider alloc] initWithFrame:CGRectZero];
    valueSlider.minimumValue = [[self.setting valueForKey:@"MinimumValue"] floatValue];
    valueSlider.maximumValue = [[self.setting valueForKey:@"MaximumValue"] floatValue];
    valueSlider.minimumValueImage = [UIImage imageNamed:[self.setting valueForKey:@"MinimumValueImage"]];
    valueSlider.maximumValueImage = [UIImage imageNamed:[self.setting valueForKey:@"MaximumValueImage"]];
    CGRect valueSliderFrame = valueSlider.frame;
    valueSliderFrame.origin.y = (CGFloat)round((self.contentView.frame.size.height*0.5f)-(valueSliderFrame.size.height*0.5f));
    valueSliderFrame.origin.x = InAppSettingCellPadding;
    valueSliderFrame.size.width = self.contentView.frame.size.width-(InAppSettingCellPadding*4);
    valueSlider.frame = valueSliderFrame;
    [valueSlider addTarget:self action:@selector(slideAction) forControlEvents:UIControlEventTouchUpInside];
    [self.contentView addSubview:valueSlider];
    [valueSlider release];
}

- (void)dealloc{
    [valueSlider release];
    [super dealloc];
}

@end
