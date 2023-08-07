#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: pointer to the start of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
