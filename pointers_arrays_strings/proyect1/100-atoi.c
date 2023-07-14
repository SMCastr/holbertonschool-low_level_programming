#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - string to an interger.
 *@s: variable
 *
 * Return: Dest
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char *temp = s;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	while (*temp >= '0' && *temp <= '9')
	{
		num = num * 10 + (*temp - '0');
		temp++;
	}
	return (num * sign);
}
