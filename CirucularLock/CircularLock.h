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

@property UIImageView *imageView;
@property (assign, getter = isLocked) BOOL locked;

@property CAShapeLayer *strokeLayer;
@property CAShapeLayer *circleLayer;

@property UIImage *lockedImage;
@property UIImage *unlockedImage;

@property UIColor *circleColor;
@property UIColor *strokeColor;

@property CGFloat radius;
@property CGFloat duration;
@property CGFloat strokeWidth;

@property (copy) didLockedBlock didLocked;
@property (copy) didUnlockedBlock didUnlocked;

- (instancetype)initWithCenter:(CGPoint)center radius:(CGFloat)r duration:(CGFloat)d strokeWidth:(CGFloat)width baseColor:(UIColor *)baseColor strokeColor:(UIColor *)strokeColor lockedImage:(UIImage *)lockedImage unlockedImage:(UIImage *)unlockedImage isLocked:(BOOL)locked didlockedCallback:(didLockedBlock)didLocked didUnlockedCallback:(didUnlockedBlock)didUnlocked;

@end
