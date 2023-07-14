#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copy a memory
 * @dest: char array to copy into
 * @src: char array to copy from
 * @n: number of elements to dest
 *
 * Return: pinter to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *yolo;

	yolo = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (yolo);
}
