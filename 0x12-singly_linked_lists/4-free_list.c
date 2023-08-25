#include "lists.h"
/**
 * free_lists - it free lists.
 * @head: head ptr
 * Return: nothing.
*/
void free_list(list_t *head)
{
	while (head !=  NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
