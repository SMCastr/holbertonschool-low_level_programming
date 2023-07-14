#include <stdio.h>

/**
 * print_triangle - Print triangle
 * @size: Dimensions of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
