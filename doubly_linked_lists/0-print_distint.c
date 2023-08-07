#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list
 * @h: the pointer to the head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
