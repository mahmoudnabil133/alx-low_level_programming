#include "lists.h"
/**
 * add_node_end - it adds node to the end.
 * @head: the head.
 * @str: the str will be added.
 * Return: ptr to head.
*/
list_t *add_node_end(list_t **head, const char *str)
{unsigned int len1;
	list_t *new_node, *tail = *head;

	len1 = strlen(str);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len1;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tail != NULL)
		tail = tail->next;
	tail->next = new_node;
	return (new_node);
}
