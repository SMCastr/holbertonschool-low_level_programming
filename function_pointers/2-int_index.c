#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index- gets users input
 *@array: stores first input
 *@size: stores second input
 *@cmp: stores functions value
 *Return: results
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
		{
			return (counter);
		}
	}
	return (-1);
}
