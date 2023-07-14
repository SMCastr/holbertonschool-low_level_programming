#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: sizie of the array
 * @c: chrct to init with
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
