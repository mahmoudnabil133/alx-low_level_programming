#include "lists.h"
/**
 * insert_nodeint_at_index - it inserts node at index (index).
 * @head: head ptr of the list.
 * @idx: the index of the inserted node.
 * @n: data of node wicc=h will be inserted.
 * Return: ptr to the th inserted node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{unsigned int i = 0;
	listint_t *node, *itrator;

	if (head == NULL)
		return (NULL);
	itrator = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	if (idx == 0)
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (*head);
	}
	while (itrator != NULL)
	{
		if (i == (idx - 1))
		{
			node->n = n;
			node->next = itrator->next;
			itrator->next = node;
			return (node);
		}
		i++;
		itrator = itrator->next;
	}
	return (NULL);
}
