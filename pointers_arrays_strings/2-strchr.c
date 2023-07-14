#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in the string
 * @s: the string
 * @c: the character
 *
 * Return: pointer to the location of the character
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
