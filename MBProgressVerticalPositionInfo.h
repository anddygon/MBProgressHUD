//
//  MBProgressPosition.h
//  MBProgressHUD
//
//  Created by xiaoP on 2017/8/25.
//  Copyright © 2017年 Matej Bukovinski. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MBProgressVerticalPosition) {
    MBProgressVerticalPositionTop,
    MBProgressVerticalPositionCenter,
    MBProgressVerticalPositionBottom
};

struct MBProgressVerticalPositionInfo {
    MBProgressVerticalPosition position;
    CGFloat offset;
};
typedef struct MBProgressVerticalPositionInfo MBProgressVerticalPositionInfo;

MBProgressVerticalPositionInfo MBProgressVerticalPositionInfoMake(MBProgressVerticalPosition position, CGFloat offset) {
    MBProgressVerticalPositionInfo info;
    info.position = position;
    info.offset = offset;
    return info;
}
