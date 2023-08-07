#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert a new node at given position
 * @h: pointer to the start of the list
 * @idx: given position
 * @n: data to give to the new node
 * Return: the addres of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node, *tmp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (!h)
		return (NULL);
	while (tmp)
		tmp = tmp->next, i++;
	if (idx > i)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	for (i = 0; i < idx; i++)
	{
		prev_node = tmp;
		tmp = tmp->next;
	}
	new_node->next = tmp;
	new_node->prev = prev_node;
	prev_node->next = new_node;
	if (tmp)
		tmp->prev = new_node;
	return (new_node);
}
