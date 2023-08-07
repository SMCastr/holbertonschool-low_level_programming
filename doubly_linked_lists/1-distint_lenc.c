#include "lists.h"
/**
 * dlistint_len - function that return the
 * number of elements in a linked
 * @h: Pointer to the beginner
 * Return: the number of element linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
