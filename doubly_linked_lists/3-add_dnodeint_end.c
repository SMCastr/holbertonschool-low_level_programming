#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: first node of the list
 * @n: node to be added
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tail;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = temp;
		temp->prev = tail;
	}
	return (temp);
}
