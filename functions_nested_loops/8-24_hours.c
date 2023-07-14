#include "main.h"

/**
 * jack_bauer - Is responsible for printing every minute of the hour.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a = 0, b = 0, c = 0;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 6; b++)
		{
			for (c = 0; c < 10; c++)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				_putchar(':');
				_putchar(b + '0');
				_putchar(c + '0');
				_putchar('\n');
			}
			c = 0;
		}
		b = 0;
	}
}
