#include "lists.h"

/**
 * add_node_end - ...
 * @head: ...
 * @str: ...
 * Return: ...
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *tmp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);
		new_list->str = strdup(str);
		new_list->len = strlen(str);
		new_list->next = NULL;
		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new_list;
			return (tmp);
		}
	}
	return (NULL);
}
