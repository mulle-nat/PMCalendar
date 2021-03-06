//
//  NSDate+Helpers.h
//  PMCalendar
//
//  Created by Pavel Mazurin on 7/14/12.
//  Copyright (c) 2012 Pavel Mazurin. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * NSDate convenience methods which shortens some of frequently used formatting and date altering methods.
 */
@interface NSDate (Helpers)

/**
 * Returns current (self) date without time components. Effectively, it's just a beginning of a day.
 */
- (NSDate *) pmDateWithoutTime;

/**
 * Returns a date object shifted by a given number of days from the current (self) date.
 */
- (NSDate *) pmDateByAddingDays:(NSInteger) days;

/**
 * Returns a date object shifted by a given number of months from the current (self) date.
 */
- (NSDate *) pmDateByAddingMonths:(NSInteger) months;

/**
 * Returns a date object shifted by a given number of years from the current (self) date.
 */
- (NSDate *) pmDateByAddingYears:(NSInteger) years;

/**
 * Returns a date object shifted by a given number of days, months and years from the current (self) date.
 */
- (NSDate *) pmDateByAddingDays:(NSInteger) days months:(NSInteger) months years:(NSInteger) years;

/**
 * Returns start of month for the current (self) date.
 */
- (NSDate *) pmMonthStartDate;

/**
 * Returns start of day for the current (self) date.
 */
- (NSDate *) pmMidnightDate;

/**
 * Returns the number of days in the current (self) month.
 */
- (NSUInteger) pmNumberOfDaysInMonth;

/**
 * Returns the weekday of the current (self) date.
 * 
 * Returns 1 for Sunday, 2 for Monday ... 7 for Saturday
 */
- (NSUInteger) pmGregorianWeekday;

/**
 * Returns the number of days since given date.
 */
- (NSInteger) pmDaysSinceDate:(NSDate *) date;

/**
 * Returns string representation of the current (self) date formatted with given format.
 *
 * i.e. "dd-MM-yyyy" will return "14-07-2012"
 */
- (NSString *) pmDateStringWithFormat:(NSString *) format;

/**
 * Checks if a given date is before or after the current (self) date.
 */
- (BOOL) pmIsBefore:(NSDate *) date;
- (BOOL) pmIsAfter:(NSDate *) date;

@end
