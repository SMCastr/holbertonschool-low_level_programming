#include "main.h"
#include <stdio.h>

/**
* _strlen - function takes two integer pointers.
* @s: pointer to string
*
* Return: Always 0.
*/

int _strlen(char *s)
{
	int i = 0;
		while (s[i] != '\0')
	{
		i++;
	}
		return (i);
}
