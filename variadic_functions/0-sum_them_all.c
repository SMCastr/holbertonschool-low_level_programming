#include "variadic_functions.h"
/**
 * sum_them_all - sums up all the function arguments
 * @n: number of arguments
 *
 * Return: the sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int ret = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		ret = ret + va_arg(args, int);
	va_end(args);
	return (ret);
}
