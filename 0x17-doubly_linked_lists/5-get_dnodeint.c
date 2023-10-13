#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at index[].
 * @head: head of list.
 * @index: index of node that its address will be returned
 * Return: add of node .
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{unsigned int i = 0;
	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	while (head)
	{
		i++;
		head = head->next;
		if (i == index)
			return (head);
	}
	return (NULL);
}
