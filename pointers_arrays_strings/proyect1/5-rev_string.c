#include "main.h"
#include <stdio.h>

/**
 * rev_string - A string as input and return the reversed version.
 * @s: The string to reverse.
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;
		while (s[i] != '\0')
		{
			i++;
		}
		while (j < i--)
		{
			temp = s[j];
			s[j++] = s[i];
			s[i] = temp;
		}
}
