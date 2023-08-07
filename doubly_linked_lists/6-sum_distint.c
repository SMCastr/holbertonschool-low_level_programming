#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data
 * of a linked list
 * @head: pointer to the start ot the list
 * Return: If the list is empty, return 0. Return the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int i = 0;

	tmp = head;
	if (!tmp)
		return (0);

	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
