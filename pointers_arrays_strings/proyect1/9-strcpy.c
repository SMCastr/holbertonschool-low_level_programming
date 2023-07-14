#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copy string src to dest
 * @dest: string
 * @src: source string
 * Return: Dest
*/

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
