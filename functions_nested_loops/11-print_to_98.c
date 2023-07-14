#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers to 98
 * @n: variable
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
			printf(", ");
			}
		}
	}
	printf("\n");
}
