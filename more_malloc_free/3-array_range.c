#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: min value
  * @max: max value
  *
  * Return: pointer to array or null
  */

int *array_range(int min, int max)
{
	int *ar, len, i;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;

	ar = malloc(len * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++, min++)
	{
		ar[i] = min;
	}
	return (ar);
}
