#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square with given size
 * @size: size of square
 *  Return: Always 0
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
