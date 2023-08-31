#include "main.h"
/**
 * flip_bits - it show changes counts to convert a num to another.
 * @n: num1.
 * @m: num2.
 * Return: count of changes.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{unsigned int count = 0;
		int i = 64;
		unsigned long int current, Xor = n ^ m;

	while (i--)
	{
		current = Xor >> i;
		if (current & 1)
			count++;
	}
		return (count);
}
