#include "main.h"
/**
 * clear_bit - it clears a bit.
 * @n: ptr to num that we will clear a bit from.
 * @index: index of but will be cleared.
 * Return: 1 if succeeded -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{unsigned long int current, dec = 1;
	unsigned int i = index;

	if (index > 63)
		return (-1);
	while (i--)
		dec *= 2;
	current = *n >> index;
	if (current & 1)
		*n = *n - dec;
	return (1);
}
