#include "main.h"
/**
 * print_list - it prints a list
 * @h: struct pointer to head of the list.
 * Return: num of elements.
*/
size_t print_list(const list_t *h)
{int sum = 0;
	list_t *iterator = h;

	while (iterator)
	{
		if (iterator->str == NULL)
		{
			printf("%s", "[0] (nil)");
			sum++;
			iterator = iterator->next;
			continue;
		}
		printf("[%u] %s\n", iterator->len, iterator->str);
		sum++;
		iterator = iterator->next;
	}
	return (sum);
}

