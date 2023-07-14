#include "main.h"

/**
 * _calloc - allocates space and inits to 0
 * @nmemb: # of members
 * @size: size in bytes of each member
 *
 * Return: pointer to array or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar =  malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ar[i] = '\0';
	}
	return (ar);
}
