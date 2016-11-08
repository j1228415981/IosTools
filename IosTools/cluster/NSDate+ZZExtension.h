//
//  NSDate+Extension.h
//  BloodSugar
//
//  Created by PeterPan on 13-12-27.
//  Copyright (c) 2013年 shake. All rights reserved.
//

@import Foundation;

static NSString * const yyMMdd2 = @"yy/MM/dd";
static NSString * const yyyyMMdd  = @"yyyyMMdd";
static NSString * const format82 = @"yyyy-MM-dd";
static NSString * const yyyymmdd2 = @"yyyy-MM-dd";
static NSString * const YYYYMMDDHHMM211 = @"yyyy-MM-dd HH:mm";
static NSString * const yyyyMMddHHmmss = @"yyyyMMddHHmmss";
static NSString * const yyyynMMyddr = @"yyyy年MM月dd日";
static NSString * const format2212 = @"yy-MM-dd HH:mm:ss";
static NSString * const yyyyMMddHHmmss212 = @"yyyy-MM-dd HH:mm:ss";
static NSString * const yyyyMMddHHmmssSSS = @"yyyyMMddHHmmssSSS";

static NSString * const MMddyyyy2 = @"MM-dd-yyyy";
static NSString * const format12 = @"MM月dd日 HH:mm";
static NSString * const format8111 = @"MM-dd HH:mm";
static NSString * const mmddhhmm111 = @"MM-dd HH:mm";
static NSString * const ddHHmmss = @"ddHHmmss";
static NSString * const HHmm1 = @"HH:mm";

@interface NSDate (ZZExtension)

+ (NSDate *)dateWithYear:(NSInteger)year
                   month:(NSInteger)month
                     day:(NSInteger)day
                    hour:(NSInteger)hour
                  minute:(NSInteger)minute
                  second:(NSInteger)second;

+ (NSInteger)daysOffsetBetweenStartDate:(NSDate *)startDate endDate:(NSDate *)endDate;

+ (NSDate *)dateWithHour:(int)hour
                  minute:(int)minute;

#pragma mark - Getter
- (NSInteger)year;
- (NSInteger)month;
- (NSInteger)day;
- (NSInteger)hour;
- (NSInteger)minute;
- (NSInteger)second;
- (NSInteger)weekday;
- (NSString *)weekdayDis;


#pragma mark - Time string
- (NSString *)timeHourMinute;
- (NSString *)timeHourMinuteWithPrefix;
- (NSString *)timeHourMinuteWithSuffix;
- (NSString *)timeHourMinuteWithPrefix:(BOOL)enablePrefix suffix:(BOOL)enableSuffix;

#pragma mark - Date String
- (NSString *)stringTime;
- (NSString *)stringMonthDay;
- (NSString *)stringYearMonthDay;
- (NSString *)stringYearMonthDayHourMinuteSecond;
+ (NSString *)stringYearMonthDayWithDate:(NSDate *)date;      //date为空时返回的是当前年月日
+ (NSString *)stringLoacalDate;

#pragma mark - Date formate
+ (NSString *)dateFormatString;
+ (NSString *)timeFormatString;
+ (NSString *)timestampFormatString;
+ (NSString *)timestampFormatStringSubSeconds;

#pragma mark - Date adjust
- (NSDate *) dateByAddingDays: (NSInteger) dDays;
- (NSDate *) dateBySubtractingDays: (NSInteger) dDays;

#pragma mark - Relative dates from the date
+ (NSDate *) dateNow;
+ (double)dateNowInterval;
+ (NSString*)dateNowWithFormat:(NSString *)formatter;
+ (NSDate *) dateTomorrow;
+ (NSDate *) dateYesterday;
+ (NSDate *) dateWithDaysFromNow: (NSInteger) days;
+ (NSDate *) dateWithDaysBeforeNow: (NSInteger) days;
+ (NSDate *) dateWithHoursFromNow: (NSInteger) dHours;
+ (NSDate *) dateWithHoursBeforeNow: (NSInteger) dHours;
+ (NSDate *) dateWithMinutesFromNow: (NSInteger) dMinutes;
+ (NSDate *) dateWithMinutesBeforeNow: (NSInteger) dMinutes;
+ (NSDate *) dateStandardFormatTimeZeroWithDate: (NSDate *) aDate;  //标准格式的零点日期
- (NSInteger) daysBetweenCurrentDateAndDate;                     //负数为过去，正数为未来

#pragma mark - Date compare
- (BOOL)isEqualToDateIgnoringTime: (NSDate *) aDate;
- (NSString *)stringYearMonthDayCompareToday;                 //返回“今天”，“明天”，“昨天”，或年月日

#pragma mark - Date and string convert
+ (NSDate *)dateFromString:(NSString *)string;
+ (NSDate *)dateFromIntervalStr:(NSString *)intervalStr;
+ (NSDate *)dateFromString:(NSString *)string withFormat:(NSString *)format;
- (NSDate *)dateMorning:(long)intervalDay;
- (NSDate *)changeZone;
- (NSString *)string;
- (NSString *)stringCutSeconds;

- (NSString *)stringWithFormat:(NSString *)formatStr;
- (NSString *)toStringWithFormat:(NSString *)format;
- (NSString *)acmtoStrWithFormat:(NSString *)format;
- (long long)mills;
- (long long)seq;
- (NSString *)acmtoDesc;
@end
