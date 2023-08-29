#include "lists.h"
/**
 * print_listint - it print a list of int.
 * @h: the header pointer.
 * Return: num of nodes
*/
size_t print_listint(const listint_t *h)
{size_t sum = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}
	return (sum);
}
