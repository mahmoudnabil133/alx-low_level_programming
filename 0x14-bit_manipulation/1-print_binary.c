#incude "main.h"
/**
 * print_binary - it print the num in pinary
 * @n: long int with 8 bytes ->(64bit) will be shifted.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{unsigned long int current;
	int count = 0, i;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0);
}
