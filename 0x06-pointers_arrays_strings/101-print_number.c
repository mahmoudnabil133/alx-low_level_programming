#include "main.h"
/**
 * print_number - it prints anumber wich bassed.
 * @n: the number will be printed
 */
void print_number(int n)
{int a;
	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
