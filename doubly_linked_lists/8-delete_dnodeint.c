#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: first node of the list
 * @index: node that should be deleted
 * Return: 1 success, -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *head_tmp, *prev_node;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		prev_node = *head;
		*head = (*head)->next;
		free(prev_node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	head_tmp = *head;
	while (head_tmp)
	{
		if (counter == index)
		{
			prev_node->next = (head_tmp->next);
			if (head_tmp->next)
				(head_tmp->next)->prev = prev_node;
			free(head_tmp);
			return (1);
		}
		prev_node = head_tmp;
		head_tmp = head_tmp->next;
		counter++;
	}
	return (-1);
}
