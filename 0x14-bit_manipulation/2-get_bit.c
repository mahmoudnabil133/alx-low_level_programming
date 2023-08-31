#include "main.h"
/**
 * get_bit - it gets val of bet we want.
 * @n: num we will get a bit from.
 * @index: index of bit we want.
 * Return: val of bit or -1 if failed.
 */
int get_bit(unsigned long int n, unsigned int index)
{unsigned long int current;

	current = n >> index;
	if (index > 63)
		return (-1);
	if (current & 1)
		return (1);
	return (0);
}
