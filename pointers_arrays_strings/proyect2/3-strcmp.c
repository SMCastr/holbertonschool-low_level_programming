#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - function takes two string pointers,s1 and s2.
 * @s1: the string to compare
 * @s2: the string to compare
 *
 * Return: negative int  if s1 is less than s2, positive int if s1 is greater.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
