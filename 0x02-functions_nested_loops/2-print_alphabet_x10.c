#include "main.h"
/*
 * * print 10 times the aplphbitec
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char ch = 'a'; ch <= 'z';ch++){
			_putchar(ch);
		}
		putchar('\n');
	}
}
