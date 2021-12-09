#ifndef JIPP2_CALC_H
#define JIPP2_CALC_H
#include <iostream>
#include <cstring>
/*
 * Adding two integers
 * @param a -addend 1
 * @param b -addend 2
 */
int add(int, int);
/*
 * Subtraction of two integers
 * @param a - Minuend
 * @param b -Subtrahend
 */
int subtract(int, int);

/*
 * Volume of simple prism with a trapeze as a base
 * @param a -base 1
 * @param b - base 2
 * @param h - height of a prism
 *
 */
double volume(int, int, int);

/*
 * Shows documentation of functions
 */
void help();
/*
 * Error message, shows documentation using help() afterwards
 */
void error();

#endif //JIPP2_CALC_H
