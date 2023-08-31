#include "main.h"
/**
 * set_bit - set a bit.
 * @n: nummber we will set a bit in.
 * @index: the index of bit we will set.
 * Return: num after setting.
 */
int set_bit(unsigned long int *n, unsigned int index)
{unsigned long int current, inc = 1, i;

	if (index > 63)
		return (-1);
	for (i = 0; i < index; i++)
		inc *= 2;
	current = *n >> index;
	if (current & 1)
		inc = 0;
	*n += inc;
	return (1);
}
