#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by new line, to stdout.
 * @str: The string to print.
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
