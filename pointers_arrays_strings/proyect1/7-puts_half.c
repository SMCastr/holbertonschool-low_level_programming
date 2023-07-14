#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - that prints half of a string followed a new line.
 * @str: variable
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int half = (length - 1) / 2;
	int i;

		for (i = half + 1; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
