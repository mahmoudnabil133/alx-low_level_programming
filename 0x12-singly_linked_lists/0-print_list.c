#include "lists.h"
/**
 * print_list - it prints a list
 * @h: struct pointer to head of the list.
 * Return: num of elements.
*/
size_t print_list(const list_t *h)
{size_t sum = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("%s\n", "[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		sum++;
		h = h->next;
	}
	return (sum);
}

