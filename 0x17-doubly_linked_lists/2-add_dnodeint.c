#include "lists.h"
/**
 * add_dnodeint - it add a new node to the first of the list.
 * @head: add of the head of the list.
 * @n: data that of the node that will be added.
 * Return: address th the new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (!*head)
	{
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
		*head = node;
		return (*head);
	}
	node->n = n;
	node->next = *head;
	(*head)->prev = node;
	node->prev = NULL;
	*head = node;
	return (*head);
}
