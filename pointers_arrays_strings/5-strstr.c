#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - find a string in a string
 * @haystack: The source string
 * @needle: The string you are looking for
 * Return: Return pointer to the found string or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
	{
		while (*haystack)
		{
			char *temp = haystack;
			char *n = needle;

			while (*n && *n == *haystack)
			{
				n++;
				haystack++;
			}
			if (*n == '\0')
			return (temp);
			haystack = temp + 1;
		}
	return (NULL);
}
