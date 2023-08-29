#include "lists.h"
/**
 * add_nodeint_end - it adds a node to the end of the list.
 * @head: the head of linkedlist.
 * @n: the data of the node.
 * Return: address of new node or Null
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{listint_t *new, *tail = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	return (new);
}
