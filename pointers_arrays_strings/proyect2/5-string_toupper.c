#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - string to all lowercase letters to uppercase.
 * @c: string
 *
 * Return: c.
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 122)
			c[i] -= 32;
	}
	return (c);
}
