/* 
 * str2int.h - Convert a string to an integer, returning that integer.
 * Returns true if successful, or false if any error. 
 * It is an error if there is any additional character beyond the integer.
 * Assumes number is a valid pointer.
 *
 * David Kotz, April 2016, 2017, 2019, 2021
 */
 

#ifndef __READLINE_H__
#define __READLINE_H__

#include <stdbool.h>

/* str2int - safely read in a string, determines whether or not is int.
 * 
 * We assume:
 *   The number is a valid pointer.
 * We return
 *   True if string successfully cast to int, false if else.
 * We guarantee:
 *   Any integer input will return true (thanks to sscan())
 * We return:
 *   true if success and false if EOF or any error.
 * Notes:
 *   We scan to see if the value contains any character past the input.
 *   If it does, then it returns an error.
 *   So, 1234x would be read as an error, and 12.34 would also (special
 *   character).
 */

#endif //  __READLINE_H__

bool str2int(const char string[], int * number);
