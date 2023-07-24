#include "main.h"
#include <string.h>
/**
 * print_rev - reverse a string
 * @s: the string will be reversed
 */
void print_rev(char *s)
{int len, i;
	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
