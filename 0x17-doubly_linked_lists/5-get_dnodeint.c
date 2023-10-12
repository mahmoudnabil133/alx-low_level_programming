#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at index[].
 * @head: head of list.
 * @index: index of node that its address will be returned
 * Return: add of node .
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{dlistint_t *itr = head;

	if (!head)
		return (NULL);
	if (index == 0)
		return (itr);
	while (index--)
		itr = itr->next;
	if (itr)
		return (itr);
	return (NULL);
}
