#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - seaches a string for any set of bytes
 * @s: the string to search
 * @accept: the bytes
 * Return: a pointer to the bytes in accept or NULL if no bytes
*/

char *_strpbrk(char *s, char *accept)
{
	char *p;

	for (p = s; *p; p++)
	{
		if (strchr(accept, *p))
			return (p);
	}
	return (NULL);
}
