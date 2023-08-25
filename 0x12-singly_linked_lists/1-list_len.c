#include "lists.h"
/**
 * list_len - ret len of list.
 * @h: struct pointer to head of the list.
 * Return: num of elements.
*/
size_t list_len(const list_t *h)
{size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}

