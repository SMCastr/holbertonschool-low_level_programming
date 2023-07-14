#include "main.h"

/**
 * print_last_digit - Print the absolute_value in the last digit.
 * @n: variable
 *
 * Return:last
 */

int print_last_digit(int n)
{
	int last;

	last = (n % 10);
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
