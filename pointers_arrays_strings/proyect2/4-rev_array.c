#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the contents of an array of int.
 * @a: input string
 * @n: amount of ints in the array.
 *
 * Returns: an array of integer.
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
