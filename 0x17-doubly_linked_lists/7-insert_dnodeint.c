#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node.
 * @h: head of the list.
 * @idx: index.
 * @n: data of the node.
 * Return: address to the inserted node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{dlistint_t *itr = *h, *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	if (!*h && idx > 0)
		return (NULL);
	else if (!*h && idx == 0)
	{
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	if (idx == 0)
	{
		node->n = n;
		node->next = itr;
		node->prev = NULL;
		itr->prev = node;
		*h = node;
		return (node);
	}
	idx--;
	while (idx--)
	{
		itr = itr->next;
		if (!itr)
			return (NULL);
	}
	node->n = n;
	node->next = itr->next;
	node->prev = itr;
	itr->next = node;
	return (node);
}
