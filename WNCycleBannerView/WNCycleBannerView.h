//
//  WNCycleBannerView.h
//  WNCycleBannerViewDemo
//
//  Created by Kingiol on 14-4-11.
//  Copyright (c) 2014年 Kingiol. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WNCycleBannerView;

typedef void(^CompleteBlock)(void);

@protocol WNCycleBannerViewDataSource <NSObject>

@required
- (NSArray *)numberOfWNCycleBannerView:(WNCycleBannerView *)bannerView;
- (UIViewContentMode)contentModeForImageIndex:(NSUInteger)index;

@optional
- (UIImage *)placeHolderImageOfZeroBannerView;
- (UIImage *)placeHolderImageOfBannerView:(WNCycleBannerView *)bannerView atIndex:(NSUInteger)index;

@end

@protocol WNCycleBannerViewDelegate <NSObject>

@optional
- (void)cycleBannerView:(WNCycleBannerView *)bannerView didScrollToIndex:(NSUInteger)index;
- (void)cycleBannerView:(WNCycleBannerView *)bannerView didSelectedAtIndex:(NSUInteger)index;

@end

@interface WNCycleBannerView : UIView

// Delegate and Datasource
@property (weak, nonatomic) IBOutlet id<WNCycleBannerViewDataSource> datasource;
@property (weak, nonatomic) IBOutlet id<WNCycleBannerViewDelegate> delegate;

@property (assign, nonatomic, getter = isContinuous) BOOL continuous;   // if YES, then bannerview will show like a carousel, default is NO
@property (assign, nonatomic) NSUInteger autoPlayTimeInterval;  // if autoPlayTimeInterval more than 0, the bannerView will autoplay with autoPlayTimeInterval value space, default is 0

- (void)reloadDataWithCompleteBlock:(CompleteBlock)competeBlock;
- (void)setCurrentPage:(NSInteger)currentPage animated:(BOOL)animated;

@end
