#include "lists.h"
/**
 * dlistint_len - calc num of nodes in linked_list
 * @h: head of DLL.
 * Return: num of node.
*/
size_t dlistint_len(const dlistint_t *h)
{size_t sum = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
