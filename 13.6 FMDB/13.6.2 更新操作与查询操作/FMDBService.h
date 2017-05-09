//
//  FMDBService.h
//  13.6.2 更新操作与查询操作
//
//  Created by 李维佳 on 2017/4/26.
//  Copyright © 2017年 Liz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FMDBService : NSObject
- (void)insertDataWithDictionary:(NSDictionary*)dict;
- (void)updateDataWithDictionary:(NSDictionary*)dict;
- (NSArray *)selectData;
- (void)deleteDataWithDictionary:(NSDictionary *)dict;
- (void)createTable;
@end
