#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: point to the beginning
 * @str: point to the string
 * Return: the address of the new elements, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *adding, *last;

	adding = malloc(sizeof(list_t));

	if (adding == NULL || str == NULL)
	{
		return (NULL);
	}

	adding->str = strdup(str);
	adding->len = strlen(str);
	adding->next = NULL;


	if (*head == NULL)
	    {
		    *head = adding;
	        return (adding);
	    }

	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = adding;

	return (adding);
}