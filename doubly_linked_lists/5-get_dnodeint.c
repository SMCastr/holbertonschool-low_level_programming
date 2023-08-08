#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: first node of the list
 * @index: index of the node
 * Return: nth node of the list, NULL if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head != NULL && count != index; count++)
		head = head->next;
	return (head);
}
