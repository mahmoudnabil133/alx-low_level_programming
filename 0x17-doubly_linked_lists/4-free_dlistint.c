#include "lists.h"
/**
 * free_dlistint - it free the list.
 * @head: the head.
*/
void free_dlistint(dlistint_t *head)
{dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
