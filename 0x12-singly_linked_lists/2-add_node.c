#include "lists.h"
/**
 * add_node - it adds node to the list.
 * @head: the head.
 * @str: the str will be added.
 * Return: head ptr.
*/
list_t *add_node(list_t **head, const char *str)
{unsigned int len1;
	list_t *new_node;

	len1 = strlen(str);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len1;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
