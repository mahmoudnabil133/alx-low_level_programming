#include "main.h"
/**
 * print_last_digit - it prints last dig
 *
 * @n : the argument passed
 *
 * Return: the last diget
 */
int print_last_digit(int n)
{int l;
	if (n < 0)
		n = -n;
	l = n % 10;
	if (l < 0)
		l = -l;
	_putchar (l + '0');
	return (l);
}
