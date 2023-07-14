#include "main.h"
#include <stdio.h>

/**
 * _isupper -check Upse.
 * @c: variable
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
