#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the nodes at index
 * of a linked list
 * @head: points to the start of the list
 * @index: position to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *prev_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	prev_node = *head;
	if (index == 0)
	{
		*head = prev_node->next;
		if (prev_node->next != NULL)
			prev_node->next->prev = NULL;
		free(prev_node);
		return (1);
	}
	while (prev_node != NULL && i < index - 1)
	{
		if (prev_node == NULL || prev_node->next == NULL)
			return (-1);

		prev_node = prev_node->next;
		i++;
	}
	current_node = prev_node->next->next;
	if (prev_node->next->next != NULL)
		prev_node->next->next->prev = prev_node;
	free(prev_node->next);
	prev_node->next = current_node;
	return (1);
}
