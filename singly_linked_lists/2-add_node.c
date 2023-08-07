#include "lists.h"

/**
 * add_node - ...
 * @head: ...
 * @str: ...
 * Return: ...
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
			return (NULL);
		tmp->str = strdup(str);
		tmp->len = strlen(str);
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	return (0);
}
