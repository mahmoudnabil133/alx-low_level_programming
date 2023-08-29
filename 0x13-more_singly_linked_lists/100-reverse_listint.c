#include "lists.h"
/**
 * reverse_listint - it reverse a linkedList.
 * @head: the head pointer.
 * Return: head of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{listint_t *prev = NULL, *next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
