#include "lists.h"
/**
 * delete_dnodeint_at_index - it deletes a node.
 * @head: head of list.
 * @index: index of node to be deleted.
 * Return: 1 in success -1 if failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{dlistint_t *current = *head, *prev = NULL;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		return (1);
	}
	while (index--)
	{
		prev = current;
		current = current->next;
		if (!current)
			return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);

}
