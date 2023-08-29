#include "lists.h"
/**
 * add_nodeint - it add node front of the list then apdate header to this node.
 * @head: the head of node.
 * @n: the date of node u will create.
 * Return: address of new node or Null
*/
listint_t *add_nodeint(listint_t **head, const int n)
{listint_t *new;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
