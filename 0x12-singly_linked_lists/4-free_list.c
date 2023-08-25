#include "lists.h"
/**
 * free_lists - it free lists.
 * @head: head ptr
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
