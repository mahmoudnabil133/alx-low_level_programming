#include "lists.h"
/**
 * delete_nodeint_at_index - it deletes node at index[index].
 * @head: the head ptr.
 * @index: the index of node will be deleated.
 * Return: 1 if succeeded -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{listint_t *current = *head, *previous = NULL;
	unsigned int i = 0;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		return (1);
	}
	while (current->next != NULL)
	{
		previous = current;
		current = current->next;
		i++;
		if (i == index)
		{
			previous->next = current->next;
			free(current);
			return (1);
		}
	}
	return (-1);
}
