#include "lists.h"
/**
 * list_len - ret len of list.
 * @h: struct pointer to head of the list.
 * Return: num of elements.
*/
size_t list_len(const list_t *h)
{size_t sum = 0;
	list_t *iterator = h;

	while (iterator != NULL)
	{
		sum++;
		iterator = iterator->next;
	}
	return (sum);
}
