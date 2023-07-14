#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers 0-14 x10
 *
 * Return: Always (Success)
 */

void more_numbers(void)
{
	int l, i;

	for (l = 0; l < 10; l++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}

		_putchar('\n');

	}
}
