#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - it print a rev  string with rec
 * @s: the string will be passed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
