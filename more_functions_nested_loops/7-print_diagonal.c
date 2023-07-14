#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints \ alot
 * @n: number of dashes
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, spaces;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			{
			for (spaces = 1; spaces < i; spaces++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
