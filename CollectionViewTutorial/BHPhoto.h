//
//  BHPhoto.h
//  CollectionViewTutorial
//
//  Created by Bryan Hansen on 11/3/12.
//  Copyright (c) 2012 Bryan Hansen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BHPhoto : NSObject

@property (nonatomic, strong, readonly) NSURL *imageURL;

- (id)initWithImageURL:(NSURL *)imageURL;

@end
