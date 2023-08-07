#include "lists.h"

/**
 * list_len - ...
 * @h: ...
 * Return: ...
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);

}
