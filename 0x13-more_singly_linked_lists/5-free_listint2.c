#include "lists.h"
/**
 * free_listint2 - it frees the heap.
 * @head: head of the list.
*/
void free_listint2(listint_t **head)
{listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = *head;
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
