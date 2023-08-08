#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: first node of the list
 * @n: node to be added
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->prev = NULL;
		if (*head)
		{
			temp->next = *head;
			if (*head)
				(*head)->prev = temp;
		}
		*head = temp;
		return (*head);
	}
	return (NULL);
}
