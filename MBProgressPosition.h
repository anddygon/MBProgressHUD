//
//  MBProgressPosition.h
//  MBProgressHUD
//
//  Created by xiaoP on 2017/8/25.
//  Copyright © 2017年 Matej Bukovinski. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MBProgressPosition) {
    MBProgressPositionTop,
    MBProgressPositionLeft,
    MBProgressPositionBottom,
    MBProgressPositionRight,
    MBProgressPositionCenterX,
    MBProgressPositionCenterY
};

struct MBProgressPositionInfo {
    MBProgressPosition position;
    CGFloat offset;
};
typedef struct MBProgressPositionInfo MBProgressPositionInfo;

MBProgressPositionInfo MBProgressPositionInfoMake(MBProgressPosition position, CGFloat offset) {
    MBProgressPositionInfo info;
    info.position = position;
    info.offset = offset;
    return info;
}
