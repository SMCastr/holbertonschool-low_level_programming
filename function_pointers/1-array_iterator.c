#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function.
 * @array: int
 * @action: int
 * @size: size_t
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

