#include "main.h"
#include <stdio.h>

/**
 * times_table - to print the 9 times table, starting from 0.
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (j == 0)
			{
				_putchar('0');
				continue;
			}
			if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((result) + '0');
			}
		}
		_putchar('\n');
	}
}
