#include "lists.h"
/**
 * add_node - functions that adds a new mode at the beginning of list
 * @head: pointing to the beginning of the string
 * @str: pointer to the string
 * Return: the address of the new elements, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *adding;

	adding = malloc(sizeof(list_t));

	if (adding == NULL || str == NULL)
		return (NULL);

	adding->str = strdup(str);
	adding->len = strlen(str);
	adding->next = *head;
	*head = adding;

	return (adding);
}
