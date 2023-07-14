#include "main.h"
#include <stdio.h>
/**
 * print_line - prints numbers 0-14 x10
 * @n: times printed
 * Return: Always (Success)
 */

void print_line(int n)
{
	int times;

	if (n > 0)
	{
		for (times = 0; times < n; times++)
		putchar('_');
	}
	putchar('\n');
}
