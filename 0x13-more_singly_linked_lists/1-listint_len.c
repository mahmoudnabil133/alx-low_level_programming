#include "lists.h"
/**
 * listint_len - calc sum of nodes in the list.
 * @h: the header pointer to struct listint_t.
 * Return: sum of elements
*/
size_t listint_len(const listint_t *h)
{size_t sum = 0;
	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}
