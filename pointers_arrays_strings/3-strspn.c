#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - get lenght of prefix substring
 * @s: string
 * @accept: bytes
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] && strchr(accept, s[i]); i++)
		;
	return (i);
}
