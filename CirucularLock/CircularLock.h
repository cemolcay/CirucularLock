//
//  CircularLock.h
//  CirucularLock
//
//  Created by Cem Olcay on 10/06/14.
//  Copyright (c) 2014 studionord. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^didLockedBlock)(void);
typedef void(^didUnlockedBlock)(void);

@interface CircularLock : UIView 

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, assign, getter = isLocked) BOOL locked;

@property (nonatomic, strong) CAShapeLayer *strokeLayer;
@property (nonatomic, strong) CAShapeLayer *circleLayer;

@property (nonatomic, strong) UIImage *lockedImage;
@property (nonatomic, strong) UIImage *unlockedImage;

@property (nonatomic, strong) UIColor *ringColor;
@property (nonatomic, strong) UIColor *strokeColor;

@property (nonatomic, assign) CGFloat radius;
@property (nonatomic, assign) CGFloat duration;
@property (nonatomic, assign) CGFloat strokeWidth;

@property (copy) didLockedBlock didLocked;
@property (copy) didUnlockedBlock didUnlocked;

- (instancetype)initWithCenter:(CGPoint)center radius:(CGFloat)r duration:(CGFloat)d strokeWidth:(CGFloat)width ringColor:(UIColor *)ringColor strokeColor:(UIColor *)strokeColor lockedImage:(UIImage *)lockedImage unlockedImage:(UIImage *)unlockedImage isLocked:(BOOL)locked didlockedCallback:(didLockedBlock)didLocked didUnlockedCallback:(didUnlockedBlock)didUnlocked;

@end
