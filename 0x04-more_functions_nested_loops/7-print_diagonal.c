#include "main.h"
/**
 * print_diagonal - it prent a diagonal
 * @n: the number of diagonal will be printed
 */
void print_diagonal(int n)
{int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
