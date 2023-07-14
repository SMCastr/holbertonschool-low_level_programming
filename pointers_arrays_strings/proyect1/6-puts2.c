#include "main.h"
#include <stdio.h>

/**
* puts2 - Prints a string followed by a new line, to stdout
*@str: The string to print
*
* Return (void)
*/

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
