#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check for a digit 0-9.
 * @c: variable
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
