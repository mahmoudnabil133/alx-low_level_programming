#include "main.h"

/**
 * print_sign - check if the number is positive or negative
 *
 * @n: the number to be checked
 *
 * Return:1 if the n is positive 0 if zero -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
