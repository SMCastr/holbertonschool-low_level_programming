#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct typ - types of data and their function
 * @ltr: the type of data
 * @type: pointer to function for type
 */
typedef struct typ
{
char *ltr;
void (*type)();
} typ;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* _VARIADIC_FUNCTIONS_H_ */
