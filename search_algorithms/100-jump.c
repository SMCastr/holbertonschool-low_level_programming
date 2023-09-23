#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (!array)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
		if (i >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);

	i -= jump;
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i++;
		if (i == size)
			return (-1);
	}

	printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return (i);

	return (-1);
}
