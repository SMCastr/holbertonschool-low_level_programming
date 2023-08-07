#include "lists.h"

/**
 * list_len - return the number of elements linked list
 * @h: header of list
 * Return (o) always.
 */

size_t list_len(const list_t *h)
{

    size_t c = 0;

    while (h != NULL)
    {
        h = h->next;
        c++;
    }
    return (c);
}