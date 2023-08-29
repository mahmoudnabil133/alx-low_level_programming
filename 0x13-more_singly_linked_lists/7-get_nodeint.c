#include "lists.h"
/**
 * get_nodeint_at_index - it gets the node of index->
 * @head: head of the list
 * @index: index of we want to ret its node.
 * Return: pointer to node of index[...].
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{unsigned int i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

