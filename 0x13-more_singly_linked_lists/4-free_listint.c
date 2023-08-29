#include "lists.h"
/**
 * free_listint - it frees the heap.
 * @head: head of the list.
*/
void free_listint(listint_t *head)
{listint_t *temp;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
