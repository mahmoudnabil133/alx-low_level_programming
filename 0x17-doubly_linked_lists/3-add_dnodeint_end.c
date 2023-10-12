#include "lists.h"
/**
 * add_dnodeint_end - adds node to the tail of the list.
 * @head: head of list.
 * @n: data of the node.
 * Return: address of the inserted node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{dlistint_t *node, *itr = *head;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	if (!*head)
	{
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (itr->next)
		itr = itr->next;
	itr->next = node;
	node->n = n;
	node->prev = itr;
	node->next = NULL;
	return (node);
}
