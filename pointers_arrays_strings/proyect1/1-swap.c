#include "main.h"
#include <stdio.h>

/**
* swap_int - function takes two integer pointers.
* @a: variable
* @b: pointer to 98
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int temp;
		temp = *a;
		*a = *b;
		*b = temp;
}

