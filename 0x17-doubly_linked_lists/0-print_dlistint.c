#include "lists.h"
/**
 * print_dlistint - it ptints a data of nodes.
 * @h: the head of the linked list.
 * Return: num of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{size_t sum = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}
	return (sum);
}
