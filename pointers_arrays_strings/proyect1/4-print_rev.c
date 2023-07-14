#include "main.h"

/**
 * print_rev - print string as input in reversed.
 * @s: variable reversed.
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
